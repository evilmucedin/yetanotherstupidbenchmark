#include <fcntl.h>
#include <immintrin.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstdio>
#include <cstdint>
#include <cstring>

#include <functional>
#include <iostream>
#include <vector>

void readRLEByte() {
    auto fIn = open("rle.dat", O_RDONLY);

    static constexpr size_t BUFFER_SIZE = 1 << 16;
    uint8_t buffer[BUFFER_SIZE];
    size_t bufferPos = 0;
    size_t bufferLen = 0;

    auto readByte = [&](uint8_t& result) {
        if (bufferLen == bufferPos) {
            bufferLen = read(fIn, buffer, BUFFER_SIZE);
            bufferPos = 0;
        }
        if (bufferLen == bufferPos) {
            return false;
        }
        result = buffer[bufferPos++];
        return true;
    };

    int64_t sum = 0;
    uint8_t b;
    while (readByte(b)) {
        int n = 0;
        while (b < 128) {
            n = (n << 7) + b;
            readByte(b);
        }
        n = (n << 7) + b - 128;
        sum += n;
    }

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

void readRLEBuffer() {
    auto fIn = open("rle.dat", O_RDONLY);

    static constexpr size_t BUFFER_SIZE = 1 << 16;
    uint8_t buffer[BUFFER_SIZE];
    uint8_t const* pBuffer = nullptr;
    size_t bufferPos = 0;
    size_t bufferLen = 0;

    int64_t sum = 0;
    int n = 0;
    while ((bufferLen = read(fIn, buffer, BUFFER_SIZE))) {
        pBuffer = buffer;
        const uint8_t* const pBufferEnd = buffer + bufferLen;
        while (pBuffer != pBufferEnd) {
            if (*pBuffer < 128) {
                n = (n << 7) + *pBuffer;
            } else {
                n = (n << 7) + *pBuffer - 128;
                sum += n;
                n = 0;
            }
            ++pBuffer;
        }
    }

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

void readRLEMmap() {
    auto fIn = open("rle.dat", O_RDONLY);

    struct stat s;
    fstat(fIn, &s);
    auto buffer = reinterpret_cast<const uint8_t* const>(mmap(nullptr, s.st_size, PROT_WRITE, MAP_PRIVATE, fIn, 0));
    madvise(const_cast<void*>(reinterpret_cast<const void*>(buffer)), s.st_size, MADV_SEQUENTIAL | MADV_WILLNEED);

    int64_t sum = 0;
    int n = 0;
    const uint8_t* const pBufferEnd = buffer + s.st_size;
    auto pBuffer = buffer;
    while (pBuffer != pBufferEnd) {
        if (*pBuffer < 128) {
            n = (n << 7) + *pBuffer;
        } else {
            n = (n << 7) + (*pBuffer & 0x7F);
            sum += n;
            n = 0;
        }
        ++pBuffer;
    }

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

void readRLEMmapBit() {
    auto fIn = open("rle.dat", O_RDONLY);

    struct stat s;
    fstat(fIn, &s);
    auto buffer = reinterpret_cast<const uint8_t* const>(mmap(nullptr, s.st_size, PROT_WRITE, MAP_PRIVATE, fIn, 0));

    int64_t sum = 0;
    int n = 0;
    const uint8_t* const pBufferEnd = buffer + s.st_size;
    auto pBuffer = buffer;
    while (pBuffer != pBufferEnd) {
        if (*pBuffer & 0x80) {
            n = (n << 7) + (*pBuffer & 0x7f);
            sum += n;
            n = 0;
        } else {
            n = (n << 7) + *pBuffer;
        }
        ++pBuffer;
    }

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

void baseline() {
    auto fIn = open("rle.dat", O_RDONLY);

    struct stat s;
    fstat(fIn, &s);
    auto buffer = reinterpret_cast<const uint8_t* const>(mmap(nullptr, s.st_size, PROT_WRITE, MAP_PRIVATE, fIn, 0));
    madvise(const_cast<void*>(reinterpret_cast<const void*>(buffer)), s.st_size, MADV_SEQUENTIAL | MADV_WILLNEED);

    int64_t sum = 0;
    const uint8_t* const pBufferEnd = buffer + s.st_size;
    static constexpr size_t N = 8;
    const uint8_t* const pBufferEnd8 = pBufferEnd - (reinterpret_cast<size_t>(pBufferEnd) & 0x7);
    auto pBuffer = buffer;
    while (pBuffer != pBufferEnd8) {
        auto pByte8 = reinterpret_cast<const uint64_t* const>(pBuffer);
        sum += *pByte8;
        pBuffer += N;
    }
    while (pBuffer != pBufferEnd) {
        sum += *pBuffer;
        ++pBuffer;
    }

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

void readRLEMmapCodegen() {
    auto fIn = open("rle.dat", O_RDONLY);

    struct stat s;
    fstat(fIn, &s);
    auto buffer = reinterpret_cast<const uint8_t* const>(mmap(nullptr, s.st_size, PROT_WRITE, MAP_PRIVATE, fIn, 0));
    madvise(const_cast<void*>(reinterpret_cast<const void*>(buffer)), s.st_size, MADV_SEQUENTIAL | MADV_WILLNEED);

    int64_t sum0 = 0;
    int64_t sum1 = 0;
    int64_t sum2 = 0;
    int64_t sum3 = 0;
    int64_t sum4 = 0;
    int64_t sum5 = 0;
    int64_t sum6 = 0;
    int64_t sum7 = 0;
    int n = 0;
    using uint128_t = __uint128_t;
    const uint8_t* const pBufferEnd = buffer + s.st_size;
    static constexpr size_t N = 8;
    const uint8_t* const pBufferEnd8 = pBufferEnd - (reinterpret_cast<size_t>(pBufferEnd) & (N - 1));
    auto pBuffer = buffer;
    while (pBuffer != pBufferEnd8) {
        auto pByte8 = reinterpret_cast<const uint128_t* const>(pBuffer);
        // auto mask = _pext_u64(*pByte8, 0x8080808080808080);
        auto mask = _m_pmovmskb(*reinterpret_cast<const __m64* const>(pByte8));
#include "gen.cpp"
        pBuffer += N;
    }
    while (pBuffer != pBufferEnd) {
        if (*pBuffer < 128) {
            n = (n << 7) + *pBuffer;
        } else {
            n = (n << 7) + *pBuffer - 128;
            sum0 += n;
            n = 0;
        }
        ++pBuffer;
    }

    int64_t sum =
        sum0 + (sum1 << 7) + (sum2 << 14) + (sum3 << 21) + (sum4 << 28) + (sum5 << 35) + (sum6 << 42) + (sum7 << 49);
    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

void readRLEMmapSIMD() {
    auto fIn = open("rle.dat", O_RDONLY);

    struct stat s;
    fstat(fIn, &s);
    auto buffer = reinterpret_cast<const uint8_t* const>(mmap(nullptr, s.st_size, PROT_WRITE, MAP_PRIVATE, fIn, 0));
    madvise(const_cast<void*>(reinterpret_cast<const void*>(buffer)), s.st_size, MADV_SEQUENTIAL | MADV_WILLNEED);

    const uint8_t* const pBufferEnd = buffer + s.st_size;
    static constexpr size_t N = 32;
    const uint8_t* const pBufferEnd32 = buffer + (s.st_size & ~31) - 32;
    const uint8_t* pBuffer = buffer;
    const __m256i mask0 = _mm256_set1_epi8(0x7F);
    const __m256i mask1 = _mm256_set1_epi8(0x80);
    const __m256i zero = _mm256_setzero_si256();
    __m256i s0 = _mm256_setzero_si256();
    __m256i s1 = _mm256_setzero_si256();
    __m256i s2 = _mm256_setzero_si256();
    __m256i s3 = _mm256_setzero_si256();

    for (; pBuffer != pBufferEnd32; pBuffer += N) {
        __m256i a = _mm256_lddqu_si256(reinterpret_cast<const __m256i*>(pBuffer));  // _mm256_load_si256
        __m256i as = _mm256_lddqu_si256(reinterpret_cast<const __m256i*>(pBuffer + 1));
        __m256i ass = _mm256_lddqu_si256(reinterpret_cast<const __m256i*>(pBuffer + 2));
        __m256i b = _mm256_and_si256(a, mask1);
        __m256i bs = _mm256_and_si256(as, mask1);
        __m256i bss = _mm256_and_si256(ass, mask1);
        a = _mm256_and_si256(a, mask0);
        __m256i b0 = _mm256_cmpeq_epi8(b, mask1);
        __m256i a0 = _mm256_and_si256(a, b0);
        __m256i b1 = _mm256_cmpgt_epi8(b, bs);
        __m256i a1 = _mm256_and_si256(a, b1);
        __m256i bt = _mm256_or_si256(b, bs);
        __m256i b2 = _mm256_cmpgt_epi8(bt, mask1);
        __m256i a2 = _mm256_and_si256(a, b2);
        __m256i btt = _mm256_or_si256(_mm256_or_si256(b, bs), bss);
        __m256i b3 = _mm256_cmpgt_epi8(btt, mask1);
        __m256i a3 = _mm256_and_si256(a, b3);
        a0 = _mm256_sad_epu8(a0, zero);
        a1 = _mm256_sad_epu8(a1, zero);
        a2 = _mm256_sad_epu8(a2, zero);
        a3 = _mm256_sad_epu8(a3, zero);
        s0 = _mm256_add_epi64(s0, a0);
        s1 = _mm256_add_epi64(s1, a1);
        s2 = _mm256_add_epi64(s2, a2);
        s3 = _mm256_add_epi64(s3, a3);
    }

    s1 = _mm256_slli_epi64(s1, 7);
    s2 = _mm256_slli_epi64(s2, 14);
    s3 = _mm256_slli_epi64(s3, 21);
    s0 = _mm256_add_epi64(s0, s1);
    s0 = _mm256_add_epi64(s0, s2);
    s0 = _mm256_add_epi64(s0, s3);
    uint64_t n = 0;
    uint64_t sum = _mm256_extract_epi64(s0, 0) + _mm256_extract_epi64(s0, 1) + _mm256_extract_epi64(s0, 2) +
                   _mm256_extract_epi64(s0, 3);
    for (; pBuffer != pBufferEnd; ++pBuffer) {
        if (*pBuffer < 128) {
            n = (n << 7) + *pBuffer;
        } else {
            n = (n << 7) + *pBuffer - 128;
            sum += n;
            n = 0;
        }
    }

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

int main() {
    // readRLEByte();
    // readRLEBuffer();
    // readRLEMmap();
    // readRLEMmapBit();
    readRLEMmapSIMD();
#ifdef __BMI2__
    // readRLEMmapCodegen();
#else
    // readRLEMmap();
#endif
    // baseline();
    return 0;
}

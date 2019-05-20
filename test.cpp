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
    uint8_t b;
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
    uint8_t b;
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
    uint8_t b;
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

void readRLEMmapCodegen() {
    auto fIn = open("rle.dat", O_RDONLY);

    struct stat s;
    fstat(fIn, &s);
    auto buffer = reinterpret_cast<const uint8_t* const>(mmap(nullptr, s.st_size, PROT_WRITE, MAP_PRIVATE, fIn, 0));
    madvise(const_cast<void*>(reinterpret_cast<const void*>(buffer)), s.st_size, MADV_SEQUENTIAL | MADV_WILLNEED);

    int64_t sum = 0;
    uint8_t b;
    int n = 0;
    const uint8_t* const pBufferEnd = buffer + s.st_size;
    static constexpr size_t N = 8;
    const uint8_t* const pBufferEnd8 = pBufferEnd - (reinterpret_cast<size_t>(pBufferEnd) & 0x7);
    auto pBuffer = buffer;
    while (pBuffer != pBufferEnd8) {
        auto pByte8 = reinterpret_cast<const uint64_t* const>(pBuffer);
        auto mask = _pext_u64(*pByte8, 0x8080808080808080);
#include "gen.cpp"
        pBuffer += N;
    }
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

    std::cout << "sum=" << sum << std::endl;
    close(fIn);
}

int main() {
    // readRLEByte();
    // readRLEBuffer();
    // readRLEMmap();
    // readRLEMmapBit();
    readRLEMmapCodegen();
    return 0;
}

#include <cstdio>
#include <cstdint>
#include <fcntl.h>
#include <unistd.h>

void readRLE() {
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
    printf("sum=%ld\n", sum);
    close(fIn);
}

int main() {
    readRLE();
    return 0;
}

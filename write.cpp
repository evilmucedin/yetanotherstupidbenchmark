#include <cstdint>
#include <cstdio>
#include <cstdlib>

#include <iostream>

static constexpr size_t N = 300000000;
static constexpr size_t M = 100000;

void write() {
    srand(0);
    int64_t sum = 0;
    FILE* fOut = fopen("rle.dat", "wb");
    for (size_t i = 0; i < N; ++i) {
        auto n = rand() % M;
        sum += n;

        uint8_t bytes[10];
        int nbytes = 0;
        if (n == 0) {
            bytes[0] = 0;
            nbytes = 1;
        } else {
            while (n) {
                bytes[nbytes++] = n & 127;
                n = n >> 7;
            }
        }
        bytes[0] += 128;
        for (int byte = nbytes - 1; byte >= 0; --byte) {
            fwrite(&bytes[byte], 1, 1, fOut);
        }
    }
    fclose(fOut);
    std::cout << "sum=" << sum << std::endl;
}

int main() {
    write();
    return 0;
}

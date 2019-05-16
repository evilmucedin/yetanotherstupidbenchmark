#include <cstdio>
#include <cstdint>

void read() {
    FILE* fIn = fopen("rle.dat", "rb");
    int64_t sum = 0;
    int b;
    while ((b = _fgetc_nolock(fIn)) != EOF) {
        int n = 0;
        while (b < 128) {
            n = (n << 7) + b;
            b = fgetc(fIn);
        }
        n = (n << 7) + b - 128;
        sum += n;
    }
    printf("sum=%ld\n", sum);
}

int main() {
    read();
    return 0;
}

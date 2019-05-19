#!/usr/bin/env python3

def gen(n):
    if n == 0:
        return [[]]
    prev = gen(n - 1)
    result = []
    for p in prev:
        result.append(p + [0])
    for p in prev:
        result.append(p + [1])
    return result

def main():
    N = 8
    seqs = gen(N)
    prefix = ""
        
    print("static const auto UNPACKERS = std::vector<std::function<void()>>{")
    
    for s in seqs:
        mask = "0x"
        value = 0
        for b in s:
            if b:
                mask += "80"
                value = 2*value + 1
            else:
                mask += "00"
                value = 2*value
        if N == 8:
            mask += "ULL"

        # print("%s if (mask == %s) {" % (prefix, mask))
        # for i in range(N):
        #     if s[N - 1 - i]:
        #         print("n = (n << 7) + (pBuffer[%d] & 0x7f);" % i)
        #         print("sum += n;")
        #         print("n = 0;")
        #     else:
        #         print("n = (n << 7) + pBuffer[%d];" % i)
        # print("}")
        # prefix = "else"

        print("  [&]() {")
        for i in range(N):
            if s[N - 1 - i]:
                print("    n = (n << 7) + (pBuffer[%d] & 0x7f);" % i)
                print("    sum += n;")
                print("    n = 0;")
            else:
                print("    n = (n << 7) + pBuffer[%d];" % i)
        print("  },")
    print("};");


if __name__ == "__main__":
    main()

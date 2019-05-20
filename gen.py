#!/usr/bin/env python3

import sys

def gen(n):
    if n == 0:
        return [[]]
    prev = gen(n - 1)
    result = []
    for p in prev:
        result.append(p + [0])
        result.append(p + [1])
    return result

def main():
    N = 8
    seqs = gen(N)
    prefix = ""
        
    print("switch (mask) {")
    for s in seqs:
        value = 0
        for b in s:
            if b:
                value = 2*value + 1
            else:
                value = 2*value

        print("case %d: {" % value)
        for i in range(N):
            if s[N - 1 - i]:
                print("    sum += n << 7;")
                print("    sum += pBuffer[%d] & 0x7F;" % i)
                print("    n = 0;")
            else:
                print("    n = (n << 7) + pBuffer[%d];" % i)
        print("    break;")
        print("  }")
    print("};");


if __name__ == "__main__":
    main()

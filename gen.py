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

class DecoderState:
    def __init__(self):
        self.bytes = []
        self.flushed = False
        self.extra128 = 0

    def flush(self, last):
        if len(self.bytes) == 0:
            pass
        elif len(self.bytes) == 1:
            if last:
                if self.flushed:
                    print("    sum0 += pBuffer[%d];" % self.bytes[0])
                else:
                    if not self.flushed:
                        print("    sum1 += n;")
                        print("    sum0 += pBuffer[%d];" % self.bytes[0])
                    else:
                        print("    sum0 += pBuffer[%d];" % self.bytes[0])
                self.extra128 += 1
                if not self.flushed:
                    print("    n = 0;")
                self.flushed = True
            else:
                if not self.flushed:
                    print("    n = (n << 7) + pBuffer[%d];" % self.bytes[0])
                else:
                    print("    n = pBuffer[%d];" % self.bytes[0])
        else:
            if last:
                if self.flushed:
                    for index in range(len(self.bytes) - 1):
                        print("    sum%d += pBuffer[%d];" % (len(self.bytes) - index - 1, self.bytes[index]))
                else:
                    for index in range(len(self.bytes) - 1):
                        print("    n = (n << 7) + pBuffer[%d];" % self.bytes[index])
                    print("    sum1 += n;")
                print("    sum0 += pBuffer[%d];" % (self.bytes[-1]))
                self.extra128 += 1
                if not self.flushed:
                    print("    n = 0;")
                self.flushed = True
            else:
                for index in range(len(self.bytes) - 1):
                    print("    n = (n << 7) + pBuffer[%d];" % self.bytes[index])
                print("    n = (n << 7) + pBuffer[%d];" % (self.bytes[-1]))
        if not last:
            if self.extra128:
                print("    sum0 -= %d;" % (128*self.extra128))
                self.extra128 = 0
        self.bytes = []

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
        st = DecoderState()
        rs = s[::-1]
        for i in range(N):
            if rs[i]:
                st.bytes.append(i)
                st.flush(True)
            else:
                st.bytes.append(i)
        st.flush(False)
        print("    break;")
        print("  }")
    print("};");


if __name__ == "__main__":
    main()

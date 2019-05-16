using System;
using System.IO;

namespace test
{

class RLETest
{
    public static void ComputeSumDen(string filename)
    {
        var fs = new FileStream(filename, System.IO.FileMode.Open);
        long sum = 0;
        int b;
        while ( (b = fs.ReadByte()) != -1 ) {
            int n = 0;
            while (b < 128) {
                n = (n << 7) + b;
                b = fs.ReadByte();
            }
            n = (n << 7) + b - 128;
            sum += n;
        }
        Console.WriteLine("sum={0}", sum);
    }
    
    public static void ComputeSumAlex(string filename)
    {
        using var fs = new FileStream(fileName, FileMode.Open);
        using var lease = MemoryPool<byte>.Shared.Rent(MinBufferSize);
        using var buffer = lease.Memory;

        long sum = 0;
        int n = 0;
        while (true) {
            var count = fs.Read(buffer.Span);
            if (count == 0) {
                return sum + n;
            }
            ProcessSpan(buffer.Span.Slice(0, count), ref sum, ref n);
        }
    }

    private static void ProcessSpan(ReadOnlySpan<byte> span, ref long sum, ref int n) {
        var (sum1, n1) = (sum, n); // Copying to locals -- I suspect JIT compiler won't do this
        foreach (var b in span) {
            if (b < 128)
                n1 = (n1 << 7) + b;
            else {
                sum1 += (n1 << 7) + b - 128;
                n1 = 0;
            }
        }
        (sum, n) = (sum1, n1);
    }

    public static void Main()
    {
        // ComputeSumDen("rle.dat");
        ComputeSumAlex("rle.dat");
    }
}

}

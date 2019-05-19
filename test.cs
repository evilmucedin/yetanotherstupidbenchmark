using System;
using System.IO;
using System.Buffers;
using System.Diagnostics;

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
    
    public static int MinBufferSize = 1 << 16;
    
    public static void ComputeSumAlex(string fileName)
    {
        var sw = new Stopwatch();
        sw.Start();

        var fs = new FileStream(fileName, FileMode.Open);
        var lease = MemoryPool<byte>.Shared.Rent(MinBufferSize);
        var buffer = lease.Memory;

        long sum = 0;
        int n = 0;
        while (true) {
            var count = fs.Read(buffer.Span);
            if (count == 0) {
                Console.WriteLine("sum={0}", sum + n);
                sw.Stop();
                Console.WriteLine("elapsed={0}", sw.Elapsed);
                return;
            }
            ProcessSpan(buffer.Span.Slice(0, count), ref sum, ref n);
        }
    }

    private static void ProcessSpan(ReadOnlySpan<byte> span, ref long sum, ref int n) {
        var sum1 = sum;
        var n1 = n; // Copying to locals -- I suspect JIT compiler won't do this
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

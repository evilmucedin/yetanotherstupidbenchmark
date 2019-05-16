using System;
using System.IO;

namespace test
{

class RLETest
{
    public static void Main()
    {
        var fs = new FileStream("rle.dat", System.IO.FileMode.Open);
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
}

}

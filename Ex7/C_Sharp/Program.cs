using System;

namespace C_Sharp
{
    class Program
    {
        public static string ToBinary(int N)
        {
            int d = N;
            int q = -1;
            int r = -1;

            string binNumber = string.Empty;
            while (q != 1)
            {
                r = d % 2;
                q = d / 2;
                d = q;
                binNumber = r.ToString() + binNumber;
            }
            binNumber = q.ToString() + binNumber;
            return binNumber;
        }
        static void Main(string[] args)
        {
            int a;
            Console.Write("Nhap mot so nguyen: ");
            a= Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(ToBinary(a));
        }
    }
}

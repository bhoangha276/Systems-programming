using System;

namespace C_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i = 0;i < 20;i++)
            {
                System.Random random = new System.Random();   
                double a = random.NextDouble();
                Console.WriteLine(a);
            }
        }
    }
}

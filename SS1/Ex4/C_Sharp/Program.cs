using System;

namespace C_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleKeyInfo ki;
            while (true)
            {
                Console.Write("\nNhap phim bat ky (An ESC de thoat):");
                ki = Console.ReadKey();
                if (ki.Key == ConsoleKey.Escape)
                {
                    break;
                }
            }
        }
    }
}

using System;
using System.Text;

namespace C_Sharp
{
    class Program
    {

        public static void hex()
        {
            while (true)
            {
                Console.WriteLine("Chuyen ma hex(ESC de thoat): ");
                int d = (int)Console.ReadKey().Key;
                int value = 0;
                if (d==(int)ConsoleKey.Escape)
                {
                    break;
                }
                else
                {
                    value = d;
                    string hex = String.Format("0x{0:X}", value);
                    string kq = hex.Remove(0, 2);
                    Console.WriteLine("=>"+kq);
                }
            }
        }

        static void Main(string[] args)
        {
            hex();
        }
    }
}

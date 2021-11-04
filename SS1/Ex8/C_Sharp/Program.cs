using System;

namespace C_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int myInt;
            Console.Write("Nhap mot so nguyen: ");
            myInt = Convert.ToInt32(Console.ReadLine());
            string myHex = myInt.ToString("X");  // Gives you hexadecimal


            Console.WriteLine(myHex);
        }
    }
}

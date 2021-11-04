using System;
using System.Globalization;

namespace C_Sharp
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime aDateTime = DateTime.Now;
            Console.WriteLine(aDateTime);

            // CultureInfo viVn = new CultureInfo("vi-VN");
            // Console.WriteLine(aDateTime.ToString("d", viVn));
        }
    }
}

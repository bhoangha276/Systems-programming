using System;
using System.Text;

namespace C_Sharp
{
    class Program
    {

        public static string StringToHex(string hexstring)
        {
            StringBuilder sb = new StringBuilder();
            foreach (char t in hexstring)
            {
                //Note: X for upper, x for lower case letters
                sb.Append(Convert.ToInt32(t).ToString("x"));
            }
            return sb.ToString();
        }

        static void Main(string[] args)
        {
            string a;
            Console.Write("Nhap mot ki tu: ");
            a = Console.ReadLine();

            
            Console.Write(StringToHex(a));
        }
    }
}

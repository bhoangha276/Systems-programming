using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;

namespace C_
{
    class Program
    {
		public static void maxRand(int[] a, int n)
		{
			while (true)
			{
				Random r2 = new Random();
				int num = r2.Next();
				Console.WriteLine(num);
				for (int i = 0; i < n; i++)
				{
					if (a[0] == 0)
					{
						a[0] = a[1];
						n--;
					}
					a[n] = num;
				}
				n = n + 1;
				int tg;
				for (int i = 0; i < n; i++)
				{
					for (int j = i + 1; j < n; j++)
					{
						if (a[i] < a[j])
						{
							tg = a[i];
							a[i] = a[j];
							a[j] = tg;
						}
					}
				}
				Console.WriteLine("3 So Lon Nhat: " + a[0] + "," + a[1] + "," + a[2] );
				Thread.Sleep(5000);

			}
		}
        static void Main(string[] args)
        {
			int[] a = new int[100];
			maxRand(a, 1);
        }
    }
}

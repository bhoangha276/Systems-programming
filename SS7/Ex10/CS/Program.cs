using System;

namespace CS
{
    class Program
    {
        class ex1 
        {
            public static void SoNguyenRandom(int[] a, int n) 
            {
                for (int i = 0; i < n; i++)
                {
                    System.Random random = new System.Random();   
                    a[i] = random.Next(maxValue: 3000);
                    Console.Write("{0}\t", a[i]);
                }
            }

            public static int TimMinSoNguyen(int[] a, int n) 
            {
                int min = 0;
                for(int i = 1; i < n; ++i){
                    if(a[i]>2021){
                        min = a[i];
                        break;
                    }
                    else {
                        min = 0;
                    }
                }

                for(int i = 1; i < n; ++i){
                    if(a[i] > 2021 && a[i] < min){
                        min = a[i];
                    }
                }
                return min; 
            }

            public static void Bai1()
            {
                int[] a = new int[1000];
                SoNguyenRandom(a, 1000);
                int result = TimMinSoNguyen(a, 1000);
                Console.Write(result);
                if(result == 0){
                    Console.Write("\nKhong tim thay so nguyen nho nhat lon hon 2021!");
                }
                else Console.Write("\nSo nguyen nho nhat lon hon 2021: {0}\t", result);
            }
        }
        static void Main(string[] args)
        {
            ex1.Bai1();
        }
    }
}

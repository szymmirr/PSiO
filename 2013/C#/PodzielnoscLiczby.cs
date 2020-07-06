using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//using System.Numerics;

namespace ConsoleApplication7
{
    class Program
    {
        static void Main(string[] args)
        {
            long n;
            n = Convert.ToInt64(Console.ReadLine());
            //BigInteger big = new BigInteger(Console.ReadLine());
            int a;
            a = 0;
            if (n % 3 == 0)
            {
                a = 1;
                Console.Write(3);
            }
            if (n % 4 == 0)
            {
                a = 1;
                Console.Write(4);
            }
            if (n % 5 == 0)
            {
                a = 1;
                Console.Write(5);
            }
            if (a == 0)
            {
                Console.Write(0);
            }
            Console.ReadLine();
        }
    }
}

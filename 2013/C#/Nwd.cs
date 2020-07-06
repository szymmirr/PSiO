using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication3
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c;
            Console.WriteLine("Podaj pierwsza liczbe");
            a = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Podaj druga liczbe");
            b = Convert.ToInt32(Console.ReadLine());
            while (b != 0)
            {
                c = a % b;
                a = b;
                b = c;
            }
                Console.WriteLine("NWD tych liczb wynosi:");
                Console.WriteLine(a);

                Console.ReadLine();

        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication2
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c;
            double delta, x1, x2, x0;
            Console.WriteLine("Podaj a");
                a = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Podaj b");
                b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Podaj c");
                c = Convert.ToInt32(Console.ReadLine());
                
            delta=(b*b)-(4*a*c);

            Console.WriteLine("Delta wynosi:");
            Console.WriteLine(delta);
            Console.WriteLine();

            if(delta>0)
            {
                x1=(((-b)-(Math.Sqrt(delta)))/(2*a));
                x2=(((-b)+(Math.Sqrt(delta)))/(2*a));

                Console.WriteLine("x1 wynosi:");
                Console.WriteLine(x1);
                Console.WriteLine();
                Console.WriteLine("x2 wynosi:");
                Console.WriteLine(x2);

                Console.ReadLine();
            }
            else if (delta == 0)
            {
                x0 = ((-b) / (2 * a));
                Console.WriteLine("x0 wynosi:");
                Console.WriteLine(x0);

                Console.ReadLine();
            }
            else
            {
                Console.WriteLine("Brak rozwiazania");

                Console.ReadLine();
            }

        }
    }
}

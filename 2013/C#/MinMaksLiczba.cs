using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication4
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] tab = new int[5];
            int maks, min;
            Console.WriteLine("Podaj 5 liczb");
            tab[0] = Convert.ToInt32(Console.ReadLine());
            maks = tab[0];
            min = tab[0];
            for (int i = 1; i < 5; i++)
            {
                tab[i] = Convert.ToInt32(Console.ReadLine());
                if (tab[i] > maks)
                {
                    maks = tab[i];
                }
                if (tab[i] < min)
                {
                    min = tab[i];
                }
            }

            Console.WriteLine("Maks wynosi:");
            Console.WriteLine(maks);

            Console.WriteLine("Min wynosi:");
            Console.WriteLine(min);
            Console.ReadLine();
        }
    }
}

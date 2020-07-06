using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Podaj wielkosc tablicy");
            int a, j;
            a = Convert.ToInt32(Console.ReadLine());
            int[] tab = new int[a];
            for (int i = 1; i < a; i++)
            {
                tab[i] = i+1;
            }
            for (int i = 2; i < a; i++)
            {
                if (tab[i] != 0)
                {
                    j = i + i;
                    while (j < a)
                    {
                        tab[j] = 0;
                        j = j + i;
                    }
                }
            }
            Console.WriteLine("Liczby pierwsze to:");
            for (int i = 2; i < a; i++)
            {
                if (tab[i]!=0)
                {
                    Console.WriteLine(i);
                }
            }
            Console.ReadLine();
        }
    }
}

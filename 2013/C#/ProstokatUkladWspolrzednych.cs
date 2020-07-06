using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication6
{
    class Program
    {
        public struct Prostokat
        {
            public int x, y, wysokosc, szerokosc;
        }

        static void Main(string[] args)
        {
            Prostokat prostokat;
        Console.WriteLine("Podaj wspolrzedna x lewego gornego wierzcholka");
        prostokat.x = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Podaj wspolrzedna y lewego gornego wierzcholka");
        prostokat.y = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Podaj wysokosc prostokata");
        prostokat.wysokosc = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Podaj szerokosc prostokata");
        prostokat.szerokosc = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Wspolrzedna x to {0}, y to {1}, zas wysokosc wynosi {2}, a szerokosc {3}.", prostokat.x, prostokat.y, prostokat.wysokosc, prostokat.szerokosc);
        Console.ReadLine();
        }
    }
}

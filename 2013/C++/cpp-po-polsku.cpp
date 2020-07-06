#include <iostream>
#define wypisz cout
#define wczytaj cin
#define konieclinii endl
#define zadeklaruj int
#define zwroc return
#define funkcja zadeklaruj iloczyn(zadeklaruj a, zadeklaruj b){wynik=a*b;zwroc wynik;}
#define programglowny main
#define uzyjstd using namespace std

uzyjstd;
zadeklaruj a,b,wynik;

funkcja;

zadeklaruj programglowny()
{
    wypisz << "Podaj liczby" << konieclinii;
    wczytaj >> a >> b;
    wypisz << iloczyn(a,b);
    zwroc 0;
}
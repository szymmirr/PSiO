#include <iostream>

using namespace std;

int main()
{
    int liczba, w, wielkosc;
    w=0;
    cout << "Podaj liczbe" << endl;
    cin >>liczba;
    wielkosc=liczba;
    int tab[99]={};
    for(int i=2;i<=liczba;i++)
    {
        if(liczba%i==0)
        {
            tab[i]=i;
            liczba=liczba/i;
            w=w+1;
        }
    }
    for(int z=0;z<=wielkosc;z++)
    cout << tab[z];

    return 0;
}

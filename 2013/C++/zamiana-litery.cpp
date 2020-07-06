#include <iostream>

using namespace std;

int main()
{
    char tab[15]={};
    int i=0,z=0;
    char a;
    char b;
    cout << "Podaj tekst do zamiany liter";
    cin >> tab;
    cout << "Podaj litere jaka ma zostac zmieniona";
    cin >> a;
    cout << "Podaj zamiennik tej litery";
    cin >> b;

    for (int i=0;i<15;i++)
    {
        if (tab[i]==a)
        {
            tab[i]=b;
        }
    }
while (tab[z]!='\0')
{
    cout << tab[z];
    z++;
}
    return 0;
}

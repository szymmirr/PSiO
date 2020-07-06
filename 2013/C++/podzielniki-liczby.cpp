#include <iostream>

using namespace std;

int main()
{
    int liczba, l;
    int tab [999]={};
    cout << "Podaj liczbe" << endl;
    cin >> liczba;
    l=liczba;
    for(int i=0;i<l/2;i++)
    {
        if(l%i==0)
        {
            tab [i]=i;
            l=l/i;
        }
    }
    cout << "podzielniki to:" << endl;

    for(int i=0;i<liczba/2;i++)
    {
        if(l%i>0)
        {
            cout << tab [i];
        }
    }
    return 0;
}

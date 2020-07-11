#include <iostream>
#include <fstream>
using namespace std;
//ARMIA POLCYN
int main()
{
    ifstream plik("dane.txt");
    ofstream plik2("wynik.txt");
    int liczby[10];
    for(int i=0;i<10;i++)
    {
        plik>>liczby[i];
    }
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10-i;j++)
        {
            if (liczby[j]>liczby[j+1])
            {
                int tmp=liczby[j];
                liczby[j]=liczby[j+1];
                liczby[j+1]=tmp;
            }
        }
    }
    cout << "Posortowane liczby: " << endl;
    plik2 << "Posortowane liczby: " << endl;
    for(int i=0;i<10;i++)
    {
        cout<<liczby[i]<<endl;
        plik2<<liczby[i]<<endl;
    }
    cout << endl << "Liczby podzielne przez 5: " << endl;
    plik2 << endl << "Liczby podzielne przez 5: " << endl;
    for(int i=0;i<10;i++)
    {
        if(liczby[i]%5==0)
        {
            cout<<liczby[i]<<endl;
            plik2<<liczby[i]<<endl;
        }
    }
    return 0;
}

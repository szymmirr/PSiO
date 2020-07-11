#include <iostream>
#include <fstream>

using namespace std;

void odczyt(string tab[10])
{
    ifstream plik("wyrazy.txt");
    for (int i=0;i<10;i++)
    {
        plik>>tab[i];
        //cout<<tab[i]<<endl;
    }
}

void zamiana(string tab[10])
{
    int j=1;
    for (int i=0;i<5;i=i+2)
    {
        string tmp,tmp2;
        tmp=tab[i];
        tmp2=tab[j];
        tab[i]=tmp2;
        tab[j]=tmp;
        j=j+2;
        //cout<<tab[i]<<" "<<tab[j]<<endl;
    }
}

void zapis(string tab[10])
{
    ofstream plik2("zamienione.txt");
    int j=1;
    for (int i=0;i<10;i=i+2)
    {
        plik2<<tab[i]<<" "<<tab[j]<<endl;
        j=j+2;
    }
}

int main()
{
    string tab[10];
    odczyt(tab);
    zamiana(tab);
    zapis(tab);
    return 0;
}

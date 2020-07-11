#include <iostream>
#include <fstream>
using namespace std;
//ARMIA POLCYN
int main()
{
    ifstream plik("liczby.txt");
    ofstream plik2("wynik.txt");
    int tab[20];
    for(int i=0;i<20;i++)
    {
        plik >> tab[i];
    }
    for(int i=0;i<20;i=i+2)
    {
        plik2<<tab[i]+tab[i+1]<<endl;
    }
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik("imiona.txt");
    ofstream plik2;
    plik2.open("litery.txt");
    string tab[5];
    for (int i=0;i<5;i++)
    {
        plik >> tab[i];
        cout << tab[i][0]<<" ";
        cout << tab[i][tab[i].size()-1]<<endl;
        plik2 << tab[i][0]<<" ";
        plik2 << tab[i][tab[i].size()-1]<<endl;
    }
    return 0;
}

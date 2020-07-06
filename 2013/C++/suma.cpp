#include <iostream>

using namespace std;

int main()
{
    int tab[2][3]={};
    int suma=0;
    cout << "Podaj liczby" << endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin >> tab[i][j];
            suma=suma+tab[i][j];
        }
    }
    cout << suma << endl;
    return 0;
}

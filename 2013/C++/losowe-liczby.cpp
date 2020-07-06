#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x;
    srand(time(0));
    int tab[2][3]={};
    int suma, maks;
    suma=0;
    maks=0;
    cout << "Wszystkie liczby:" << endl;
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            x=1+rand()%21;
            tab[i][j]=x;
            cout << tab[i][j] << endl;
        }
    }
    cout << endl << "Liczby parzyste:" << endl;
        for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (tab[i][j]%2==0)
            {
            suma=suma+tab[i][j];
            cout << tab[i][j] << endl;

            if (maks<tab[i][j])
            {
                maks=tab[i][j];
            }
            }
        }
    }
    cout << endl << "Suma liczb parzystych wynosi: " << suma << endl;
    cout << endl << "Maks wynosi: " << maks << endl;
return 0;
}

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    int x;
    srand(time(0));
    int ta[6]={};
    int at[6]={};
    int j=0;
    int l=0;
    cout << "Podaj" << endl;
    for (int i=0;i<6;i++)
    {
        cin >> at[i];
    }

    cout << endl;

    for (int i=0;i<6;i++)
    {
        x=1+rand()%49;
        ta[i]=x;
        cout << ta[i];
        for (int k=0;k<6;k++)
        {
            if (ta[i]==at[k])
            {
               cout << " Trafione!!";
                l=l+1;
            }
        }
        cout << endl;
    }
    cout << endl << "Ilosc trafien: " << l;
    return 0;
}


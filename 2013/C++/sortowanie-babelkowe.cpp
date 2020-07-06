#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //50000
    //150000
    int x, cz1, cz2, cz3, cz4, cz5, cz6, cz7, tmp;
    srand(time(0));
    cz1=time(0);
    int tab[150000]{};
        for (int i=0;i<150000;i++)
        {
            x=1+rand()%150001;
            tab[i]=x;
        }
    cz2=time(0);
    cz3=cz2-cz1;
    cout << "Czas generowania liczb: " << cz3;
    for(int i=0;i<49999;i++)
    {
            for (int j=0;j<49999-i;j++)
            {
                if(tab[j]>tab[j+1])
                {
                    tmp=tab[j];
                    tab[j]=tab[j+1];
                    tab[j+1]=tmp;
                }
            }
    }
    cz4=time(0);
    cz5=cz4-cz3;
    cout << "Czas sortowania: " << cz5;
    cz6=time(0);
    cz7=cz3-cz6;
    cout << "Laczny czas: " << cz7;
}

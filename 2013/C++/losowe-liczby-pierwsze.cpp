#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void tabt(int tab[10])
{
    for (int i=0;i<10;i++)
    {
        for (int j=2;j<tab[i];j++)
        {
        if (tab[i]%j==0)
        {
            tab[i]=0;
        }
        }
    }
    for (int i=0;i<10;i++)
    {
        if(tab[i]!=0)
        cout << tab[i] << endl;
    }
    return;
}

int main()
{
    srand (time(0));
    int x;
    int tab[10]={};

    for (int i=0;i<10;i++)
    {
        x=1+rand()%49;
        tab[i]=x;
    }
    tabt(tab);

    return 0;
}
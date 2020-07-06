#include <iostream>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int tab[10][10];
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            tab[i][j]=rand()%2;
            if (tab[i][j]==0)
                cout << "O";
            else
                cout << "X";
            if(j==9)
                cout << endl;
        }
    }
    return 0;
}

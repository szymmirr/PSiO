#include <iostream>

using namespace std;

int main()
{
    int tab[5][5]={};
    int z=4;
    int y=0;
    cout << "no siema" << endl;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if(z==i&&y==j)
            {
                cout << "1";
            }
            else
            {
                cout << tab[i][j];
            }
            if(j==4)
            cout << endl;

            if (i==z)
            {
                z=z-1;
            }
            if (j==y)
            {
                y=y+1;
            }

            }
        }
    return 0;
    }

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream plik("dane.txt");
    int x=0,y=0,sumax=0,sumay=0,sumaprzyjazni=0,dzielnyky=0,dzielnykymin=99999,xmin=0,ymin=0;
    for (int j=0;j<500;j++)
    {
        sumax=0;
        sumay=0;
        dzielnyky=0;
        plik>>x;
        plik>>y;
        for(int i=1;i<=x/2;i++)
        {
            if (x%i==0)
            {
                sumax+=i;
                dzielnyky+=1;
            }
        }
        for(int i=1;i<=y/2;i++)
        {
            if (y%i==0)
            {
                sumay+=i;
                dzielnyky+=1;
            }
        }

        if(sumax==y&&sumay==x)
        {
            sumaprzyjazni+=1;
            if(dzielnyky<dzielnykymin)
            {
                dzielnykymin=dzielnyky;
                xmin=x;
                ymin=y;
            }
        }
    }
    cout<<sumaprzyjazni<<endl<<dzielnykymin<<endl;
    for(int i=1;i<=xmin/2;i++)
        {
            if (xmin%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
        for(int i=1;i<=ymin/2;i++)
        {
            if (ymin%i==0)
            {
                cout<<i<<" ";
            }
        }
    return 0;
}

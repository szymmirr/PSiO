#include <iostream>

using namespace std;

int main()
{
    int w,n,x;
    //int tab[]={};
    cout<<"podaj stopien wielomianu (dlugosc wyrazu minus 1): ";
    cin>>n;
    int tab[n+1];
    cout<<"podaj podstawe systemu (2,3,4,8,16): ";
    cin>>x;
    cout<<"podaj wyraz: ";
    for (int i=0;i<n+1;i++)
    {
        cin >>tab[i];
    }
    w=tab[0];
    for (int i=1;i<=n;i++)
    {
        w=w*x+tab[i];
    }
    cout<<endl<<w;
    return 0;
}
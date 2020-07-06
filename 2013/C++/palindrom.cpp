#include <iostream>

using namespace std;

int main()
{
    char tab[15]={};
    char tab2[15]={};
    char tabtab[15]={};
    int i=0,z=0;
    char a;
    char b;
    int licz=0;
    cout << "Podaj tekst";
    cin >> tab;
int w=0;
    for (int i=0;tab[i]!=NULL;i++)
    {
        w=w+1;
    }

int g=0;
int j=w;
for ( ;w>0;j--)
    {
        tabtab[j]=tab[g];
        g++;
    }
    cout << "1 tablica" << tab << endl;
    cout << "2 tablica" << tab2 << endl;
    cout << "3 tablica" << tabtab << endl;

    if (tab==tabtab)
    {
       cout << "To palindrom";
    }
    else
    {
        cout << "To nie palindrom";
    }

    return 0;
}

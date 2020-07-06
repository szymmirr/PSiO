#include <iostream>

using namespace std;

void podwajanie(int tab[5])
{
    for(int i=0;i<5;i++)
    {
        tab[i]=tab[i]*2;
    }
}

int main()
{
    int tab[5]={1,2,3,4,5};
    podwajanie(tab);
    for(int i=0;i<5;i++)
    {
        cout << tab[i] << " ";
    }
    return 0;
}

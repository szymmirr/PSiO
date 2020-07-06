#include <iostream>

using namespace std;

int main()
{
    char tab[15]={};
    int i;
    float a;
    cout << "Podaj wyraz" << endl;
    cin >> tab;
    for (i=0;tab[i]!=NULL;i++);
    a=i%2;
    if(a==0)
        cout << "Wyraz ma parzysta ilosc liter" << endl;
    else
        cout << "Wyraz ma nieparzysta ilosc liter" << endl;
    return 0;
}

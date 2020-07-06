#include <iostream>

using namespace std;

int main()
{
    char tab[5]={};
    cout << "Podaj piec liczb lub liter" << endl;
    for (int i=0;i<5;i++)
    cin >> tab[i];
    cout << endl;
    for (int i=4;i>=0;i--)
    cout << tab[i] << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj lancuch znakow" << endl;
    string lancuch;
    cin >> lancuch;
    int suma;
    suma=0;
    for (int i=0;i<lancuch.size();i++)
    {
        suma=suma+lancuch[i];
    }
    cout << endl << "Suma wszystkich znakow wynosi: " << suma << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    short a,b,c,s,w;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << endl << "Podaj druga liczbe" << endl;
    cin >> b;
    cout << endl << "Podaj trzecia liczbe" << endl;
    cin >> c;
    s =a+b+c;
    w =s/3;
    cout << endl << "Srednia tych liczb wynosi: " << w << "." << endl << endl << endl << endl << endl;
    return 0;
}

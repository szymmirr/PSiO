#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    char k;
    mnoz:
    cout << "Program sluzacy do nauki tabliczki mnozenia by szymmirr" << endl << endl;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << endl << "Podaj druga liczbe: ";
    cin >> b;
    c=a*b;
    cout << endl << "Jak sadzisz, jaki jest wynik? ";
    cin >> d;
    if(c==d)
    cout << endl << "Jestes taki zdolny, z cala pewnoscia musisz byc matematykiem" << endl;
    else
    cout << endl << "Jak ta matka z toba wytrzymuje lamerze?" << endl << endl;
    cout << endl << "Czy chcesz powtorzyc program? (t/n)" << endl;
    cin >> k;
    if(k=='t')
    {
        cout << endl;
        goto mnoz;
    }
    return 0;
}

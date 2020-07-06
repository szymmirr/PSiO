#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, delta, x1, x2, x0;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;
    delta=(b*b)-(4*a*c);
if(delta>0)
{
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    cout << "Funkcja ma dwa rozwiazania" << x1 << x2 << endl;
}
else if(delta==0)
{
    x0=(-b/(2*a));
    cout << "Funkcja ma jedno rozwiazanie" << x0 << endl;
}
else
{
    cout << "Funkcja nie ma rozwiazan!" << endl;
}
    return 0;
}

#include <iostream>

using namespace std;

int suma (int,int);
int roznica (int,int);
int iloczyn (int,int);
float iloraz (float,float);

int main()
{
    int z, a, b;
    cout << "Wybierz funkcje kalkulatora:" << endl << "1: Dodawanie" << endl << "2: Odejmowanie" << endl << "3: Mnozenie" << endl << "4: Dzielenie" << endl;
    cin >> z;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << "Podaj druga liczbe" << endl;
    cin >> b;
    switch (z)
    {
    case 1:
        {
        int x=suma(a,b);
        cout << x;
        break;
        }
    case 2:
        {
        int x=roznica(a,b);
        cout << x;
        break;
        }
    case 3:
        {
        int x=iloczyn(a,b);
        cout << x;
        break;
        }
    case 4:
        {
        float x=iloraz(a,b);
        cout << x;
        break;
        }
    }
}

int suma (int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int roznica (int a, int b)
{
    int c;
    c=a-b;
    return c;
}
int iloczyn (int a, int b)
{
    int c;
    c=a*b;
    return c;
}
float iloraz (float a, float b)
{
    float c;
    c=a/b;
    return c;
}

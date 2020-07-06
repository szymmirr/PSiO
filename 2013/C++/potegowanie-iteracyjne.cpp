#include <iostream>

using namespace std;

int wynik=1;

int potega(int a, int n)
{
    for(int i=1;i<=n;i++)
    {
        wynik=wynik*a;
    }
    return wynik;
}

int main()
{
    int a,n;
    cin >> a >> n;
    cout << potega(a,n);
    return 0;
}

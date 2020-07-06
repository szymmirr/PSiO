#include <iostream>

using namespace std;

int wynik=1;

int potega(int a, int n)
{
    if (n==0)
        return 1;
    else
    return wynik=a*potega(a,--n);
}

int main()
{
    int a,n;
    cin >> a >> n;
    cout << potega(a,n);
    return 0;
}

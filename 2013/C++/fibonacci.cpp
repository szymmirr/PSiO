#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj n-ty wyraz ciagu fibonacciego";
    int n, a, b;
    cin >> n;
    if (n==0)
    {
        return 0;
    }
    a=0;
    b=1;
    for(int i=0; i<(n-1); i++)
    {
        b=b+a;
        a=b-a;
    }
    cout << n << " wyraz ciagu fibonacciego wynosi: " <<b;

    return 0;
}

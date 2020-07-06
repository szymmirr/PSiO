#include <iostream>

using namespace std;

int silnia=1;

int rekur(int n)
{
    if(n>=1)
        silnia=n*rekur(n-1);
    return silnia;
}

int main()
{
    int n;
    cin >> n;
    cout << rekur(n);
    return 0;
}

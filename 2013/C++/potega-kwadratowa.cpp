#include <iostream>

using namespace std;

int k(int a)
{
    a=a*a;
    return a;
}

int main()
{
    int a;
    cout << "Podaj" << endl;
    cin >> a;
    cout << k(a);
    return 0;
}

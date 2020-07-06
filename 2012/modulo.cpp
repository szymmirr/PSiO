#include <iostream>

using namespace std;

int main()
{
    int i, a, b, c;
cout << "Podaj liczbe";
cin >> a;
b=2;
for (; b<a; b++)
{
    if (a%2==0)
    {
        cout << b << endl;
    }
    else
    {
        cout << "nic" << endl;
    }
}
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n,a;
    cin >> n;
    a=1;
    for (unsigned long long int i=1;i<=n;i++)
    {
        a*=i;
    }

cout << a;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    a=0;
    b=1;
    for(int i=0; i<(n-1); i++)
    {
        b+=a;
        a=b-a;
    }
    cout<<b;
    return 0;
}

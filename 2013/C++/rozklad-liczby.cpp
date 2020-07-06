#include <iostream>

using namespace std;

void rozk(int n)
{
    int d=2;
    for (int i=0;n>1;i++)
    {
        for(;n%d==0;)
        {
            cout << d << " ";
            n=n/d;
        }
        d=d+1;
    }
    return;
}

int main()
{
    int n;
    cout << "Podaj";
    cin >> n;
    rozk(n);
    return 0;
}

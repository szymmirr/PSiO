#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<100;i++)
    {
        if (i>=n)
    {
        cout<<"tak";
        break;
    }
    if (n % i==0)
    {
        cout<<"nie";
        break;
    }
    }


    return 0;
}

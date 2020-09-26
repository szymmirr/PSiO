#include <iostream>

using namespace std;

int main()
{
    int total = 2;
for (int x=5;x<15;x++)
{
    if (x%2==0)
    {
        total+=x;
    }
}

cout<<total;
}

#include <iostream>

using namespace std;

int main()
{
    int x, i, z, r;
    z=1;
    r=0;
    cout << "Podaj liczbe" << endl;
    cin >> x;
    for(i=1 ; z<=(x/2) ; i++)
    {
        if (x%z==0)
        {
        r=r+1;
        z=z+1;
        }
        z++;
    }
    if (r==1)
    {
    cout << "Liczba jest pierwsza, nie ma zadnych innych podzielnikow." << endl;
    }
    else
    {
    cout << "Liczba nie jest pierwsza, ma " << r << " podzielniki/ow." << endl;
    }
    return 0;
}

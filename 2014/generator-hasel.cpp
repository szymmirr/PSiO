#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    cout << "Podaj ile hasel chcesz wygenerowac: " << endl;
    int ilehasel,ileznakow;
    cin >> ilehasel;
    cout << "Podaj ile liter maja miec hasla (domyslnie 8): " << endl;
    cin >> ileznakow;
    cout << endl;
    char x;
    for (int i=0;i<ilehasel;i++)
    {
        for (int j=0;j<ileznakow;j++)
        {
            x=33+rand()%90;
            cout << x;
        }
        cout << endl;
    }
    return 0;
}

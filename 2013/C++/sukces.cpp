#include <iostream>

using namespace std;

int main()
{
    int sukces;
    cout << "Podaj ilosc sukcesow, na ktore chcesz zapracowac: ";
    cin >> sukces;
    cout << endl;
    while (sukces)
    {
        cout << "Pracuje na sukces" << endl;
        sukces--;
    }
    return 0;
}

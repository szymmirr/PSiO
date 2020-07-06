#include <iostream>

using namespace std;

string lancuch;
void dlugosc()
{
    cout << lancuch.size();
    return;
}
int main()
{
    cout << "Podaj tekst" << endl;
    cin >> lancuch;
    dlugosc();
    return 0;
}

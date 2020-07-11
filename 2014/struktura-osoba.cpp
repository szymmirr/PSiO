#include <iostream>
using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba o1;
    o1.imie=("Janusz");
    o1.nazwisko=("Maj");
    o1.wiek=(69);
    cout << o1.imie << " " << o1.nazwisko << " " << o1.wiek;
    return 0;
}

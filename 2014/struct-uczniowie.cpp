#include <iostream>

using namespace std;
    struct uczen
    {
        string imie;
        string nazwisko;
        int wiek;
        float srednia;
        void wypiszdane();
    };

        void uczen::wypiszdane()
        {
            cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl << "Wiek: " << wiek << endl << "Srednia: " << srednia << endl << endl;
        }

int main()
{
    uczen u1,u2,u3,u4;
    u1.imie="Alek";
    u1.nazwisko="Huk";
    u1.wiek=18;
    u1.srednia=1.7;

    u2.imie="Ardian";
    u2.nazwisko="Wyrzykiewski";
    u2.wiek=18;
    u2.srednia=2.1;

    u3.imie="Filip";
    u3.nazwisko="Dolszewsky";
    u3.wiek=18;
    u3.srednia=2.0;

    u4.imie="Jeremiasz";
    u4.nazwisko="Igielski";
    u4.wiek=17;
    u4.srednia=6.0;

    u1.wypiszdane();
    u2.wypiszdane();
    u3.wypiszdane();
    u4.wypiszdane();
    return 0;
}
#include <iostream>
#include <windows.h>

using namespace std;

    struct ksiazka
    {
        string tytul, autor;
        int ilosc;
        void wypiszdane();
        void wypozycz();
    };

    void ksiazka::wypiszdane()
    {
        cout << "Tytul: " << tytul << endl << "Autor: " << autor << endl << "Ilosc: " << ilosc << endl << endl;
    }


int main()
{

    ksiazka k1,k2,k3,k4,k5;
    k1.tytul="Aleksander Huk - Biografia";
    k1.autor="Filip Bartoszewski";
    k1.ilosc=1;

    k2.tytul="AP++ Podrecznik dla zaawansowanych";
    k2.autor="John Polcyn";
    k2.ilosc=6;

    k3.tytul="Podstawy trollingu";
    k3.autor="Igor Jaslowski";
    k3.ilosc=2;

    k4.tytul="101 sposobow na shackowanie serwera";
    k4.autor="Albert Ostrowka";
    k4.ilosc=2;

    k5.tytul="Programowanie dla zielonych";
    k5.autor="Szymon Kuzminski";
    k5.ilosc=3;

    cout << "Witamy w programie Armia Polcyn Library 1.0 napisanym w jezyku AP++" << endl;
    while(true)
{
    cout << endl << "1 - Aby przejrzec katalog" << endl << "2 - Aby wypozyczyc ksiazke" << endl << "3 - Aby oddac ksiazke" << endl << "Wpisz numer: ";
    int wybor,wypoz;
    cin >> wybor;
    cout << endl << endl;

    switch (wybor)
    {
    case 1:
        k1.wypiszdane();
        k2.wypiszdane();
        k3.wypiszdane();
        k4.wypiszdane();
        k5.wypiszdane();
        break;

    case 2:
        cout << endl << "1." << endl;
        k1.wypiszdane();
        cout << "2." << endl;
        k2.wypiszdane();
        cout << "3." << endl;
        k3.wypiszdane();
        cout << "4." << endl;
        k4.wypiszdane();
        cout << "5." << endl;
        k5.wypiszdane();
        cout << "Podaj numer ksiazki, ktora chcesz wypozyczyc: ";
        cin >> wypoz;
        if(wypoz == 1 && k1.ilosc!=0)
        {
            k1.ilosc--;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x02); cout << endl << endl << " -- Wypozyczono! -- " << endl << endl; SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
        }
        if(wypoz == 2 && k1.ilosc!=0)
        {
            k2.ilosc--;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x02); cout << endl << endl << " -- Wypozyczono! -- " << endl << endl; SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
        }
        if(wypoz == 3 && k1.ilosc!=0)
        {
            k3.ilosc--;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x02); cout << endl << endl << " -- Wypozyczono! -- " << endl << endl; SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
        }
        if(wypoz == 4 && k1.ilosc!=0)
        {
            k4.ilosc--;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x02); cout << endl << endl << " -- Wypozyczono! -- " << endl << endl; SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
        }
        if(wypoz == 5 && k1.ilosc!=0)
        {
            k5.ilosc--;
            SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x02); cout << endl << endl << " -- Wypozyczono! -- " << endl << endl; SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
        }
        break;

    case 3:
        cout << endl << "1." << endl;
        k1.wypiszdane();
        cout << "2." << endl;
        k2.wypiszdane();
        cout << "3." << endl;
        k3.wypiszdane();
        cout << "4." << endl;
        k4.wypiszdane();
        cout << "5." << endl;
        k5.wypiszdane();
        cout << "Podaj numer ksiazki, ktora chcesz oddac: ";
        cin >> wypoz;
        if(wypoz == 1)k1.ilosc++;
        if(wypoz == 2)k2.ilosc++;
        if(wypoz == 3)k3.ilosc++;
        if(wypoz == 4)k4.ilosc++;
        if(wypoz == 5)k5.ilosc++;
        SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x02); cout << endl << endl << " -- Oddano! -- " << endl << endl; SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 0x07);
        break;
    }
}
    return 0;
}

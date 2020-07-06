#include <iostream>

using namespace std;

int main()
{
    char tab[10]={'q','w','e','r','t','y','u','i','o','p'};
    char dodawanie=tab[3]+tab[8];
    char odejmowanie=tab[1]+tab[5];
    char mnozenie=tab[8]+tab[0];
    char dzielenie=tab[7]+tab[4];
    char porownywanie=tab[2]<tab[6]?tab[2]:tab[6];
    cout << "dodawanie " << dodawanie << endl;
    cout << "odejmowanie " << odejmowanie << endl;
    cout << "mnozenie " << mnozenie << endl;
    cout << "dzielenie " << dzielenie << endl;
    cout << "porownywanie " << porownywanie << endl;
    return 0;
}

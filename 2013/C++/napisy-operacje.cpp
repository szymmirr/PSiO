#include <iostream>

using namespace std;

int main()
{
    string napis="PSiONajlepszyPrzedmiot";
    string napis2="co";
    cout << napis << endl;
    cout << napis.empty() << endl;
    cout << napis.at(10) << endl;
    //cout << napis.swap(3&8) << endl;
    //cout << napis.find(lepszy) << endl;
    cout << napis.substr(4,9) << endl;
    //cout << napis.clear() << endl;
    cout << napis.empty() << endl;
    cout << napis << endl;
    return 0;
}

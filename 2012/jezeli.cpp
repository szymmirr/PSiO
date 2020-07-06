#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d, s, w;
    cout << "Podaj dwie liczby" << endl;
    cin >> a;
    cin >> b;
    s=a+b;
    if(s>10)
    {
        w=s*2;
    }
    else
    {
        w=s/2;
    }
    cout << "Wyjsciowa to " << w;
    return 0;
}

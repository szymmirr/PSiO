#include <iostream>

using namespace std;

int main()
{
float i, j, a;
cout << "Podaj wielkosc choinki" << endl;
cin >> a;
for( i=0 ; i<a ; i+1 )
    {
    for( j=0 ; j<=a-1 ; j++ )
    cout << "*";
    cout << endl;
    a-- ;
    }
return 0;
}

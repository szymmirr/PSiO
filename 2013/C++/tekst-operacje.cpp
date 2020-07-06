#include <iostream>
using namespace std;

int main()
{

char dana[100];
cout<<"wprowadz tekst"<<endl;
cin.getline( dana,sizeof(dana) );
cout << "wpisales: " << dana << endl << endl;

cout << "podaj dwa slowa\n";
string dana2, dana3;
cin>>dana2 >> dana3;
cout << "wpisales: \n" << dana2 << endl << dana3 << endl;

return 0;
}

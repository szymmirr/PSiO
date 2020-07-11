#include<sstream>
#include<iostream>
#include<string>
using namespace std;


int main()
{
int i,j;
int wyraz;
cin >> wyraz;


ostringstream ss;
ss << wyraz;
string str = ss.str();


for (i = 0, j = str.length()-1; i < j; i++, j--)
{
if (str[i] != str[j])
break;
}
if (i < j)
cout << "Podany wyraz nie jest palindromem" << endl;
else
cout << "Podany wyraz jest palindromem" << endl;

return 0;
}

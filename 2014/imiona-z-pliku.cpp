#include <iostream>
#include <fstream>
using namespace std;
//ARMIA POLCYN smieszki
int main()
{
    string imiona[5];
    ifstream plik("C:/imiona.txt");
    for (int i=0;i<5;i++)
    {
        plik>>imiona[i];
    }
    for (int i=4;i>=0;i--)
    {
        cout<<imiona[i]<<endl;
    }
    return 0;
}

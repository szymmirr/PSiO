#include <iostream>
#include <fstream>

//          #armiapolcyn #programowanie

using namespace std;
int main()
{
    ifstream imiona("imiona.txt");
    ofstream litery("litery.txt");
    string tab[5],temp;
    for(int i=0;i<5;i++)
    {
        imiona >> tab[i];
        temp=tab[i];
        litery << temp[0] << temp[temp.size()-1] << endl;
    }
    return 0;
}

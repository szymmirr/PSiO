#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
//by szymmirr ARMIA POLCYN programming developing testing coding team

int main()
{
    srand(time(0));
    ofstream plik("C:/armia_polcyn.txt");
    for(int x,i=0;i<100;i++)
    {
        x=1+rand()%999;
        plik<<x<<endl;
    }
    cout << "Twoj dysk zostal przepelniony terabajtami bezuzytecznych liczb";
    return 0;
}

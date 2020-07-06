#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int tab[10]{2,5,1,7,3,1,2,9,4,3};
    std::sort(tab,tab+10);
    for(int i=0;i<10;i++)
        cout << tab[i];
}

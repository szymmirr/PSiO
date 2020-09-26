#include <iostream>
using namespace std;
int main()
{
    //banan
    string slowo;
    int klucz;
    cout<<"podaj dlugosc klucza"<<endl;
    cin>>klucz;
    cout<<"podaj slowo do zaszyfrowania"<<endl;
    cin>>slowo;
    while(slowo.size()%klucz!=0)
    {
        slowo+='z';
    }

    for(int i=0;i<slowo.size();i+=klucz)
    {
        char tempek=slowo[i];
        slowo[i]=slowo[i+klucz-1];
        for(int j=i+klucz-1;j>i+klucz-3;j--)
        {
            slowo[j]=slowo[j-1];
        }
        slowo[i+1]=tempek;
    }
    cout<<slowo;
    return 0;
}

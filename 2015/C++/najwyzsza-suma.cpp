#include <iostream>
using namespace std;
int main()
{
    int n,suma=0,makssuma=0;
    cout<<"podaj dlugosc ciagu"<<endl;
    cin>>n;
    int tab[n];
    cout<<"podaj ciag"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>tab[i];
    }

    for(int i=0;i<n;i++)
    {
        suma=i;
        for(int j=1;j<n;j++)
        {
            suma+=tab[j];
        }
        if(suma>makssuma)
        {
            makssuma=suma;
        }
    }
    cout<<"najwyzsza suma wynosi: "<<makssuma;
    return 0;
}

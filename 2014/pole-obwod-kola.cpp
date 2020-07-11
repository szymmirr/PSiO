#include<iostream>
#include<math.h>
using namespace std;
class kolo
{
long double promien,pole,obwod;
string kolor;
public:
kolo()
{
pole=0;
}
kolo(long double r, string k)
{
kolor=k;
promien=r;
}
void licz_pole();
void licz_obwod();
~kolo()
{
cout << endl << "Wszystkie dane zostaly zniszczone." << endl;
}
};
void kolo::licz_pole()
{
pole=M_PI*promien*promien;
cout <<"Pole kola wynosi: "<< pole << endl;
}
void kolo::licz_obwod()
{
obwod=2*M_PI*promien;
cout <<"Obwod kola wynosi: "<< obwod << endl;
}
int main()
{
kolo k1(5,"armijny");
k1.licz_pole();
k1.licz_obwod();
}

#include<iostream>
using namespace std;
class zwierze
{
    protected:
    int ilosc_konczyn;
    string kolor;
};
class pies
: public zwierze
{
    int pogryzionych_ludzi;
    string rasa,choroby;
    bool uspiony;
    public:
    pies(int konczyny,string k,string r,int pogryzieni,bool spi,string chor)
    {
        ilosc_konczyn=konczyny;
        kolor=k;
        rasa=r;
        pogryzionych_ludzi=pogryzieni;
        choroby=chor;
        uspiony=spi;
    }
    void wyswietl()
    {
        cout << "Ilosc konczyn: " << ilosc_konczyn << "Kolor: " << kolor << "Rasa: " << rasa << "Pogryzionych ludzi: " << pogryzionych_ludzi << "Uspiony? " << uspiony << "Choroby: " << choroby;
    }
};
int main()
{
    pies p1(4,"czarny","pitbull",12,true,"zespol downa");
}
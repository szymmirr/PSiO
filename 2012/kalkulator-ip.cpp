#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float oktet1, oktet2, oktet3, oktet4, maska, nowamaska, nailepodsieci, przeskok, przedprzeskok;
    float oktet1s, oktet2s, oktet3s, oktet4s, oktet1r, oktet2r, oktet3r, oktet4r;
    float oktet1sr, oktet2sr, oktet3sr, oktet4sr;
    cout << "Uber kalkulator IP na SoiS v0.1 by zolnierz Armii Polcyna - szymmirr, 2012" << endl;
    cout << "Licencja dla: Szymon Mirr" << endl;
    cout << "Licencja wygasa: Nigdy" << endl << endl;
    cout << "Podaj pierwszy oktet adresu IP" << endl;
    cin >> oktet1;
    cout << "Podaj drugi oktet adresu IP" << endl;
    cin >> oktet2;
    cout << "Podaj trzeci oktet adresu IP" << endl;
    cin >> oktet3;
    cout << "Podaj czwarty oktet adresu IP" << endl;
    cin >> oktet4;
    cout << "Podaj maske" << endl;
    cin >> maska;
    cout << "Na ile podsieci mam podzielic?" << endl;
    cin >> nailepodsieci;

    oktet4s=0; //ustalanie wartosci temu debilnemu programowi, bo nie rozumie, ze jak nie ma nic, to jest zero
    oktet4sr=0;

//maskely
if(maska==32)
{
    cout << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4 << " - " << 255 << "." << 255 << "." << 255 << "." << 255 << " /" << maska <<endl;
    cout << "Uwaga! Nie jestem pewien czy tak dziala maska 32!" << endl << endl;
    cout << endl << "Adres sieci: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4 << endl;
    cout << "Adres rozgloszeniowy: " << 255 << "." << 255 << "." << 255 << "." << 255 << endl;
}
else if(maska==24)
{
    cout << oktet1 << "." << oktet2 << "." << oktet3 << "." << 0 << " - " << oktet1 << "." << oktet2 << "." << oktet3 << "." << 255 << " /" << maska <<endl;
    cout << endl << "Adres sieci: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << 0 << endl;
    cout << "Adres rozgloszeniowy: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << 255 << endl;
}
else if(maska==16)
{
    cout << oktet1 << "." << oktet2 << "." << 0 << "." << 0 << " - " << oktet1 << "." << oktet2 << "." << 255 << "." << 255 << " /" << maska <<endl;
    cout << endl << "Adres sieci: " << oktet1 << "." << oktet2 << "." << 0 << "." << 0 << endl;
    cout << "Adres rozgloszeniowy: " << oktet1 << "." << oktet2 << "." << 255 << "." << 255 << endl;
}
else if(maska==8)
{
    cout << oktet1 << "." << 0 << "." << 0 << "." << 0 << " - " << oktet1 << "." << 255 << "." << 255 << "." << 255 << " /" << maska <<endl;
    cout << endl << "Adres sieci: " << oktet1 << "." << 0 << "." << 0 << "." << 0 << endl;
    cout << "Adres rozgloszeniowy: " << oktet1 << "." << 255 << "." << 255 << "." << 255 << endl;
}
else if(maska>24)
{
    przedprzeskok=32-maska;
    przedprzeskok=pow(2, przedprzeskok);
    cout << endl << "cisnij na 4 oktecie" << endl;
    cout << "Przedprzeskok wynosi: " << przedprzeskok << endl << endl;

    oktet4sr=oktet4sr+(przedprzeskok-1);
    cout << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << " - " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4sr << " /" << maska <<endl;


    for ( ; oktet4s<=oktet4 && oktet4>=oktet4sr; )
    {
    oktet4s=oktet4s+przedprzeskok;
    oktet4sr=oktet4sr+przedprzeskok;
    cout << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << " - " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4sr << " /" << maska <<endl ;
    }

    cout << endl << "Adres sieci: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << endl;
    cout << "Adres rozgloszeniowy: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4sr << endl;

}


else if(maska>16)
{
    oktet4s=0;
    cout << "Adres sieci to: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << endl;


    przedprzeskok=24-maska;
    przedprzeskok=pow(2, przedprzeskok);
    cout << endl << "cisnij na 3 oktecie" << endl;
    cout << "Przedprzeskok wynosi: " << przedprzeskok << endl << endl;

    oktet4sr=oktet4sr+(przedprzeskok-1);
    cout << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << " - " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4sr << " /" << maska <<endl;


    for ( ; oktet4s<=oktet4 && oktet4>=oktet4sr; )
    {
    oktet4s=oktet4s+przedprzeskok;
    oktet4sr=oktet4sr+przedprzeskok;
    cout << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << " - " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4sr << " /" << maska <<endl ;
    }

    cout << endl << "Adres sieci: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << endl;
    cout << "Adres rozgloszeniowy: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4sr << endl;

}
else if(maska>8)
{
    cout << "na drugim" << endl;
}
else if(maska>0)
{
    cout << "na pierwszym" << endl;
}
else
{
    cout << "cos skaszaniles" << endl;
}





//wyznaczanie nowej maski
if(nailepodsieci=2048)
{
    nowamaska=maska+11;
}
else if(nailepodsieci=1024)
{
    nowamaska=maska+10;
}
else if(nailepodsieci=512)
{
    nowamaska=maska+9;
}
else if(nailepodsieci=256)
{
    nowamaska=maska+8;
}
else if(nailepodsieci=128)
{
    nowamaska=maska+7;
}
else if(nailepodsieci=64)
{
    nowamaska=maska+6;
}
else if(nailepodsieci=32)
{
    nowamaska=maska+5;
}
else if(nailepodsieci=16)
{
    nowamaska=maska+4;
}
else if(nailepodsieci=8)
{
    nowamaska=maska+3;
}
else if(nailepodsieci=4)
{
    nowamaska=maska+2;
}
else if(nailepodsieci=2)
{
    nowamaska=maska+1;
}
else if(nailepodsieci>1024)
{
    nowamaska=maska+11;
}
else if(nailepodsieci>512)
{
    nowamaska=maska+10;
}
else
{
    cout << "cos skaszaniles" << endl;
}


//wyznaczanie wartosci przeskoku
przeskok=32-nowamaska;

przeskok=pow(2, przeskok);

    cout << "Przeskok bedzie wynosil " << przeskok << endl;


//wyznaczanie adresu sieci
if(maska>24)
{
    oktet4s;
    cout << "Adres sieci to: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << endl; //blabla Ÿle
}
else if(maska>16)
{
    oktet4s=0;
    cout << "Adres sieci to: " << oktet1 << "." << oktet2 << "." << oktet3 << "." << oktet4s << endl;
}
else if(maska>8)
{
    cout << "na drugim" << endl;
}
else if(maska>0)
{
    cout << "na pierwszym" << endl;
}
else
{
    cout << "cos skaszaniles" << endl;
}





//przeskok
if(nowamaska>24)
{
    cout << "Pracuj na czwartym oktecie" << endl;
}
else if(nowamaska>16)
{
    cout << "na trzecim" << endl;
}
else if(nowamaska>8)
{
    cout << "na drugim" << endl;
}
else if(nowamaska>0)
{
    cout << "na pierwszym" << endl;
}
else
{
    cout << "cos skaszaniles" << endl;
}




    return 0;
}

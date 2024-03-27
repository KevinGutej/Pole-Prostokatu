#include <iostream>

using namespace std;

float obliczPole(float dlugosc, float szerokosc)
{
    return dlugosc * szerokosc;
}

float obliczObjetosc(float dlugosc, float szerokosc, float wysokosc)
{
    return dlugosc * szerokosc * wysokosc;
}

int main()
{
    float dlugosc, szerokosc, wysokosc;
    cout << "Podaj dlugosc prostokata: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc prostokata: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc prostopadloscianu: ";
    cin >> wysokosc;

    float pole = obliczPole(dlugosc, szerokosc);
    cout << "Pole prostokata: " << pole << endl;

    float objetosc = obliczObjetosc(dlugosc, szerokosc, wysokosc);
    cout << "Objetosc prostopadloscianu: " << objetosc << endl;

    return 0;
}

#include <iostream>
#include <cmath>

double calculateSin(double x, int n)
{
    double wynik = 0;
    for (int i = 0; i < n; ++i)
    {
        int wykładnik = 2 * i + 1;
        double składnik = pow(-1, i) * pow(x, wykładnik) / tgamma(wykładnik + 1);
        wynik += składnik;
    }
    return wynik;
}

int main()
{
    double stopien_Kata;
    cout << "Podaj swoj kat w stopniach: ";
    cin >> stopien_Kata;
    double radianem = stopien_Kata * M_PI / 180.0;
    double wartość_Sinus = calculateSin(radianem, 10);
    cout << "Wyniki sinusa(" << stopien_Kata << ") = " << wartość_Sinus << endl;

    return 0;
}
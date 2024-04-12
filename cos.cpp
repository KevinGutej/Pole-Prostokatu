#include <iostream>
#include <cmath>

double cosine(double x, int n)
{
    double wynik = 1;
    double składnik = 1;
    double znak = -1;
    for (int i = 2; i <= n; i += 2)
    {
        składnik *= x * x / (i * (i - 1));
        wynik += znak * składnik;
        znak = -znak;
    }
    return wynik;
}

int main()
{
    double kat;
    int n;
    cout << "Podaj kąt w radianach: ";
    cin >> kat;
    cout << "Podaj liczbę składników do przybliżenia: ";
    cin >> n;
    double wartość_cosinusa = cosine(kat, n);
    cout << "Kosinus " << kat << " radianów wynosi przybliżenie: " << wartość_cosinusa << endl;

    return 0;
}

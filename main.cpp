#include <iostream>
#include <string.h>
#include "konwerter.hpp"

using namespace std;

int main()
{
    cout << "Podaj liczbę arabską: ";
    int liczba;
    cin >> liczba;
    Konwerter K(liczba);
    K.jednosci();
    K.dziesietne();
    K.setne();
    K.tysiecy();
    cout << "Oto liczba rzymska: " << K.d << K.c << K.b << K.a << endl;
    return 0;
}

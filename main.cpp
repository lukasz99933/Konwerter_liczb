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
    K.result();
    cout << "Oto liczba rzymska: " << K.wynik << endl;
    return 0;
}

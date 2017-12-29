#include <iostream>
#include <string.h>
#include "konwerter.hpp"

using namespace std;

int main()
{
    //cout << "Podaj liczbę arabską: ";
    int liczba;
    //cin >> liczba;
    liczba = 1204;
    Konwerter K(liczba);
    K.result();
    cout << "Oto liczba rzymska liczby 1204: " << K.wynik << endl;
    if (K.wynik == "MCCIV") {
        cout << "Zamiana przebiegła pomyślnie!" << endl;
    }
    return 0;
}

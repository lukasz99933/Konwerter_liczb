#include <iostream>
#include <string.h>
#include "konwerterarabski.hpp"
#include "konwerterrzymski.hpp"

using namespace std;

int main()
{
    //cout << "Podaj liczbę arabską: ";
    int liczba;
    //cin >> liczba;
    liczba = 1204;
    Konwerterarabski K(liczba);
    cout << "Oto liczba rzymska liczby 1204: " << K.result() << endl;
    if (K.result() == "MCCIV") {
        cout << "Zamiana przebiegła pomyślnie!" << endl;
    }
	Konwerterrzymski J("MCCIV");
	J.konwertowanie();
	cout << "Zamiana z powrotem na liczbę arabską " << J.wynik<<endl;	
    return 0;
}

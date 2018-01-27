#include "konwerterarabski.hpp"
#include <string.h>
using namespace std;

Konwerterarabski::Konwerterarabski(int podana_liczba)
{
    liczba_jednosci = podana_liczba % 10;
    liczba_dziesiatek = podana_liczba / 10 % 10;
    liczba_setek = podana_liczba / 100 % 10;
    liczba_tysiecy = podana_liczba / 1000;
    i = "I";
    v = "V";
    x = "X";
    l = "L";
    cc = "C";
    m = "M";
    dd = "D";
}

void Konwerterarabski::zamiana_na_rzymskie(string znak1, string znak2, string znak3, int liczba)
{
    if (liczba == 9) {
        e = znak3 + znak1;
    }
    if (liczba == 8) {
        e = znak2 + znak3 + znak3 + znak3;
    }
    if (liczba == 7) {
        e = znak2 + znak3 + znak3;
    }
    if (liczba == 6) {
        e = znak2 + znak3;
    }
    if (liczba == 5) {
        e = znak2;
    }
    if (liczba == 4) {
        e = znak3 + znak2;
    }
    if (liczba == 3) {
        e = znak3 + znak3 + znak3;
    }
    if (liczba == 2) {
        e = znak3 + znak3;
    }
    if (liczba == 1) {
        e = znak3;
    }
}

void Konwerterarabski::jednosci()
{
    zamiana_na_rzymskie(x, v, i, liczba_jednosci);
    a = e;
}

void Konwerterarabski::dziesietne()
{
    zamiana_na_rzymskie(cc, l, x, liczba_dziesiatek);
    b = e;
}
void Konwerterarabski::setne()
{
    zamiana_na_rzymskie(m, dd, cc, liczba_setek);
    c = e;
}
void Konwerterarabski::tysiecy()
{
    zamiana_na_rzymskie("ERROR", "ERROR", m, liczba_tysiecy);
    d = e;
}

void Konwerterarabski::result()
{
    if (liczba_tysiecy != 0) {
        tysiecy();
        wynik = d;
    }
    if (liczba_setek != 0) {
        setne();
        wynik += c;
    }
    if (liczba_dziesiatek != 0) {
        dziesietne();
        wynik += b;
    }
    if (liczba_jednosci != 0) {
        jednosci();
        wynik += a;
    }
}

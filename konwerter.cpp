#include "konwerter.hpp"
#include <string.h>
using namespace std;

Konwerter::Konwerter(int podana_liczba)
{
    liczba_jednosci = podana_liczba % 10;
    liczba_dziesiatek = podana_liczba / 10 % 10;
    liczba_setek = podana_liczba / 100 % 10;
    liczba_tysiecy = podana_liczba / 1000;
    i="I";
    v="V";
    x="X";
    l="L";
    cc="C";
    m="M";
}

void Konwerter::zamiana_na_rzymskie(string znak1,string znak2, string znak3, int liczba)
{
    if (liczba == 9) {
        e = znak3+znak1;
    }
    if (liczba == 8) {
        e = znak2+znak3+znak3+znak3;
    }
    if (liczba == 7) {
        e = znak2+znak3+znak3;
    }
    if (liczba == 6) {
        e = znak2+znak3;
    }
    if (liczba == 5) {
        e = znak2;
    }
    if (liczba == 4) {
        e = znak3+znak2;
    }
    if (liczba == 3) {
        e = znak3+znak3+znak3;
    }
    if (liczba == 2) {
        e = znak3+znak3;
    }
    if (liczba == 1) {
        e = znak3;
    }
}

void Konwerter::jednosci()
{
    if(liczba_jednosci!=0)
    {
        zamiana_na_rzymskie(x,v,i,liczba_jednosci);
        a=e;
    }
}

void Konwerter::dziesietne()
{
    if (liczba_dziesiatek == 9) {
        b = "XC";
    }
    if (liczba_dziesiatek == 8) {
        b = "LXXX";
    }
    if (liczba_dziesiatek == 7) {
        b = "LXX";
    }
    if (liczba_dziesiatek == 6) {
        b = "LX";
    }
    if (liczba_dziesiatek == 5) {
        b = "L";
    }
    if (liczba_dziesiatek == 4) {
        b = "XL";
    }
    if (liczba_dziesiatek == 3) {
        b = "XXX";
    }
    if (liczba_dziesiatek == 2) {
        b = "XX";
    }
    if (liczba_dziesiatek == 1) {
        b = "X";
    }
}
void Konwerter::setne()
{
    if (liczba_setek == 9) {
        c = "CM";
    }
    if (liczba_setek == 8) {
        c = "DCCC";
    }
    if (liczba_setek == 7) {
        c = "DCC";
    }
    if (liczba_setek == 6) {
        c = "DC";
    }
    if (liczba_setek == 5) {
        c = "D";
    }
    if (liczba_setek == 4) {
        c = "CD";
    }
    if (liczba_setek == 3) {
        c = "CCC";
    }
    if (liczba_setek == 2) {
        c = "CC";
    }
    if (liczba_setek == 1) {
        c = "C";
    }
}
void Konwerter::tysiecy()
{
    if (liczba_tysiecy == 3) {
        d = "MMM";
    }
    if (liczba_tysiecy == 2) {
        d = "MM";
    }
    if (liczba_tysiecy == 1) {
        d = "M";
    }
}

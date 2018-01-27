#ifndef konwerterarabski_hpp
#define konwerterarabski_hpp
#include <string>
using namespace std;

class Konwerterarabski {
    int liczba_jednosci;
    int liczba_dziesiatek;
    int liczba_setek;
    int liczba_tysiecy;
    string i;
    string v;
    string x;
    string cc;
    string l;
    string m;
    string dd;
    string a;
    string b;
    string c;
    string d;
    string e;

    void zamiana_na_rzymskie(string znak1, string znak2, string znak3, int liczba);
    void jednosci();
    void dziesietne();
    void setne();
    void tysiecy();

public:
    void result();
    string wynik;
    Konwerterarabski(int podana_liczba);
};

#endif

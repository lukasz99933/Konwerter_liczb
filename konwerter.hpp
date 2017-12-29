#ifndef konwerter_hpp
#define konwerter_hpp
#include <string>
using namespace std;

class Konwerter {
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
    Konwerter(int podana_liczba);
};

#endif

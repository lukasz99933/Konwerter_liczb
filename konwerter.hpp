#ifndef konwerter_hpp
#define konwerter_hpp
#include <string.h>
#include <iostream>
using namespace std;

class Konwerter {
public:
    int liczba_jednosci;
    int liczba_dziesiatek;
    int liczba_setek;
    int liczba_tysiecy;
    string a;
    string b;
    string c;
    string d;

    Konwerter(int podana_liczba);
    void jednosci();
    void dziesietne();
    void setne();
    void tysiecy();
};

#endif

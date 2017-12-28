#include<iostream>

using namespace std;

class Konwerter
{
    public:
    int liczba_jednosci;
    int liczba_dziesiatek;
    int liczba_setek;
    int liczba_tysiecy;
    Konwerter(int podana_liczba)
    {
        liczba_jednosci = podana_liczba%10;
        liczba_dziesiatek = podana_liczba/10%10;
        liczba_setek = podana_liczba/100%10;
        liczba_tysiecy = podana_liczba/1000;
    }
    
};

int main()
{
    int liczba;
    cin>>liczba;
    Konwerter K(liczba);
    cout << K.liczba_jednosci << endl << K.liczba_dziesiatek << endl << K.liczba_setek << endl << K.liczba_tysiecy << endl;
    return 0;   
}

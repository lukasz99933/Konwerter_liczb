#include<iostream>
#include<string.h>

using namespace std;

class Konwerter
{
    public:
    int liczba_jednosci;
    int liczba_dziesiatek;
    int liczba_setek;
    int liczba_tysiecy;
    string a;
    
    Konwerter(int podana_liczba)
    {
        liczba_jednosci = podana_liczba%10;
        liczba_dziesiatek = podana_liczba/10%10;
        liczba_setek = podana_liczba/100%10;
        liczba_tysiecy = podana_liczba/1000;
    }
    void jednosci()
    {
        if(liczba_jednosci == 9)
        {
            a= "IX";
        }
        if(liczba_jednosci == 8)
        {
            a= "VIII";
        }
        if(liczba_jednosci == 7)
        {
            a="VII";
        }
        if(liczba_jednosci ==6)
        {
            a="VI";
        }
        if(liczba_jednosci ==5)
        {
            a="V";
        }
        if(liczba_jednosci ==4)
        {
            a="IV";
        }
        if(liczba_jednosci ==3)
        {
            a="III";
        }
        if(liczba_jednosci ==2)
        {
            a="II";
        }
        if(liczba_jednosci ==1)
        {
            a="I";
        }
        
    }
    
};

int main()
{
    int liczba;
    cin>>liczba;
    Konwerter K(liczba);
    cout << K.liczba_jednosci << endl << K.liczba_dziesiatek << endl << K.liczba_setek << endl << K.liczba_tysiecy << endl;
    K.jednosci();
    cout <<"Arabskie"<< K.a<<endl;
    return 0;   
}

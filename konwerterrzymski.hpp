#ifndef konwerterrzymski_hpp
#define konwerterrzymski_hpp
#include <string>
using namespace std;

class Konwerterrzymski
{
    char m;
    char d;
    char c;
    char l;
    char x;
    char v;
    char i;
    string cyfra;
	int dlugosc_wyrazu; 

	public:
    Konwerterrzymski(string podana_cyfra);
	void konwertowanie();
	int wynik;
	
};

#endif

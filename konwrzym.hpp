#ifndef konwrzym_hpp
#define konwrzym_hpp
#include <string>
using namespace std;

class Konwerterrzym
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
    Konwerterrzym(string podana_cyfra);
	void konwertowanie();
	int wynik;
	
};

#endif

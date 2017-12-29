#ifndef konwrzym_hpp
#define konwrzym_hpp
#include <string>
using namespace std;

class Konwerterrzym
{
    char m='M';
    char d='D';
    char c='C';
    char l='L';
    char x='X';
    char v='V';
    char i='I';
    char tab[10];
    string cyfra;


	public:
    Konwerterrzym(string podana_cyfra);
	void konwertowanie();
	int wynik;
	int dlugosc_wyrazu; 
};

#endif

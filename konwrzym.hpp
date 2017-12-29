#ifndef konwrzym_hpp
#define konwrzym_hpp
#include <string>
using namespace std;

class Konwerterrzym
{
    char g='M';
    char f='D';
    char e='C';
    char d='L';
    char c='X';
    char b='V';
    char a='I';
    char poprzednia;
    string cyfra;


	public:
    Konwerterrzym(string podana_cyfra);
	void konwertowanie();
	int wynik;
	int dlugosc_wyrazu; 
};

#endif

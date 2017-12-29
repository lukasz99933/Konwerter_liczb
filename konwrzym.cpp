#include "konwrzym.hpp"
#include<string>


using namespace std;

Konwerterrzym::Konwerterrzym(string podana_cyfra)
{
    cyfra=podana_cyfra;
	dlugosc_wyrazu=podana_cyfra.length();
}

void Konwerterrzym::konwertowanie()
{
	for(;dlugosc_wyrazu>=0;dlugosc_wyrazu--)
	{
		if(cyfra[dlugosc_wyrazu]==i)
		{
			wynik+=1;
		}
	}
}

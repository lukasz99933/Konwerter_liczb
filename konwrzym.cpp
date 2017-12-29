#include "konwrzym.hpp"
#include<string>


using namespace std;

Konwerterrzym::Konwerterrzym(string podana_cyfra)
{
    cyfra=podana_cyfra;
	dlugosc_wyrazu=podana_cyfra.length();
	wynik=0;
	m='M';
    d='D';
    c='C';
    l='L';
    x='X';
    v='V';
    i='I';
}

void Konwerterrzym::konwertowanie()
{
	for(;dlugosc_wyrazu>=0;dlugosc_wyrazu--)
	{
		
		if(cyfra[dlugosc_wyrazu-1]==i && cyfra[dlugosc_wyrazu]==v)
		{
				wynik+=4;
				dlugosc_wyrazu--;
		}
		else if(cyfra[dlugosc_wyrazu-1]==i && cyfra[dlugosc_wyrazu]==x)
		{
				wynik+=9;
				dlugosc_wyrazu--;
		}
		else if(cyfra[dlugosc_wyrazu-1]==x && cyfra[dlugosc_wyrazu]==l)
		{
				wynik+=40;
				dlugosc_wyrazu--;
		}
		else if(cyfra[dlugosc_wyrazu-1]==x && cyfra[dlugosc_wyrazu]==c)
		{
				wynik+=90;
				dlugosc_wyrazu--;
		}
		else if(cyfra[dlugosc_wyrazu-1]==c && cyfra[dlugosc_wyrazu]==d)
		{
				wynik+=400;
				dlugosc_wyrazu--;
		}
		else if(cyfra[dlugosc_wyrazu-1]==c && cyfra[dlugosc_wyrazu]==m)
		{
				wynik+=900;
				dlugosc_wyrazu--;
		}
		else if(cyfra[dlugosc_wyrazu]==i)
		{
				wynik+=1;
		}
		else if(cyfra[dlugosc_wyrazu]==v)
		{
				wynik+=5;
		}
		else if(cyfra[dlugosc_wyrazu]==x)
		{
				wynik+=10;
		}
		else if(cyfra[dlugosc_wyrazu]==l)
		{
				wynik+=50;
		}
		else if(cyfra[dlugosc_wyrazu]==c)
		{
				wynik+=100;
		}
		else if(cyfra[dlugosc_wyrazu]==d)
		{
				wynik+=500;

		}
		else if(cyfra[dlugosc_wyrazu]==m)
		{
				wynik+=1000;

		}
	}
}

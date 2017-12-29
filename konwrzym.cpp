#include "konwrzym.hpp"
#include<string>


using namespace std;

Konwerterrzym::Konwerterrzym(string podana_cyfra)
{
    cyfra=podana_cyfra;
	dlugosc_wyrazu=podana_cyfra.length();
	wynik=0;
}

void Konwerterrzym::konwertowanie()
{
	for(;dlugosc_wyrazu>=0;dlugosc_wyrazu--)
	{
		if(cyfra[dlugosc_wyrazu]==a)
		{
			wynik+=1;
			poprzednia=a;
		}
		if(cyfra[dlugosc_wyrazu]==b)
		{
			wynik+=5;
			poprzednia=b;
		}
		if(cyfra[dlugosc_wyrazu]==c)
		{
			wynik+=10;
			poprzednia=c;
		}
		if(cyfra[dlugosc_wyrazu]==d)
		{
			wynik+=50;
			poprzednia=d;
		}
		if(cyfra[dlugosc_wyrazu]==e)
		{
			wynik+=100;
			poprzednia=e;
		}
		if(cyfra[dlugosc_wyrazu]==f)
		{
			wynik+=500;
			poprzednia=f;
		}
		if(cyfra[dlugosc_wyrazu]==g)
		{
			wynik+=1000;
			poprzednia=g;
		}
	}
}

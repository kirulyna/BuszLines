#pragma once
#include "korkoroslista.h"

struct adat
{
	char nevek[100];
	int	megalok;
};

class Busz
{
	adat* buszom;
	int busszama;
	KorkorosLista *Lista;
public:
	Busz();
	~Busz();
	void Busszama(int);                          //megakpja a buszamot
	void Megnevezes(int);                        //megnevezem egy bizonyos busz megalloit
	void Kiir(int);                              // kiirasnak formaja, 1 megallot ir ki
	void buszkiir(KorkorosLista);                // kiir egy bizonyos busz osszes megallojat
	void Megadottmegallokiir(int,KorkorosLista); //kiirja egy bizonyos busz bizonyos megallojatol korkorosen a tobbi megallot
};

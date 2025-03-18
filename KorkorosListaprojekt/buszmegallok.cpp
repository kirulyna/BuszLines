#include <iostream>
#include <cstring>
#include <ctime>
#include "korkoroslista.h"
#include "buszmegallok.h"

using namespace std;

Busz::Busz()
{
	buszom = new adat;
	Lista = new KorkorosLista;
}

Busz::~Busz()
{
	delete buszom;
	if (Lista != nullptr)
	{
		delete Lista;
	}
}

void Busz::Busszama(int bszm)
{
	switch (bszm)
	{
		case 25:
		{
			Busz::busszama = bszm;
			break;
		}
		case 21:
		{
			Busz::busszama = bszm;
			break;
		}
		case 43:
		{
			Busz::busszama = bszm;
			break;
		}
		case 6:
		{
			Busz::busszama = bszm;
			break;
		}
		case 30:
		{
			Busz::busszama = bszm;
			break;
		}
	}
}

void Busz::Megnevezes(int  megallo )
{
	buszom->megalok = megallo;
	if (Busz::busszama == 25)
	{
		switch (buszom->megalok)
		{
			case 1:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Disp.Clabucet");
				break;
			}
			case 2:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Primaverii");
				break;
			}
			case 3:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Minerva");
				break;
			}
			case 4:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Izlazului");
				break;
			}
			case 5:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Calea Manastur");
				break;
			}
			case 6:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Agronomia");
				break;
			}
			case 7:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Memorandumului S");
				break;
			}
			case 8:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Victoria");
				break;
			}
			case 9:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Regionala CFR");
				break;
			}
			case 10:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Biserica Sf.Petru");
				break;
			}
			case 11:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata Marasti");
				break;
			}
			case 12:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Maresal C.Prezan");
				break;
			}
			case 13:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Dorobantilor");
				break;
			}
			case 14:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Campus Universitar V");
				break;
			}
			case 15:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Iulius Mall V");
				break;
			}
			case 16:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Valeriu Bologa");
				break;
			}
		}
	}
	else if (Busz::busszama == 21)
	{
		switch (buszom->megalok)
		{
			case 1:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata M.Viteazul S");
				break;
			}
			case 2:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Opera");
				break;
			}
			case 3:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata Cipariu S");
				break;
			}
			case 4:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata I.Agarbiceanu V");
				break;
			}
			case 5:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Drapelului V");
				break;
			}
			case 6:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Becas V");
				break;
			}
			case 7:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Fagului");
				break;
			}
			case 8:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Trifoiului N");
				break;
			}
			case 9:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Vitacom N");
				break;
			}
			case 10:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Compl. Tempus N");
				break;
			}
			case 11:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Hexagon");
				break;
			}
			case 12:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Drum Faget");
				break;
			}
			case 13:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Dacia Service");
				break;
			}
		}
	}
	else if (Busz::busszama == 43)
	{
		switch (buszom->megalok)
		{
			case 1:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Observatorului Nord");
				break;
			}
			case 2:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Spitalul de Recuperare Nord");
				break;
			}
			case 3:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Gheorghe Dima");
				break;
			}
			case 4:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Frunzisului");
				break;
			}
			case 5:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Cocosul de Aur");
				break;
			}
			case 6:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Peana");
				break;
			}
			case 7:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Garbau");
				break;
			}
			case 8:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Bucium");
				break;
			}
			case 9:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Nodul N Nord");
				break;
			}
			case 10:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Vivo CLuj-Napoca");
				break;
			}
		}
	}
	else if (Busz::busszama == 6)
	{
		switch (buszom->megalok)
		{
			case 1:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Disp. Clabucet");
				break;
			}
			case 2:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Primaverii");
				break;
			}
			case 3:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Minerva");
				break;
			}
			case 4:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Izlazului");
				break;
			}
			case 5:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Calea Manastur");
				break;
			}
			case 6:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Agronomia");
				break;
			}
			case 7:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Calea Motilor");
				break;
			}
			case 8:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Memorandumului S");
				break;
			}
			case 9:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Victoria");
				break;
			}
			case 10:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Regionala CFR");
				break;
			}
			case 11:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Biserica Sf.Petru");
				break;
			}
			case 12:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata Marasti");
				break;
			}
			case 13:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Maresal C.Prezan");
				break;
			}
			case 14:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Siretului");
				break;
			}
			case 15:
			{
				strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Pod Someseni");
				break;
			}
		}
	}
	else if (Busz::busszama == 30)
	{
		switch (buszom->megalok)
		{
		case 1:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Dispecerat Grigorescu");
			break;
		}
		case 2:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Radio Romania Cluj");
			break;
		}
		case 3:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Petuniei");
			break;
		}
		case 4:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Iancu de Hunedoara");
			break;
		}
		case 5:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata 14 Iulie V");
			break;
		}
		case 6:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Cluj Arena");
			break;
		}
		case 7:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Hotel Sport");
			break;
		}
		case 8:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Calea Motilor");
			break;
		}
		case 9:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Memorandumului S");
			break;
		}
		case 10:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Victoria");
			break;
		}
		case 11:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Regionala CFR");
			break;
		}
		case 12:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Biserica Sf.Petru");
			break;
		}
		case 13:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Piata Marasti");
			break;
		}
		case 14:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Mrs. Constantin Prezan");
			break;
		}
		case 15:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Siretului");
			break;
		}
		case 16:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Pod Someseni");
			break;
		}
		case 17:
		{
			strcpy_s(buszom->nevek, sizeof(buszom->nevek), "Dispecerat IRA");
			break;
		}
		}
	}
}

void Busz::Kiir(int megallo)
{
	if (Lista != nullptr)
	{
		if (buszom->megalok == megallo)
			cout << " ----> " << buszom->megalok << "." << buszom->nevek;
	}
}

void Busz::buszkiir(KorkorosLista Lista)
{
	if (Busz::busszama == 25)
	{
		int meddig = 16;
		//lista feltoltese elemekkel
		for (int i = 1; i <= meddig; i++)
		{
			Lista.vegererak(i);
		}
		cout << "|==========================================| Linia: " << Busz::busszama << endl;
		//lista elemeit atalakitjuk megallok neveire es kiirjuk
		for (int i = 0; i <= meddig; i++)
		{
			Busz::Megnevezes(Lista.vegighalad(i));
			Busz::Kiir(Lista.vegighalad(i));
		}
		cout << endl << "|==========================================|";
	}
	else if (Busz::busszama == 21)
	{
		int meddig = 13;
		for (int i = 1; i <= meddig; i++)
		{
			Lista.vegererak(i);
		}
		cout << "|==========================================| Linia:  " << Busz::busszama << endl;
		for (int i = 0; i <= meddig; i++)
		{
			Busz::Megnevezes(Lista.vegighalad(i));
			Busz::Kiir(Lista.vegighalad(i));
		}
		cout << endl << "|==========================================|";
	}
	else if (Busz::busszama == 43)
	{
		int meddig = 10;
		for (int i = 1; i <= meddig; i++)
		{
			Lista.vegererak(i);
		}
		cout << "|==========================================| Linia:  " << Busz::busszama << endl;
		for (int i = 0; i <= meddig; i++)
		{
			Busz::Megnevezes(Lista.vegighalad(i));
			Busz::Kiir(Lista.vegighalad(i));
		}
		cout << endl << "|==========================================|";
	}
	else if (Busz::busszama == 6)
	{
		int meddig = 15;
		for (int i = 1; i <= meddig; i++)
		{
			Lista.vegererak(i);
		}
		cout << "|==========================================| Linia:  " << Busz::busszama << endl;
		for (int i = 0; i <= meddig; i++)
		{
			Busz::Megnevezes(Lista.vegighalad(i));
			Busz::Kiir(Lista.vegighalad(i));
		}
		cout << endl << "|==========================================|";
	}
	else if (Busz::busszama == 30)
	{
		int meddig = 17;
		for (int i = 1; i <= meddig; i++)
		{
			Lista.vegererak(i);
		}
		cout << "|==========================================| Linia:  " << Busz::busszama << endl;
		for (int i = 0; i <= meddig; i++)
		{
			Busz::Megnevezes(Lista.vegighalad(i));
			Busz::Kiir(Lista.vegighalad(i));
		}
		cout << endl << "|==========================================|";
	}
	else
	{
		cout << "Nincs ilyen busz.";
		cout << endl;
	}
}

void Busz::Megadottmegallokiir(int megallo, KorkorosLista Lista)
{
	if (Busz::busszama == 25)
	{
		int meddig = 16;
		if (megallo <= meddig)
		{
			buszom->megalok = megallo;

			for (int i = buszom->megalok; i <= meddig; i++)
			{
				Lista.vegererak(i);
			}
			for (int i = 1; i <= buszom->megalok; i++)
			{
				Lista.vegererak(i);
			}
			cout << "|==========================================| Linia: " << Busz::busszama << endl;
			//lista elemeit atalakitjuk megallok neveire es kiirjuk
			for (int i = 0; i <= meddig; i++)
			{
				Busz::Megnevezes(Lista.vegighalad(i));
				Busz::Kiir(Lista.vegighalad(i));
			}
			cout << endl << "|==========================================|";
		}
		else
		{
			cout << "Nincs a 25-nek ez a szamu megallo.";
		}
	}
	else if (Busz::busszama == 21)
	{
		int meddig = 13;
		if (megallo <= meddig)
		{
			buszom->megalok = megallo;

			for (int i = buszom->megalok; i <= meddig; i++)
			{
				Lista.vegererak(i);
			}
			for (int i = 1; i <= buszom->megalok; i++)
			{
				Lista.vegererak(i);
			}
			cout << "|==========================================| Linia: " << Busz::busszama << endl;
			//lista elemeit atalakitjuk megallok neveire es kiirjuk
			for (int i = 0; i <= meddig; i++)
			{
				Busz::Megnevezes(Lista.vegighalad(i));
				Busz::Kiir(Lista.vegighalad(i));
			}
			cout << endl << "|==========================================|";
		}
		else
		{
			cout << "Nincs a 21-nek ez a szamu megallo.";
		}
	}
	else if (Busz::busszama == 43)
	{
		int meddig = 10;
		if (megallo <= meddig)
		{
			buszom->megalok = megallo;

			for (int i = buszom->megalok; i <= meddig; i++)
			{
				Lista.vegererak(i);
			}
			for (int i = 1; i <= buszom->megalok; i++)
			{
				Lista.vegererak(i);
			}
			cout << "|==========================================| Linia: " << Busz::busszama << endl;
			//lista elemeit atalakitjuk megallok neveire es kiirjuk
			for (int i = 0; i <= meddig; i++)
			{
				Busz::Megnevezes(Lista.vegighalad(i));
				Busz::Kiir(Lista.vegighalad(i));
			}
			cout << endl << "|==========================================|";
		}
		else
		{
			cout << "Nincs a 43-nak ez a szamu megallo.";
		}
	}
	else if (Busz::busszama == 6)
	{
		int meddig = 15;
		if (megallo <= meddig)
		{
			buszom->megalok = megallo;

			for (int i = buszom->megalok; i <= meddig; i++)
			{
				Lista.vegererak(i);
			}
			for (int i = 1; i <= buszom->megalok; i++)
			{
				Lista.vegererak(i);
			}
			cout << "|==========================================| Linia: " << Busz::busszama << endl;
			//lista elemeit atalakitjuk megallok neveire es kiirjuk
			for (int i = 0; i <= meddig; i++)
			{
				Busz::Megnevezes(Lista.vegighalad(i));
				Busz::Kiir(Lista.vegighalad(i));
			}
			cout << endl << "|==========================================|";
		}
		else
		{
			cout << "Nincs a 6-nak ez a szamu megallo.";
		}
	}
	else if (Busz::busszama == 30)
	{
		int meddig = 17;
		if (megallo <= meddig)
		{
			buszom->megalok = megallo;

			for (int i = buszom->megalok; i <= meddig; i++)
			{
				Lista.vegererak(i);
			}
			for (int i = 1; i <= buszom->megalok; i++)
			{
				Lista.vegererak(i);
			}
			cout << "|==========================================| Linia: " << Busz::busszama << endl;
			//lista elemeit atalakitjuk megallok neveire es kiirjuk
			for (int i = 0; i <= meddig; i++)
			{
				Busz::Megnevezes(Lista.vegighalad(i));
				Busz::Kiir(Lista.vegighalad(i));
			}
			cout << endl << "|==========================================|";
		}
		else
		{
			cout << "Nincs a 30-nak ez a szamu megallo.";
		}
	}
	else
	{
		cout << "Nem letezik ez a szamu megallo" << endl;
	}
}
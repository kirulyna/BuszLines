#include <iostream>
#include "korkoroslista.h"

using namespace std;

KorkorosLista::KorkorosLista()
{
	head = nullptr;
}

KorkorosLista::~KorkorosLista()
{
	if (head == nullptr)
	{
		return;
	}
	csomopont* jelenlegi = head->next;
	csomopont* elozo = head;

	while (jelenlegi != head)
	{
		csomopont* temp = jelenlegi;
		jelenlegi = jelenlegi->next;
		delete temp;
	}
	delete head;
}

int KorkorosLista::meret()
{
	int meret = 0;
	if (head != nullptr)
	{
		csomopont* jelenlegi = head;
		do
		{
			meret++;
			jelenlegi = jelenlegi->next;
		} while (jelenlegi != head);
		return meret;
	}
	else
		return 0;
}

bool KorkorosLista::benvan(int adatmezo)
{
	csomopont* Temp = head;
	if (Temp->adatmezo == adatmezo)
	{
		return true;
	}
	Temp = Temp->next;

	while (Temp != head)
	{
		if (Temp->adatmezo == adatmezo)
		{
			return true;
		}
		Temp = Temp->next;
	}
	return false;
}


void KorkorosLista::elejererak(int adatmezo)
{
	csomopont* ujcsomop = new csomopont(adatmezo);
	if (head == nullptr)
	{
		head = ujcsomop;
		ujcsomop->next = head;
	}
	else
	{
		csomopont* jelenlegi = head;
		while (jelenlegi->next != head)
		{
			jelenlegi = jelenlegi->next;
		}
		ujcsomop->next = head;
		jelenlegi->next = ujcsomop;
		head = ujcsomop;
	}
}

void KorkorosLista::vegererak(int adatmezo)
{
	csomopont* ujcsomop = new csomopont(adatmezo);
	if (head == nullptr)
	{
		head = ujcsomop;
		ujcsomop->next = head;
	}
	else
	{
		csomopont* jelenlegi = head;
		while (jelenlegi->next != head)
		{
			jelenlegi = jelenlegi->next;
		}
		jelenlegi->next = ujcsomop;
		ujcsomop->next = head;
	}
}


void KorkorosLista::elotterak(int adatmezo, int x)
{
	csomopont* ujcsomop = new csomopont(adatmezo);
	csomopont* jelenlegi = head;
	csomopont* Temp = jelenlegi;
	int hosz = meret();
	while (jelenlegi->adatmezo != x && jelenlegi->next != head)
	{
		Temp = jelenlegi;
		jelenlegi = jelenlegi->next;
	}
	if (jelenlegi->adatmezo == x)
	{
		ujcsomop->next = Temp->next;
		Temp->next = ujcsomop;
	}
}


void KorkorosLista::utanarak(int adatmezo, int x)
{
	csomopont* ujcsomop = new csomopont(adatmezo);
	csomopont* jelenlegi = head;
	int hosz = meret();
	while (jelenlegi->adatmezo != x && jelenlegi->next != head)
	{
		jelenlegi = jelenlegi->next;
	}
	if (jelenlegi->adatmezo == x)
	{
		ujcsomop->next = jelenlegi->next;
  		jelenlegi->next = ujcsomop;
	}
}


int KorkorosLista::vegighalad(int j)
{
	if (head != nullptr)
	{
		csomopont* jelenlegi = head;
		for (int i = 0; i < j; i++)
		{
			jelenlegi = jelenlegi->next;
		}
		return jelenlegi->adatmezo;
	}
	return 0;
}


void KorkorosLista::torol(int adatmezo)
{
	if (head != nullptr)
	{
		csomopont* jelenlegi = head;
		csomopont* elozo = nullptr;
		do
		{
			if (jelenlegi->adatmezo == adatmezo)
			{
				if (elozo == nullptr) // az első elemet kell törölni
				{
					if (jelenlegi->next == head) // csak egy elem van a listában
					{
						delete jelenlegi;
						head = nullptr;
						return;
					}
					else // több mint egy elem van a listában
					{
						csomopont* temp = head;
						while (temp->next != head)
						{
							temp = temp->next;
						}
						temp->next = head->next;
						delete head;
						head = temp->next;
						return;
					}
				}
				else // nem az első elemet kell törölni
				{
					elozo->next = jelenlegi->next;
					delete jelenlegi;
					return;
				}
			}
			elozo = jelenlegi;
			jelenlegi = jelenlegi->next;
		} while (jelenlegi != head);
	}
}


void KorkorosLista::kiir()
{
	if (head != nullptr)
	{
		csomopont* jelenlegi = head;
		do
		{
			cout << jelenlegi->adatmezo << ' ';
			jelenlegi = jelenlegi->next;
		} while (jelenlegi != head);
		cout << endl;
	}
}

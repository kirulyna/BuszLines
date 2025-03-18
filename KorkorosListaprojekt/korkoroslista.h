#pragma once

class KorkorosLista
{
private:
    struct csomopont
    {
        int adatmezo;
        csomopont* next;
        csomopont(const int& adat) : adatmezo(adat), next(nullptr) {}
    };
    csomopont* head;

public:
    KorkorosLista();
    ~KorkorosLista();
    int meret();
    bool benvan(int);
    void elejererak(int);
    void vegererak(int);
    void elotterak(int, int);
    void utanarak(int, int);
    int vegighalad(int);
    void torol(int);
    void kiir();
};

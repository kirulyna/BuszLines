#include <iostream>
#include "korkoroslista.h"
#include "buszmegallok.h"

using namespace std;

int main()
{
    KorkorosLista Lista;
    Busz B;
    //Ha lehet legyen: 6,21,25,43,30;
    int bszm;
    cout << "Adja meg a busz szamat: ";
    cin >> bszm;
    B.Busszama(bszm);
    B.buszkiir(Lista);

    int megallo;
    cout << "Adja meg a megallot: ";
    cin >> megallo;
    B.Megadottmegallokiir(megallo,Lista);

    return 0;
}

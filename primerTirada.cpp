#include "primerTirada.h"
#include <iostream>
// #include <cstdlib>


using namespace std;

int primerTirada(string nombreJugador1, string nombreJugador2) {

    int dado1 = 0, dado2 = 0;

    while (dado1 == dado2) {
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;

        cout << nombreJugador1 << " tira: " << dado1 << endl;
        cout << endl << nombreJugador2 << " tira: " << dado2 << endl;

        if (dado1 == dado2) {
            cout << "\nEmpate. Se repite la tirada.\n" << endl << endl;
        }
    }

    if (dado1 > dado2) {
        return 1;
    } else {
        return 2;
    }
}



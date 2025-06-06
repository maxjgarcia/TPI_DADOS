#include "primerTirada.h"
#include <iostream>
// #include <cstdlib>


using namespace std;

int primerTirada(const char jugador1[], const char jugador2[]) {

    int dado1 = 0, dado2 = 0;

    while (dado1 == dado2) {
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;

        cout << "\n" << jugador1 << " tira: " << dado1 << endl;
        cout << jugador2 << " tira: " << dado2 << endl;

        if (dado1 == dado2) {
            cout << "Empate. Se repite la tirada." << endl << endl;
        }
    }

    if (dado1 > dado2) {
        cout << jugador1 << " comienza la partida." << endl;
        return 1;  // jugador 1 comienza
    } else {
        cout << jugador2 << " comienza la partida." << endl;
        return 2;  // jugador 2 comienza
    }
}

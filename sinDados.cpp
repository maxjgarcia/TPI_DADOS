#include <iostream>
#include <string>
#include "rlutil.h"
using namespace std;

bool sinDados(string nombreJugador, int &dados, int &puntaje) {
    if (dados == 0) {
        rlutil::setColor(rlutil::GREEN);
        cout << "\nEl Jugador " << nombreJugador << " se quedo sin dados.\n Gana la partida +10.000 puntos!.\n";
        puntaje += 10000;
        rlutil::setColor(rlutil::WHITE);
        return true;
    }
    return false;
}

#include <iostream>
#include <string>

using namespace std;

bool sinDados(string nombreJugador, int &dados, int &puntaje) {
    if (dados == 0) {
        cout << "\nEl Jugador " << nombreJugador << " se quedo sin dados.\n Gana la partida +10.000 puntos!.\n";
        puntaje += 10000;
        return true;
    }
    return false;
}

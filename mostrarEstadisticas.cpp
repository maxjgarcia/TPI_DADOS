#include <iostream>
#include "rlutil.h"
using namespace std;

void mostrarEstadisticas(int &puntajeJugadorMax, string &nombreJugadorMax) {
    system("cls");
    if (puntajeJugadorMax == 0){
        rlutil::setColor(rlutil::YELLOW);
        cout << "No se jugaron partidas, no existen puntajes.\n";
        rlutil::setColor(rlutil::WHITE);
    } else {
    rlutil::setColor(rlutil::YELLOW);
    cout << "Estadisticas del juego\n\n";
    cout << "El puntaje maximo historico es: " << puntajeJugadorMax << endl;
    cout << "Y lo tiene el jugador: " << nombreJugadorMax << endl;};
    rlutil::setColor(rlutil::WHITE);

}

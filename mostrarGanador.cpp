#include <iostream>
#include <string>
#include "rlutil.h"
using namespace std;

void mostrarGanador(string nombreJugador1, string nombreJugador2, int puntajeJ1, int puntajeJ2, int &puntajeMaxJugador, string &nombreJugadorPuntajeMax, int dadosJ1, int dadosJ2 ){

    rlutil::setColor(rlutil::CYAN);
    cout << "\nPuntajes Finales:\n\n";
    rlutil::setColor(rlutil::WHITE);
    cout << nombreJugador1 << ": " << puntajeJ1 << " puntos y " << dadosJ1 << " dados en stock\n";
    cout << nombreJugador2 << ": " << puntajeJ2 << " puntos y " << dadosJ2 << " dados en stock\n";

    if (puntajeJ1 > puntajeJ2){
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout << "\nGanador: " << nombreJugador1 <<"!" << endl;
        rlutil::setColor(rlutil::WHITE);
        if (puntajeJ1 > puntajeMaxJugador){
            puntajeMaxJugador = puntajeJ1;
            nombreJugadorPuntajeMax = nombreJugador1;
        }
    }
    else if (puntajeJ2 > puntajeJ1){
        rlutil::setColor(rlutil::LIGHTGREEN);
        cout << "\nGanador: " << nombreJugador2 <<"!" << endl;
        rlutil::setColor(rlutil::WHITE);
        if (puntajeJ2 > puntajeMaxJugador){
            puntajeMaxJugador = puntajeJ2;
            nombreJugadorPuntajeMax = nombreJugador2;
        }
    }
    else {
        rlutil::setColor(rlutil::YELLOW);
        cout << "\nEmpate" << endl;
        puntajeMaxJugador = 0;
        rlutil::setColor(rlutil::WHITE);
    }
};

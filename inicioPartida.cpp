#include <iostream>

#include <cstdlib>
#include <ctime>
#include "primerTirada.h"
#include "pedirNombre.h"
#include "jugarPartida.h"
using namespace std;



int inicioPartida() {

    string nombreJugador1;
    string nombreJugador2;

    system("cls");
    pedirNombres( nombreJugador1, nombreJugador2);
    system("cls");
    cout << "Jugador 1: " << nombreJugador1 << endl;
    cout << "Jugador 2: " << nombreJugador2 << endl;

    cout<<"\nLos jugadores arrojan los dados para determinar quien inicia la partida.\n" << endl;
    int iniciador = primerTirada(nombreJugador1,nombreJugador2);

    if (iniciador == 1) {
        cout << nombreJugador1 <<" inicia la partida."<< endl;
    } else {
        cout << nombreJugador2 <<" inicia la partida."<< endl;
    };

  jugarPartida( nombreJugador1,  nombreJugador2,  iniciador);

    return 0;
}


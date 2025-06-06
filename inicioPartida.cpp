#include <iostream>

#include <cstdlib>
#include <ctime>
#include "primerTirada.h"
#include "pedirNombre.h"
using namespace std;


int inicioPartida() {
    const int TAM = 50;
    char nombreJugador1[TAM];
    char nombreJugador2[TAM];

    pedirNombres(nombreJugador1, nombreJugador2, TAM);
    system("cls");
    cout << "Jugador 1: " << nombreJugador1 << endl;
    cout << "Jugador 2: " << nombreJugador2 << endl;

    cout<<"\nLos jugadores arrojan los dados para determinar quien inicia la partida." << endl;
    primerTirada(nombreJugador1,nombreJugador2);
    return 0;
}


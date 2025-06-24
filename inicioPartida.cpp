#include <iostream>
#include <cstdlib>
#include <ctime>
#include "primerTirada.h"
#include "pedirNombre.h"
#include "jugarPartida.h"
using namespace std;



int inicioPartida(int &puntajeMaxJugador, string &nombreJugadorPuntajeMax) {
    int puntajeJ1 = 0; 
    int puntajeJ2 = 0;
    string nombreJugador1, nombreJugador2;
    system("cls");
    pedirNombres( nombreJugador1, nombreJugador2);
    system("cls");
    cout << "Jugador 1: " << nombreJugador1 << endl;
    cout << "Jugador 2: " << nombreJugador2 << endl;

    cout<<"\nLos jugadores arrojan los dados para determinar quien inicia la partida.\n" << endl;
    int iniciador = primerTirada(nombreJugador1,nombreJugador2);

    if (iniciador == 1) {
        cout <<endl << nombreJugador1 <<" inicia la partida.\n";
    } else {
        cout <<endl << nombreJugador2 <<" inicia la partida.\n";
    };

  jugarPartida( nombreJugador1,  nombreJugador2,  iniciador, puntajeJ1, puntajeJ2, puntajeMaxJugador, nombreJugadorPuntajeMax);

    return 0;
}


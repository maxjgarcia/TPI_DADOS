#include <iostream>
#include <string>
#include "tiradaDado12.h"
#include "funciones.h"
#include "seleccionarDados.h"

using namespace std;


void jugarPartida(string nombreJugador1, string nombreJugador2, int iniciador) {
    int stockdadosJ1[12], stockdadosJ2[12];
    int dadosJ1 = 6, dadosJ2 = 6;
    int puntajeJ1 = 0, puntajeJ2 = 0;

    cargarVector(stockdadosJ1, dadosJ1);
    cargarVector(stockdadosJ2, dadosJ2);

    int turnoActual = iniciador;
    system("pause");
    system("cls");

    for (int ronda = 1; ronda <= 3; ronda++) {
        system("cls");

        cout << "\n RONDA " << ronda << "\n";

        if (dadosJ1 == 0) {
            cout << "El Jugador: " << nombreJugador1 << " gano la partida por quedarse sin dados, +10.000 puntos" << endl;
            puntajeJ1 += 10000;
            break;
        } else if (dadosJ2 == 0) {
            cout << "El Jugador: " << nombreJugador2 << " gano la partida por quedarse sin dados, +10.000 puntos" << endl;
            puntajeJ2 += 10000;
            break;
        }

        for (int i = 0; i < 2; i++) {

            if (turnoActual == 1) {
              seleccionarDados(nombreJugador1, stockdadosJ1, dadosJ1, dadosJ2, puntajeJ1);
              turnoActual = 2;
            } else if (turnoActual == 2){
              seleccionarDados(nombreJugador2, stockdadosJ2, dadosJ2, dadosJ1, puntajeJ2);
              turnoActual = 1;
            }
            system("pause");
        }
    }

    cout << "\nPuntajes Finales:\n";
    cout << nombreJugador1 << ": " << puntajeJ1 << " puntos\n";
    cout << nombreJugador2 << ": " << puntajeJ2 << " puntos\n";

    if (puntajeJ1 > puntajeJ2)
        cout << "Ganador: " << nombreJugador1 << endl;
    else if (puntajeJ2 > puntajeJ1)
        cout << "Ganador: " << nombreJugador2 << endl;
    else
        cout << "Empate" << endl;
}

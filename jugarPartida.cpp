#include <iostream>     // Para cout, endl
#include <string>       // Para string
#include <string>
#include "tiradaDado12.h"
#include "funciones.h"

using namespace std;



void jugarPartida(string nombreJugador1, string nombreJugador2, int iniciador) {
    int stockDados1[12], stockDados2[12];
    int dados1 = 6, dados2 = 6;
    int puntaje1 = 0, puntaje2 = 0;

    cargarVector(stockDados1, dados1);
    cargarVector(stockDados2, dados2);

    int turnoActual = iniciador;

    //control de rondas
  for (int ronda = 1; ronda <= 3; ronda++) {
    cout << "\n RONDA " << ronda << "\n";
    //control de turnos
    for (int i = 0; i < 2; i++) {
        if (turnoActual == 1) {
            cout << "\nTurno de " << nombreJugador1 << endl;

            int numeroTarget = tiradaDado12();
            cout << "Numero objetivo: " << numeroTarget << endl;

            // carga dados jug 1
            cargarVector(stockDados1, dados1);
            cout << "Dados disponibles:\n";
            for (int j = 0; j < dados1; j++) {
                cout << "[" << j << "] = " << stockDados1[j] <<"\t";
            }
            cout << endl;

            // seleccionarDados();

            turnoActual = 2;
            system("pause");
        } else {
            cout << "\nTurno de " << nombreJugador2 << endl;

            int numeroTarget = tiradaDado12();
            cout << "Numero objetivo: " << numeroTarget << endl;

            // Cargar y mostrar dados del jugador 2
            cargarVector(stockDados2, dados2);
            cout << "Dados disponibles:\n";
            for (int j = 0; j < dados2; j++) {
                cout << "[" << j << "] = " << stockDados2[j] <<"\t";
            }
            cout << endl;

            // seleccionarDados();

            turnoActual = 1;
            system("pause");
        }
    }
}
    // Puntaje
    cout << "\nPuntajes:\n";
    cout << nombreJugador1 << ": " << puntaje1 << " puntos\n";
    cout << nombreJugador2 << ": " << puntaje2 << " puntos\n";
     if (puntaje1 > puntaje2)
        cout << "Ganador: " << nombreJugador1 << endl;
    else if (puntaje2 > puntaje1)
        cout << "Ganador: " << nombreJugador2 << endl;
    else
        cout << "Empate" << endl;



}


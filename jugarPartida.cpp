#include <iostream>
#include <string>
#include "tiradaDado12.h"
#include "funciones.h"
#include "seleccionarDados.h"
#include "mostrarCreditos.h"
#include "sinDados.h"
#include "mostrarGanador.h"

using namespace std;

void jugarPartida(string nombreJugador1, string nombreJugador2, int iniciador) {
    int stockdadosJ1[12], stockdadosJ2[12];
    int dadosJ1 = 6, dadosJ2 = 6;
    int puntajeJ1 = 0, puntajeJ2 = 0;
    char op;

    cargarVector(stockdadosJ1, dadosJ1);
    cargarVector(stockdadosJ2, dadosJ2);

    int turnoActual = iniciador;
    system("pause");
    system("cls");

    for (int ronda = 1; ronda <= 1; ronda++) {
        system("cls");

       if (sinDados(nombreJugador1, dadosJ1, puntajeJ1)) return;
       if (sinDados(nombreJugador2, dadosJ2, puntajeJ2)) return;

        for (int i = 0; i < 2; i++) {
            cout << "\n RONDA " << ronda << "\n";
            if (turnoActual == 1) {
              seleccionarDados(nombreJugador1, stockdadosJ1, dadosJ1, dadosJ2, puntajeJ1);
              turnoActual = 2;
            } else if (turnoActual == 2){
              seleccionarDados(nombreJugador2, stockdadosJ2, dadosJ2, dadosJ1, puntajeJ2);
              turnoActual = 1;
            }

       if (sinDados(nombreJugador1, dadosJ1, puntajeJ1)) return;
       if (sinDados(nombreJugador2, dadosJ2, puntajeJ2)) return;


        system("pause");
        system("cls");
    }

    }


   mostrarGanador(nombreJugador1, nombreJugador2, puntajeJ1, puntajeJ2);

   //creditos
    do{
        cout << "\nVer creditos? ingrese 's' o 'n': "; cin >> op;

        if(op == 's'){
        mostrarCreditos();
        } else if (op == 'n'){
        break;}
        else {
        cout << "Entrada invalida. Intente nuevamente.\n";
        }
        }
    while (op != 's' && op != 'n');

}





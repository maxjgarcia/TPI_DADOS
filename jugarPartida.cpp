#include <iostream>
#include <string>
#include "tiradaDado12.h"
#include "funciones.h"
#include "seleccionarDados.h"
#include "mostrarCreditos.h"
#include "sinDados.h"
#include "mostrarGanador.h"
#include "mostrarEstadisticas.h"
#include "rlutil.h"

using namespace std;

void jugarPartida(string nombreJugador1, string nombreJugador2, int iniciador, int &puntajeJ1, int &puntajeJ2, int &puntajeMaxJugador, string &nombreJugadorPuntajeMax) {
    int stockdadosJ1[12], stockdadosJ2[12];
    int dadosJ1 = 6, dadosJ2 = 6;
    char op;

    cargarVector(stockdadosJ1, dadosJ1);
    cargarVector(stockdadosJ2, dadosJ2);

    int turnoActual = iniciador;
    system("pause");
    system("cls");

    for (int ronda = 1; ronda <= 3; ronda++) {
        system("cls");

        if (sinDados(nombreJugador1, dadosJ1, puntajeJ1)) return;
        if (sinDados(nombreJugador2, dadosJ2, puntajeJ2)) return;

        for (int i = 0; i < 2; i++) {

            if (turnoActual == 1) {
                seleccionarDados(nombreJugador1, stockdadosJ1, dadosJ1, dadosJ2, puntajeJ1, ronda);
                turnoActual = 2;
            } else if (turnoActual == 2){
                seleccionarDados(nombreJugador2, stockdadosJ2, dadosJ2, dadosJ1, puntajeJ2, ronda);
                turnoActual = 1;
            }

            if (sinDados(nombreJugador1, dadosJ1, puntajeJ1)) return;
            if (sinDados(nombreJugador2, dadosJ2, puntajeJ2)) return;


            system("pause");
            system("cls");
        }
    }


    mostrarGanador(nombreJugador1, nombreJugador2, puntajeJ1, puntajeJ2, puntajeMaxJugador, nombreJugadorPuntajeMax, dadosJ1, dadosJ2);

    rlutil::setColor(rlutil::LIGHTRED);
    cout << "\nPartida Finalizada.";
    rlutil::setColor(rlutil::WHITE);
     cout << "\n\n---------------------------------------\n\n";
    cout << "Opciones:\n\t'c' - Ver creditos\n\t'e' - Ver estadisticas\n\t'otra tecla' - Volver al menu principal\n";
    cout << "\nIngrese su eleccion: ";
    cin >> op;

    if(op == 'c'){
        system("cls");
        mostrarCreditos();


    } else if (op == 'e'){
        system("cls");
        mostrarEstadisticas(puntajeMaxJugador, nombreJugadorPuntajeMax);


    }

}

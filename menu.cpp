#include <iostream>
#include "menu.h"
#include "inicioPartida.h"
#include "mostrarEstadisticas.h"
#include "mostrarCreditos.h"

using namespace std;

int seleccionarOpcion() {
    int opcion;
    cout << "---------------------------------------\n"
         << "1 - Iniciar Partida\n"
         << "2 - Mostrar Estadisticas\n"
         << "3 - Mostrar Creditos\n"
         << "0 - Salir\n"
         << "---------------------------------------\n"
         << "Seleccione una opcion: ";
    cin >> opcion;
    return opcion;
}

void ejecutarOpcion(int opcionMenu, int &puntajeMax, string &nombreMax) {
    switch (opcionMenu) {
        case 1:

            inicioPartida(puntajeMax, nombreMax);
            break;
        case 2:

            mostrarEstadisticas(puntajeMax, nombreMax);
            break;
        case 3:

            mostrarCreditos();
            break;
        case 0:
            cout << "Cerrando juego... Gracias por jugar!" << endl;
            break;
        default:
            cout << "Opcion no valida. Por favor, intente nuevamente." << endl;
            break;
    }
}

#include <iostream>
#include "menu.h"
#include "inicioPartida.h"
#include "mostrarEstadisticas.h"
#include "mostrarCreditos.h"
#include "rlutil.h"

using namespace std;



int seleccionarOpcion() {
    int opcion;
    rlutil::setColor(rlutil::YELLOW);
    cout << R"(

 _______  __    _  _______  ______    _______  __    _  ______   _______  ______   _______  _______
|       ||  |  | ||       ||    _ |  |       ||  |  | ||      | |   _   ||      | |       ||       |
|    ___||   |_| ||    ___||   | ||  |    ___||   |_| ||  _    ||  |_|  ||  _    ||   _   ||  _____|
|   |___ |       ||   |___ |   |_||_ |   |___ |       || | |   ||       || | |   ||  | |  || |_____
|    ___||  _    ||    ___||    __  ||    ___||  _    || |_|   ||       || |_|   ||  |_|  ||_____  |
|   |___ | | |   ||   |    |   |  | ||   |___ | | |   ||       ||   _   ||       ||       | _____| |
|_______||_|  |__||___|    |___|  |_||_______||_|  |__||______| |__| |__||______| |_______||_______|
)";
    cout << "\n\n---------------------------------------\n"
         << "1 - Iniciar Partida\n"
         << "2 - Mostrar Estadisticas\n"
         << "3 - Mostrar Creditos\n"
         << "4 - Mostrar Reglas"
         << "0 - Salir\n"
         << "---------------------------------------\n"
         << "Seleccione una opcion: ";
    rlutil::setColor(rlutil::WHITE);
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
        case 4:
            mostrarReglas();
            break;
        case 0:
            rlutil::setColor(rlutil::BROWN);
            cout << "Cerrando juego... Gracias por jugar!" << endl;
            rlutil::setColor(rlutil::WHITE);
            break;
        default:
            rlutil::setColor(rlutil::RED);
            cout << "Opcion no valida. Por favor, intente nuevamente." << endl;
            rlutil::setColor(rlutil::WHITE);
            break;
    }
}

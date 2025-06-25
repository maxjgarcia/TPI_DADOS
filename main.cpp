#include <iostream>
#include <ctime>
#include <string>
#include "menu.h"

using namespace std;

int main() {
    srand(time(0));
    int opcionMenu;
    int puntajeMaxJugador = 0;
    string nombreJugadorPuntajeMax = "";

    do {
        system("cls");
        opcionMenu = seleccionarOpcion();
        ejecutarOpcion(opcionMenu, puntajeMaxJugador, nombreJugadorPuntajeMax);
        system("pause");

    } while (opcionMenu != 0);

    return 0;
}

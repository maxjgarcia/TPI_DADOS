#include <iostream>
#include "inicioPartida.h"
#include "primerTirada.h"
#include <ctime>
#include "mostrarCreditos.h"
#include "mostrarEstadisticas.h"

using namespace std;

int main(){
    srand(time(0));
    int opcionMenu;
    int puntajeMaxJugador = 0;
    string nombreJugadorPuntajeMax = "";

  do {
    
    system("cls");
cout   << "---------------------------------------\n"
         << "1 - Iniciar Partida\n"
         << "2 - Mostrar Estadisticas\n"
         << "3 - Mostrar Creditos\n"
         << "0 - Salir\n"
         << "---------------------------------------\n"
         << "Seleccione una opcion: ";
  cin >> opcionMenu;

    switch (opcionMenu) {
  case 1:
    inicioPartida(puntajeMaxJugador, nombreJugadorPuntajeMax);
    break;
  case 2:
    mostrarEstadisticas(puntajeMaxJugador, nombreJugadorPuntajeMax);
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
  system("pause");
  } while (opcionMenu != 0);

    return 0;
}


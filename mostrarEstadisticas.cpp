#include <iostream>
using namespace std;

void mostrarEstadisticas(int &puntajeJugadorMax, string &nombreJugadorMax) {
    system("cls");
    if (puntajeJugadorMax == 0){
        cout << "No se jugaron partidas, no existen puntajes.\n";
    } else {
     cout << "El puntaje maximo historico es: " << puntajeJugadorMax << endl;
    cout << "Y lo tiene el jugador: " << nombreJugadorMax << endl;};


}

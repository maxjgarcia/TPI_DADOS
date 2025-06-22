#include <iostream>
#include <string>
using namespace std;

void mostrarGanador(string nombreJugador1, string nombreJugador2, int puntajeJ1, int puntajeJ2){
 cout << "\nPuntajes Finales:\n";
    cout << nombreJugador1 << ": " << puntajeJ1 << " puntos\n";
    cout << nombreJugador2 << ": " << puntajeJ2 << " puntos\n";

    if (puntajeJ1 > puntajeJ2)
        cout << "Ganador: " << nombreJugador1 << endl;
    else if (puntajeJ2 > puntajeJ1)
        cout << "Ganador: " << nombreJugador2 << endl;
    else
        cout << "Empate" << endl;
};

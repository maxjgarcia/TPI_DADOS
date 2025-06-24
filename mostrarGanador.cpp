#include <iostream>
#include <string>
using namespace std;

void mostrarGanador(string nombreJugador1, string nombreJugador2, int puntajeJ1, int puntajeJ2, int &puntajeMaxJugador, string &nombreJugadorPuntajeMax ){
 cout << "\nPuntajes Finales:\n";
    cout << nombreJugador1 << ": " << puntajeJ1 << " puntos\n";
    cout << nombreJugador2 << ": " << puntajeJ2 << " puntos\n";

    if (puntajeJ1 > puntajeJ2){
        cout << "Ganador: " << nombreJugador1 << endl;
        if (puntajeJ1 > puntajeMaxJugador){
            puntajeMaxJugador = puntajeJ1;
            nombreJugadorPuntajeMax = nombreJugador1;
        }
    }    
    else if (puntajeJ2 > puntajeJ1){
        cout << "Ganador: " << nombreJugador2 << endl;
        if (puntajeJ2 > puntajeMaxJugador){
            puntajeMaxJugador = puntajeJ2;
            nombreJugadorPuntajeMax = nombreJugador2;
        }
    }  
    else
        cout << "Empate" << endl;
};

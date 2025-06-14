#include <iostream>
using namespace std;

void pedirNombres(string &nombreJugador1, string &nombreJugador2) {
    cin.ignore();
    cout << "Ingresar nombre del primer jugador: ";
    getline(cin, nombreJugador1);
    cout << "Ingresar nombre del segundo jugador: ";
    getline(cin, nombreJugador2);

}

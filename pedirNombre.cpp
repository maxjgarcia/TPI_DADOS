#include <iostream>
using namespace std;

/*
los nombres de jugadores los guardo en un vector porque utilizando solo "cin" si el nombre es compuesto
solo guardaria la primer palabra
*/

void pedirNombres(char jugador1[], char jugador2[], int tam) {

    cin.ignore(); // para evitar sobrescribit los inputs al usar getline despues de un cin

    cout << "Ingresar nombre del primer jugador: ";
    cin.getline(jugador1, tam);

    cout << "Ingresar nombre del segundo jugador: ";
    cin.getline(jugador2, tam);
}

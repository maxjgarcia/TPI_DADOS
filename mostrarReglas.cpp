#include <iostream>
#include "rlutil.h"
using namespace std;

void mostrarReglas(){

   system("cls");
    cout << "---------------------------------------\n";
    rlutil::setColor(rlutil::YELLOW);
    cout << "REGLAS\n\n"
         << "Objetivo:\n"
         << "Ganar sumando mas puntos que tu oponente en tres rondas o quedandote sin dados primero.\n\n"

         << "Como jugar:\n"
        << "1. Inicio:\n"
         << "Cada jugador lanza un dado. El que saque el numero mas alto comienza. En caso de empate, repiten.\n\n"

         << "2. Turno de juego:\n"
         << "Lanza los dos dados de 12 caras y luego tus dados de 6 caras.\n"
         << "Suma los valores de tus dados de 6 caras para igualar el numero obtenido de los dados de 12 caras. Si lo logras, es una tirada exitosa.\n\n"

         << "3. Puntaje:\n"
         << "Si la suma de tus dados de 6 caras es igual al numero objetivo, sumas puntos multiplicando la suma por la cantidad de dados usados y los envias al jugador contrario.\n\n"

         << "4. Penalizacion:\n"
         << "Si no logras una tirada exitosa, el jugador contrario te enviara un dado, si tiene mas de uno.\n\n"

         << "5. Fin de ronda:\n"
         << "La ronda termina cuando ambos jugadores hacen su tirada. Luego comienza la siguiente.\n\n"

         << "Victoria:\n"
         << "Ganas automaticamente si te quedas sin dados, sumando 10,000 puntos.\n"
         << "Si se completan tres rondas, gana quien tenga mas puntos.\n\n"

         << "Empate:\n"
         << "Si ambos tienen la misma cantidad de puntos al final de las tres rondas, el juego queda empatado.\n\n";
    rlutil::setColor(rlutil::WHITE);
    cout << "---------------------------------------\n";
}

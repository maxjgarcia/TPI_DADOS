#include <iostream>
#include "rlutil.h"

using namespace std;

void mostrarCreditos() {
    system("cls");
    cout << "---------------------------------------\n";
    rlutil::setColor(rlutil::BROWN);
    cout << "Desarrollado por el Equipo 32\n\n";
    rlutil::setColor(rlutil::WHITE);
    cout << "Integrantes:\n";
         rlutil::setColor(rlutil::CYAN);
    cout << "\tSantiago Batista \t\tLegajo #####\n"
         << "\tDario Nehuen Chaves \t\tLegajo 17849\n"
         << "\tMaximiliano Jesus Garcia \tLegajo 33465\n"
         << "\tLuciano Facundo Tito Cedron \tLegajo 32593\n";
         rlutil::setColor(rlutil::WHITE);
    cout << "---------------------------------------\n";

}

#include <iostream>
#include <string>
#include "tiradaDado12.h"
#include "funciones.h"
#include "rlutil.h"
#include "dibujarDado.h"

using namespace std;

void seleccionarDados(string nombreJugador, int stockdados[], int &dados, int &dadosOponente, int &puntaje, int ronda){

    int numeroTarget;
    int suma = 0;
    int cantDadosUsados = 0;
    int dadoSeleccionado = -1;
    bool opcionesDisponibles = false;

    rlutil::cls();
    rlutil::setColor(rlutil::BROWN);
    cout << " RONDA " << ronda << "\n";
    rlutil::setColor(rlutil::WHITE);
    cout << "\nTurno de " << nombreJugador << endl;

    rlutil::setColor(rlutil::YELLOW);
    cout << "\nPresione una tecla para lanzar los dados objetivo...\n";
    rlutil::setColor(rlutil::WHITE);
    system("pause > nul");

    numeroTarget = tiradaDado12();


    cout << "\nNumero objetivo: " << numeroTarget << endl;


    rlutil::setColor(rlutil::YELLOW);
    cout << "\nAhora, presione una tecla para lanzar sus " << dados << " dados de stock...";
    rlutil::setColor(rlutil::WHITE);
    system("pause > nul");

    cargarVector(stockdados, dados);

    while (true) {
        rlutil::cls();
        opcionesDisponibles = false;
        rlutil::setColor(rlutil::BROWN);
        cout << " RONDA " << ronda << "\n";
        rlutil::setColor(rlutil::WHITE);

        cout << "\nTurno de " << nombreJugador << endl;

        cout << "\nNumero objetivo: " << numeroTarget << endl;
        rlutil::setColor(rlutil::CYAN);
        cout << "Suma actual: " << suma << endl;
        rlutil::setColor(rlutil::WHITE);

        cout << "Dados disponibles:\n";
        for (int j = 0; j < dados; j++) {
            if (stockdados[j] != 55) {
                opcionesDisponibles = true;
        //   cout << "[" << j + 1 << "] = " << stockdados[j] << endl;
        //posi de los dados en pantalla
            int posX = 5 + j * 10;
            int posY = 10;

        dibujarDado(stockdados[j], posX, posY);


    rlutil::setColor(rlutil::BROWN);
    rlutil::setBackgroundColor(rlutil::BLACK);
    rlutil::locate(posX + 2, posY + 4);
    cout << "[" << j +1 << "]";
    rlutil::setColor(rlutil::WHITE);
            }
        }

        if (!opcionesDisponibles) {
        rlutil::setColor(rlutil::RED);
        cout << "\nNo te quedan dados disponibles.\nTirada fallida, recibis un dado del rival.\n";
        rlutil::setColor(rlutil::WHITE);
        if (dadosOponente > 1) {
            dados++;
            dadosOponente--;
        }
        return;
    }

        cout << "\n\nIngrese el numero del dado a usar (1-" << dados << ") o 0 para rendirse: ";
        cin >> dadoSeleccionado;

        if (dadoSeleccionado == 0) break;
        if (dadoSeleccionado < 1 || dadoSeleccionado > dados || stockdados[dadoSeleccionado - 1] == 55) {
            rlutil::setColor(rlutil::RED);
            cout << "Dado invalido. Intente de nuevo.\n";
            rlutil::setColor(rlutil::WHITE);
            continue;
        }

        suma += stockdados[dadoSeleccionado - 1];
        cantDadosUsados++;
        stockdados[dadoSeleccionado - 1] = 55;

        if (suma == numeroTarget) {
             rlutil::setColor(rlutil::LIGHTGREEN);
            cout << "\nObjetivo completo. Puntaje obtenido: " << (numeroTarget * cantDadosUsados) << endl;
            rlutil::setColor(rlutil::WHITE);
            puntaje += numeroTarget * cantDadosUsados;
            dados -= cantDadosUsados;
            dadosOponente += cantDadosUsados;
            return;
        } else if (suma > numeroTarget) {
             rlutil::setColor(rlutil::RED);
            cout << "\nTe pasaste del numero objetivo. \nTirada fallida, recibis un dado del rival.\n";
             rlutil::setColor(rlutil::WHITE);
            if (dadosOponente > 1) {
                dados++;
                dadosOponente--;
            }
            return;
        }
    }
    rlutil::setColor(rlutil::RED);
    cout << "\nTirada fallida. Recibis un dado del rival.\n";
    rlutil::setColor(rlutil::WHITE);
    if (dadosOponente > 1) {
        dados++;
        dadosOponente--;
    }


}


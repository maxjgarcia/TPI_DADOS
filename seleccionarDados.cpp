#include <iostream>
#include <string>

#include "tiradaDado12.h"
#include "funciones.h"

using namespace std;

void seleccionarDados(string nombreJugador, int stockdados[], int &dados, int &dadosOponente, int &puntaje){

    int numeroTarget = tiradaDado12();
    int suma = 0;
    int cantDadosUsados = 0;
    int dadoSeleccionado = -1;
    bool opcionesDisponibles = false;

    cout << "\nTurno de " << nombreJugador << endl;
    cargarVector(stockdados, dados);

    while (true) {
        opcionesDisponibles = false;
        cout << "\nNumero objetivo: " << numeroTarget << endl;
        cout << "Suma actual: " << suma << endl;

        cout << "Dados disponibles:\n";
        for (int j = 0; j < dados; j++) {
            if (stockdados[j] != 55) {
                opcionesDisponibles = true;
                cout << "[" << j + 1 << "] = " << stockdados[j] << endl;
            }
        }

        if (!opcionesDisponibles) {
        cout << "\nNo te quedan dados disponibles. Tirada fallida.\n";
        if (dadosOponente > 1) {
            dados++;
            dadosOponente--;
        }
        return;
    }

        cout << "Ingrese el numero del dado a usar (1-" << dados << ") o 0 para rendirse: ";
        cin >> dadoSeleccionado;

        if (dadoSeleccionado == 0) break;
        if (dadoSeleccionado < 1 || dadoSeleccionado > dados || stockdados[dadoSeleccionado - 1] == 55) {
            cout << "Dado invalido. Intente de nuevo.\n";
            continue;
        }

        suma += stockdados[dadoSeleccionado - 1];
        cantDadosUsados++;
        stockdados[dadoSeleccionado - 1] = 55;

        if (suma == numeroTarget) {
            cout << "\nObjetivo completo. Puntaje obtenido: " << (numeroTarget * cantDadosUsados) << endl;
            puntaje += numeroTarget * cantDadosUsados;
            dados -= cantDadosUsados;
            dadosOponente += cantDadosUsados;
            return;
        } else if (suma > numeroTarget) {
            cout << "\nTe pasaste del numero objetivo. Tirada fallida.\n";
            if (dadosOponente > 1) {
                dados++;
                dadosOponente--;
            }
            return;
        }
    }

    cout << "\nTirada fallida. Recibis un dado del rival.\n";
    if (dadosOponente > 1) {
        dados++;
        dadosOponente--;
    }


}


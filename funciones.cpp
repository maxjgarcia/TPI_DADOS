#include <cstdlib>
//carga de vectores
void cargarVector(int vec[], int TAM) {
    for (int i = 0; i < TAM; i++) {
        vec[i] = rand() % 6 + 1;
    }
}

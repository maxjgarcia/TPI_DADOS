#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int tiradaDado12() {

    int dado12_1 = rand() % 12 + 1;
    int dado12_2 = rand() % 12 + 1;

    cout << "Tirada del dado 1: " << dado12_1 <<endl;
    cout << "Tirada del dado 2: " << dado12_2 <<endl;

    return dado12_1 + dado12_2;
}

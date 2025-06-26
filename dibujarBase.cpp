#include <iostream>
#include "rlutil.h"
using namespace std;

void dibujarBase(int posx, int posy){
    rlutil::setColor(rlutil::WHITE);
    for(int x=posx; x<=posx+6; x++){
        for(int y=posy; y<=posy+2; y++){
            rlutil::locate(x,y);
            cout << (char) 219;
        }
    }
};

#include <iostream>
#include "rlutil.h"
#include "dibujarBase.h"
using namespace std;

void dibujarDado( int num, int posx, int posy){
    dibujarBase(posx, posy);
    rlutil::setColor(rlutil::BLACK);
    rlutil::setBackgroundColor(rlutil::WHITE);



    switch(num){
        case 1:
            rlutil::locate(posx+3,posy+1);
            cout<< (char) 254;
            break;
        case 2:
            rlutil::locate(posx+1,posy);
            cout<< (char) 220;
            rlutil::locate(posx+5,posy+2);
            cout<< (char) 223;
            break;
        case 3:
            rlutil::locate(posx+1,posy);
            cout<< (char) 220;
            rlutil::locate(posx+5,posy+2);
            cout<< (char) 223;
            rlutil::locate(posx+3,posy+1);
            cout<< (char) 254;
            break;
        case 4:
            rlutil::locate(posx+1,posy);
            cout<< (char) 220;
            rlutil::locate(posx+5,posy);
            cout<< (char) 220;
            rlutil::locate(posx+1,posy+2);
            cout<< (char) 223;
            rlutil::locate(posx+5,posy+2);
            cout<< (char) 223;
            break;
        case 5:
            rlutil::locate(posx+1,posy);
            cout<< (char) 220;
            rlutil::locate(posx+5,posy);
            cout<< (char) 220;
            rlutil::locate(posx+1,posy+2);
            cout<< (char) 223;
            rlutil::locate(posx+5,posy+2);
            cout<< (char) 223;
            rlutil::locate(posx+3,posy+1);
            cout<< (char) 254;
            break;
        case 6:
            rlutil::locate(posx+1,posy);
            cout<< (char) 220;
            rlutil::locate(posx+5,posy);
            cout<< (char) 220;
            rlutil::locate(posx+1,posy+2);
            cout<< (char) 223;
            rlutil::locate(posx+5,posy+2);
            cout<< (char) 223;
            rlutil::locate(posx+1,posy+1);
            cout<< (char) 254;
            rlutil::locate(posx+5,posy+1);
            cout<< (char) 254;
            break;
    }


}

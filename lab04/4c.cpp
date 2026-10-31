#include <iostream>

using namespace std;

int main() {

int predkosc;

cout << "Prędkość: ";
cin >> predkosc;

int mandat;

if(predkosc < 0) {
    cout << "Prędkość nie może być ujemna" << endl;
} else {

    switch(predkosc) {

    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        mandat = 50;
        break;

    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        mandat = 100;
        break;

    case 21:
        mandat = 110;
        break;

    case 22:
        mandat = 120;
        break;

    case 23:
    case 29:
    case 27:
        mandat = 140;
        break;

    case 24:
    case 25:
    case 28:
        mandat = 150;
        break;

    case 26:
        mandat = 145;
        break;

    default:
        mandat = 200;
        break;
    }

    cout << "Mandat wynosi " << mandat << " PLN" << endl;
}

return 0;
}
#include <iostream>
using namespace std;

/*
float dodaj(float, float)
float odejmij(float, float)
float pomnoz(float, float)
float podziel(float, float)
*/

float dodaj(float a, float b) {
    float c = a + b;

    return c;
}

float odejmij(float a, float b) {
    float c = a - b;

    return c;
}

float pomnoz(float a, float b) {
    float c = a * b;

    return c;
}

float podziel(float a, float b) {
    float c = a / b;

    return c;
}

int main() {

float x, y, wynik;

char znak;

cout << "Działanie: ";
cin >> x >> znak >> y;

if (znak == '+') {
    wynik = dodaj(x,y);
} else if (znak == '-') {
    wynik = odejmij(x,y);
} else if (znak == '*') {
    wynik = pomnoz(x,y);
} else if (znak == '/') {
    wynik = podziel(x,y);
} else {
    cout << "Nieprawidłowe działanie";
    return 0;
}

cout << wynik << endl;

}
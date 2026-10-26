#include <iostream>
#include <iomanip>

using namespace std;

int main() {
char jed;
double temp, Tf, Tc, Tk;
cout << fixed << setprecision(2);

cout << "Jednostka: ";
cin >> jed;
cout << "Temperatura: ";
cin >> temp;

if (jed == 'F') {
    Tf = temp;
    Tc = (Tf - 32) * 5/9;
    Tk = Tc + 273.15;
    cout << "F = " << Tf << endl << "C = " << Tc << endl << "K = " << Tk << endl;

} else if (jed == 'K') {
    Tk = temp;
    Tc = Tk - 273.15;
    Tf = (Tc * 9/5) + 32;
    cout << "F = " << Tf << endl << "C = " << Tc << endl << "K = " << Tk << endl;

} else if (jed == 'C') {
    Tc = temp;
    Tf = (Tc * 9/5) + 32;
    Tk = Tc + 273.15;
    cout << "F = " << Tf << endl << "C = " << Tc << endl << "K = " << Tk << endl;

} else {
    cout << "Nieprawidłowa jednostka" << endl;
}

// cout << "F = " << Tf << endl << "C = " << Tc << endl << "K = " << Tk << endl;

}

/*
Jednostka: F
Temperatura: 100
F = 100.00
C = 37.78
K = 310.93

Wyjście:

Jednostka: Z
Temperatura: 23
Nieprawidłowa jednostka
*/
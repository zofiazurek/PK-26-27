/*
Napisz program, który sprawdzi czy podana liczba całkowita w systemie dziesiętnym jest liczbą parzystą i czy jest podzielna przez 8 i 16. Program wypisuje podzielność słowami "TAK" i "NIE" oraz wypisuje podaną liczbę w postaci ósemkowej i szesnastkowej.

Wyjście:

Podaj liczbę: 27
Parzysta: NIE
Podzielna przez 8: NIE                                                          
Podzielna przez 16: NIE
Ósemkowo: 33
Szesnastkowo: 1b
*/

#include <iostream>

using namespace std;

int main() {
int l;
string p = "TAK";
string f = "NIE";

cout << "Podaj liczbę: ";
cin >> l;

if (l % 2 == 0) {
    cout << "Parzysta: " << p << endl;
} else { 
    cout << "Parzysta: " << f << endl;
}

if (l % 8 == 0) {
        cout << "Podzielna przez 8: " << p << endl;
    } else { 
        cout << "Podzielna przez 8: " << f << endl;
}

if (l % 8 == 0) {
            cout << "Podzielna przez 16: " << p << endl;
    } else { 
            cout << "Podzielna przez 16: " << f << endl;
}
cout << "Ósemkowo: " << oct << l << endl;
cout << "Szesnastkowo: " << hex << l << endl;

}

/*
Napisz program, który wczytuje znak do zmiennej char na następnie wypisuje na ekran znak i jego kod ASCII w postaci dziesiętnej i szesnastkowej.

Wyjście:

Podaj znak: a
Znak: 'a'
Kod: 97 (0x61)
*/




#include <iostream>

using namespace std;

int main() {
    char symbol;
    cout << "Podaj znak: ";
    cin >> symbol;
    cout << "Znak: " << "'" << symbol << "'" << endl;
    cout << "Kod: " << static_cast<int>(symbol) << showbase << hex << " (" << static_cast<int>(symbol) << ")" << endl;

    return 0;
}
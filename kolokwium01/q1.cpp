#include <iostream>

using namespace std;

int main() {

int liczba;
bool pierwsza = true;

cout << "Podaj liczbę: ";
cin >> liczba;

while (liczba <= 1) {
    cout << "Liczba musi być większa od 1." << endl << "Podaj liczbę: ";
    cin >> liczba;
}

for (int i = 2; i < liczba; i++) {
    if (liczba % i == 0) {
        pierwsza = false;
        break;
    }
}

if (pierwsza) {
    cout << "Liczba " << liczba << " jest liczbą pierwszą." << endl;
} else {
    cout << "Liczba " << liczba << " nie jest liczbą pierwszą." << endl;
}

return 0;
}
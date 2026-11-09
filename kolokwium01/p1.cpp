#include <iostream>

using namespace std;

int main() {

int N;

cout << "Liczba pomiarów: ";
cin >> N;

while (N <= 0) {
    cout << "Liczba pomiarów musi być większa od zera." << endl << "Liczba pomiarów: ";
    cin >> N;
}
int temp, max, min;

cout << "Podaj temperaturę: ";

for (int i = 0; i < N; i++) {
    cin >> temp;

    if (i == 0) {
        max = temp;
        min = temp;
    } else {
        if (temp < min) {
            min = temp;
        }
        if (temp > max) {
            max = temp;
        }
    }
}

if (max == min) {
    cout << "Wszystkie temperatury są takie same: " << temp;
} else {
    cout << "Najwyższa temperatura: " << max << endl << "Najniższa temperatura: " << min << endl << "Różnica: " << max - min << endl;

}

}
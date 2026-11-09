#include <iostream>

using namespace std;

int main() {

int N;
int cyfra = 0;
int suma = 0;
int parzyste = 0;
int najwieksza = 0;

cout << "Podaj liczbę: ";
cin >> N;

while (N <= 0) {
    cout << "Liczba musi być dodatnia." << endl << "Podaj liczbę: ";
    cin >> N;
}
while (N > 0) {
    cyfra = N % 10;
    suma = suma + cyfra;

    if (cyfra %2 == 0) {
        parzyste++;

    }
    if (cyfra > najwieksza) {
        najwieksza = cyfra;
    }
    N = N / 10;
}

cout << "Suma cyfr: " << suma << endl << "Liczba cyfr parzystych: " << parzyste << endl << "Największa cyfra: " << najwieksza << endl;


return 0;

}
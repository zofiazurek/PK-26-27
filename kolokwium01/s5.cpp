#include <iostream>

using namespace std;

int main() {

int N;
long int silnia = 1;

cout << "Podaj liczbę: ";
cin >> N;

while (N <= 0 || N > 20) {

cout << "Liczba musi być większa od zera i mniejsza od 20." << endl;
cout << "Podaj liczbę: ";
cin >> N;
}

for (int i = N; i > 0; i--) {

silnia = silnia * i;

}

cout << "Silnia liczby " << N << " wynosi: " << silnia << endl;
return 0;

}
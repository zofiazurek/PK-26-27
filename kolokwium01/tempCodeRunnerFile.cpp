#include <iostream>

using namespace std;

int main() {

int N;
int ujemne = 0;
int dodatnie = 0;
int suma = 0;
int max = 0;

cout << "Podaj liczbę: ";
cin >> N;

if (N == 0) {
    cout << "Nie wprowadzono liczb." << endl;
    return 0;
}

while (N != 0) {
suma = suma + N;

if (N < 0) {
    ujemne ++;
} else if (N > 0) {
    dodatnie ++;
}

if ((dodatnie + ujemne) == 1 || N > max) {
    max = N;
}

cout << "Podaj liczbę: ";
cin >> N;

}

cout << "Suma: " << suma << endl;
cout << "Liczb dodatnich: " << dodatnie << endl;
cout << "Liczb ujemnych: " << ujemne << endl;
cout << "Największa liczba: " << max << endl;

return 0;
}
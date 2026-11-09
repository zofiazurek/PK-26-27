#include <iostream>
#include <iomanip>

using namespace std;
int main() {
int N;

int wynik;
int max, min;
double suma = 0;
double srednia; 


cout << fixed << setprecision(2);
cout << "Podaj liczbę wyników: ";
cin >> N;

while (N <= 0) {
    cout << "Liczba wyników musi być większa od zera." << endl;
    cout << "Podaj liczbę wyników: ";
    cin >> N;
}
cout << "Podaj wyniki: ";
for (int i = 0; i < N; i++) {
cin >> wynik;

    if (i == 0) {
        min = wynik;
        max = wynik;
    } else {
        if (wynik < min) {
            min = wynik;
        }
        if (wynik > max) {
            max = wynik;
        }
    }
suma = suma + wynik;

}

srednia = suma / N;
cout << "Największy wynik: " << max << endl;
cout << "Najmniejszy wynik: " << min << endl;
cout << "Średnia: " << srednia << endl;

return 0;
}

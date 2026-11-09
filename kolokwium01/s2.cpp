#include <iostream>
#include <iomanip>

using namespace std;

int main() {

double N;
double suma = 0;
double maks = 0;
for (int i = 1; i <= 5; i++) {
    cout << "Podaj liczbę " << i << ": ";
    cin >> N;

    suma = suma + N;
    if (i == 1 || maks < N) {
        maks = N;
    }
}
cout << fixed << setprecision(2);
cout << endl;
cout << "Suma: " << suma << endl;
cout << "Największa liczba: " << maks << endl;
cout << "Średnia: " << suma / 5 << endl;

return 0;
}
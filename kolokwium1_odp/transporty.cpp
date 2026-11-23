#include <iostream>
#include <iomanip>

using namespace std;

int main() {

int N;

cout << "Podaj liczbę przejazdów: ";
cin >> N;

if (N < 1 || N > 100) {
    cout << "Błędne N!";
    return 0;
}
cout << fixed << setprecision(2);
char T;
double stawka;
double cena; 
double km;
double suma = 0;
for (int i = 0; i < N; i++) {

cout << "Transport: ";
cin >> T;

/* while (T != 'A' || T != 'S' || T != 'R' || T != 'T') {
    cout << "Nieznany środek transportu" << endl;
    cout << "Transport: ";
    cin >> T;
} */ 

while(true) {
if (T == 'T') stawka = 2.5; 
else if (T == 'A') stawka = 0.4;
else if (T == 'R') stawka = 0.15;
else if (T == 'S') stawka = 0.7;
else {
    cout << "Nieznany środek transportu" << endl;
    cout << "Transport: ";
    cin >> T;
    continue;
}
break;
}

cout << "Liczba kilometrów: ";
cin >> km;

while (km < 0) {
    cout << "Błędna liczba kilometrów!" << endl;
    cout << "Liczba kilometrów: ";
    cin >> km;
}

if (km > 10) {cena = km*stawka*0.9;}
else {cena = km*stawka; }

cout << "Koszt przejazdu: " << cena << " zł" << endl;
suma = suma + cena;

}

cout << "Łączny koszt: " << suma << " zł" << endl;

return 0;
}
 
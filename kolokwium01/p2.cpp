#include <iostream>
#include <iomanip>

using namespace std;

int main() {
char jed;
double wartosc;
double wynik;

cout << "Podaj wartość ciśnienia: ";
cin >> wartosc;

cout << "Podaj jednostkę [1] kPa [2] hPa: ";
cin >> jed;

if (jed == '1') {
wynik = wartosc * 10;

cout << fixed << setprecision(2);

cout << wartosc << " kPa = " << wynik << " hPa" << endl;

} else if (jed == '2') {

wynik = wartosc / 10;

cout << fixed << setprecision(2);

cout << wartosc << " hPa = " << wynik << " kPa" << endl;

} else {
    cout << "Niepoprawny wybór jednostki." << endl;
}




}
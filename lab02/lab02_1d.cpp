/*
Napisz program, który przyjmuje dwa parametry:

parametr pierwszy to jedna z opcji:
1 – przeliczanie jednostek Celsjusza na Fahrenheita,
2 – przeliczanie jednostek Fahrenheita na Celsjusza,
parametr drugi to liczba rzeczywista wyrażająca temperaturę.
Program, w zależności od parametru pierwszego, przelicza podaną w parametrze drugim temperaturę między jednostkami Fahrenheita i Celsjusza. Po przeliczeniu program wypisuje obliczoną wartość z dokładnością do dwóch miejsc po przecinku na ekran.

Uwagi:

program ma być odporny na podawanie wartości mniejszych od zera bezwzględnego, wypisując komunikat "Zbyt zimno na liczenie!".
Wyjście:

Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 1
Podaj temperaturę: 36.6
36.60 st. Celsjusza to 97.88 st. Fahrenheita


Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 2
Podaj temperaturę: 100
100.00 st. Fahrenheita to 37.78 st. Celsjusza

Wybierz sposób konwersji:
[1] Celsjusza na Fahrenheita
[2] Fahrenheita na Celsjusza
Wybór: 1
Podaj temperaturę: -300
Zbyt zimno na liczenie!
*/

#include <iostream> 
#include <iomanip>

using namespace std;

int main() {

cout << fixed << setprecision(2);

char wybor;
double f;
double c;

cout << "Wybierz sposób konwersji:\n[1] Celsjusza na Fahrenheita\n[2] Fahrenheita na Celsjusza\nWybór: ";
cin >> wybor;

if (wybor == '1') {
cout << "Podaj temperaturę: ";
cin >> c;
if (c <= (-273.15)) {
    cout << "Zbyt zimno na liczenie!" << endl;
} else {
// [°F] = ([°C] × 1,8) + 32
cout << c << " st. Celsjusza to " << ((c * 1.8) + 32) << " st. Fahrenheita" << endl;
}
} else if (wybor == '2') {
cout << "Podaj temperaturę: ";
cin >> f;
if (f <= (-459.67)) {
    cout << "Zbyt zimno na liczenie!" << endl;
} else {
// [°F] = ([°C] × 9/5) + 32
cout << f << " st. Fahrenheita to " << ((f - 32) * 5/9) << " st. Celsjusza" << endl;
}
} else 
cout << "Błąd" << endl;

return 0;

}
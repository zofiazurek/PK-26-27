#include <iostream>
#include <iomanip>

using namespace std;

int main () {

int A;
int B;
int krok;

cout << "Podaj początek zakresu: ";
cin >> A;
cout << "Podaj koniec zakresu: ";
cin >> B;

while (B < A) {
    cout << "Błędny zakres." << endl;
    
    cout << "Podaj początek zakresu: ";
    cin >> A;
    cout << "Podaj koniec zakresu: ";
    cin >> B;
}

cout << "Podaj co którą liczbę wypisać: ";
cin >> krok;

while (krok <= 0) {
    cout << "Krok musi być większy od 0." << endl;
    
    cout << "Podaj co którą liczbę wypisać: ";
    cin >> krok;
}
int cyfra;
int ilosc;
double suma = 0;

cout << "Liczby z zakresu [" << A << ", " << B <<"] co " << krok << ": ";
for (int i = A; i <= B; i++) {
if (i == A) {
    cyfra = i;
    ilosc ++;
    suma = suma + cyfra;
    cout << i << " ";
} else if (i == cyfra + krok){
    cyfra = i;
    ilosc ++;
    suma = suma + cyfra;
    cout << i << " ";
}
}
cout << fixed << setprecision(2);
cout << endl;
cout << "Średnia z wybranych liczb: " << suma/ilosc << endl;

return 0;
}
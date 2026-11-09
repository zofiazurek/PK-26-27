#include <iostream> 

using namespace std;

int main() {

int A, B;
int suma = 0;
int liczba = 0;

cout << "Podaj A: ";
cin >> A;

cout << "Podaj B: ";
cin >> B;

// Jeżeli A > B, program wypisuje Błąd: A musi być mniejsze lub równe B.

if (A > B) {
    cout << "Błąd: A musi być mniejsze lub równe B." << endl;
    return 0;
}
cout << "Liczby: ";
for (int i = A; i <= B; i++) {
    if ((i % 5 == 0) && (!(i % 10 == 0))) {
        liczba ++;
        suma = suma + i;
        cout << i << " ";

    }

} 

if (liczba == 0) {
    cout << "Brak liczb spełniających warunek." << endl;
} else {
cout << endl << "Liczba pasujących wartości: " << liczba << endl << "Suma: "<< suma << endl;
}
return 0;
}

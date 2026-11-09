#include <iostream>

using namespace std;

int main() {
int A, B;
int suma = 0;

cout << "Podaj A: ";
cin >> A;

cout << "Podaj B: ";
cin >> B;

if (A > B) {
    cout << "Błąd: A musi być mniejsze lub równe B" << endl;
} else {
    for (int i = A; i <= B; i++) {
        if (i % 2 == 1 && i % 3 == 0)
        suma = suma + i; 
    }
    if (suma == 0) {
        cout << "Brak liczb spełniających warunek.";
    } else {
        cout << "Suma liczb nieparzystych i podzielnych przez 3 z przedziału [" << A << ", " << B << "] wynosi: " << suma << endl;
    }
}
return 0;
}


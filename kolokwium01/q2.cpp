#include <iostream>

using namespace std;

int main() {

int N, cyfra;
int suma = 0;
int iloczyn = 1;
int ilosc = 0;
int najwieksza = 0;


cout << "Podaj liczbę: ";
cin >> N;

while (N <= 0) {
    cout <<"Liczba musi być większa od zera." << endl << "Podaj liczbę: ";
    cin >> N;
}

while (N > 0) {
    cyfra = N % 10;
    suma = suma + cyfra;
    iloczyn = iloczyn * cyfra;
    ilosc ++;

if (cyfra > najwieksza) {
    najwieksza = cyfra;
}

N = N / 10;
}


cout << "Suma cyfr: " << suma << endl;
cout << "Iloczyn cyfr: " << iloczyn << endl; 
cout << "Liczba cyfr: " << ilosc << endl;
cout << "Największa cyfra: " << najwieksza << endl;

return 0;
}
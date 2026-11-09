#include <iostream>

using namespace std;

int main() {

int N;

cout << "Podaj rozmiar: ";
cin >> N;

if ( (N < 3 || N > 21) || (N % 2) == 0) {
    cout << "Nieprawidłowy rozmiar."; 
} 
else {
    for (int w = 0; w < N; w++){
        for (int k = 0; k < N; k++) {
            if (k == N / 2 || w == N / 2) {
                cout << "+";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}
return 0;
    }

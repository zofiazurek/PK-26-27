#include <iostream>

using namespace std;

int main() {

int N;

cout << "Podaj wysokość: ";
cin >> N;

int gwiazdki = 1;
int spacje = N -1;

for (int w = 0; w < N; w++) {
    for (int s = 0; s < spacje; s++) {
        cout << " ";
    }
    for (int g = 0; g < gwiazdki; g++) {
        cout << "*";
    }
    spacje --;
    gwiazdki +=2;
    cout << endl;
}
spacje = 1;
gwiazdki = 2 * N - 3;

for (int z = N - 1; z > 0; z--) {
    for (int s = 0; s < spacje; s++) {
        cout << " ";
    }
    for (int g = 0; g < gwiazdki; g++ ) {
        cout << "*";
    }
    spacje ++;
    gwiazdki -= 2;
    cout << endl;
}

return 0;
}
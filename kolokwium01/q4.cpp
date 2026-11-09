#include <iostream>

using namespace std;

int main() {

int H;

cout << "Podaj wysokość: ";
cin >> H;

if (H <= 0) {
    cout << "Wysokość musi być większa od zera."<< endl;
    return 0;
}

int gwiazdki = 1;
int spacje = H - 1;

for (int w = 0; w < H; w++) {
        for (int s = 0; s < spacje; s++) {
            cout << " ";
        }
        for (int g = 0; g < gwiazdki; g++) {
            cout << "*";
        }
        cout << endl;
        gwiazdki = gwiazdki + 2;
        spacje = spacje - 1;
    }
return 0;
}

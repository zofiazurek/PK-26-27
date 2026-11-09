#include <iostream>

using namespace std;

int main() {

int H;

cout << "Podaj wysokość: ";
cin >> H;

if (H <0) {
    cout << "Wysokość musi być większa od 0" << endl;
return 0;
}

int gwiazdki = 2*H -1;
int spacje = 0;

for(int w = 0; w < H; w++) {
     for (int s = 0; s < spacje; s++) {
        cout << " ";
    }
    for (int g = gwiazdki; g > 0; g --) {
        cout << "*";
    }
cout << endl;
gwiazdki = gwiazdki - 2;
spacje ++;
}

spacje = H -2;
gwiazdki = 3;

for (int w = 0; w < H -1; w++) {
    for (int s = 0; s < spacje; s++) {
        cout << " ";
    }
    for (int g = 0; g < gwiazdki; g++) {
        cout << "*";
    }
cout << endl;
gwiazdki = gwiazdki +2;
spacje --;

}
return 0;
}
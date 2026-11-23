#include <iostream>

using namespace std;

int main() {

int N;

cout << "Podaj N: ";
cin >> N;

int gw = N;
int sp = 0;
for (int w = 0; w < N/2 ; w++) {
    for(int s = 0; s < sp; s++) {
        cout << " ";
    }
    for (int g = 0; g < gw; g++) {
        cout << "*";
    }
    gw = gw -2;
    sp++;
    cout << endl;
}
gw = gw +2;
sp --;
for (int w = 0; w < N/2; w++) {
    for (int s = 0; s < sp; s++) {
        cout << " ";
    }
    for (int g = 0; g < gw; g++) {
        cout << "*";
    }
    gw = gw +2;
    sp --;
    cout << endl;
}
return 0;
}
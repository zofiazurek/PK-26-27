#include <iostream>

using namespace std;

int main() {

int sekundy;
int H, M, S;

cout << "Podaj czas w sekundach: ";
cin >> sekundy;

while (sekundy < 0) {
    cout << "Czas nie może być ujemny." << endl << "Podaj czas w sekundach: ";
    cin >> sekundy;
}

H = sekundy / 3600;
M = (sekundy - (H*3600)) / 60;
S = (sekundy - (M*60) - (H*3600));

cout << "Godziny: " << H << ", minuty: " << M << ", sekundy: " << S << endl;

return 0;
}
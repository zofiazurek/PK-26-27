#include <iostream>

using namespace std;

int wiek (int a, int b) {
    int c = a - b;
    return c;
}

int main(){

int x = 2026;
int ru, w;

cout << "Podaj rok urodzenia: ";
cin >> ru;

w = wiek(x, ru);

cout << w << endl;

return 0;
}
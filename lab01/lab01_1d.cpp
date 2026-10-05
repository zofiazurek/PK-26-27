/*
Napisz program do obliczania pola powierzchni objętości prostopadłościanu o wymiarach zadanych bokach A, B i C. .

Wyjście:

A = 3
B = 4
C = 5
Pole: 94
Objętość: 60

*/

#include <iostream>

using namespace std;

int main(){

    int A, B, C;

    cout << "A =";
    cin >> A;

    cout << "B =";
    cin >> B;

    cout << "C =";
    cin >> C;

    cout << "Pole:" << (A * B * 2) + (A * C * 2) + (B * C *2) << endl;
    cout << "Objętość:" << A*B*C << endl;

    return 0;


}
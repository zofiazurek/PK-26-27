/*
Napisz program do obliczania powierzchni i obwodu koła o zadanym promieniu R. 
Przyjmij wartość pi=3.14. 
Wypisz otrzymane wartości w dokładnością do 2 miejsca po przecinku.

Wyjście:

R = 3
Obwód: 18.84
Pole: 28.26
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float R;
    float pi = 3.14;

    cout << "R =";
    cin >> R;

    cout << fixed << setprecision(2);
    cout << "Obwód:" << pi*2*R << endl;
    cout << "Pole:" << pi*R*R << endl;

    return 0;


}
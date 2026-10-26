/*
N: 2
A: 1
A: 5
Maksimum = 5

N: 1
A: 3
Maksimum = 3
*/

#include <iostream>

using namespace std;

int main()
{
    double n;
    double a;
    double liczba = 1;
    double maks;
    cout << "N: ";
    cin >> n;

    cout << "A: ";
    cin >> a;

    maks = a;

    while ( liczba < n) {
        cout << "A: ";
        cin >> a;
        liczba = liczba + 1;
        if (a > maks) { 
            maks = a;
        }
    }
    if (liczba >= n) {
        cout << "Maksimum: " << maks << endl;
    }
}
/*
Napisz program, który wczytuje od użytkownika 2 liczby całkowite a i b, a następnie wypisuje na ekran ich:

sumę,
różnicę,
iloczyn.

Podaj a: 9
Podaj b: 3
Suma: 12
Różnica: 6
Iloczyn: 27

*/

#include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    cout << "Podaj a:";
    cin >> a;

    cout << "Podaj b:";
    cin >> b;

    cout << "Suma:" << a + b << endl;
    cout << "Różnica:" << a - b << endl;
    cout << "Iloczyn:" << a * b << endl;


    return 0;


}
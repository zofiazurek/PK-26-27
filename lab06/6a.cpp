#include <iostream>
using namespace std;

int fib(int arg) {
    int suma = 0;
    int a = 0;
    int b = 1;

 do {
    suma = a + b;

    a = b;
    b  = suma;
    } while (suma <= arg);
    
return suma;

}

int main() {

int N;

cout << "Podaj wartość: ";
cin >> N;

if (N < 0) {
    cout << "Wartość nie może być ujemna" << endl;
    return 0;
}
cout << "Następny wyraz ciągu to " << fib(N) << endl;


}
#include <iostream>

using namespace std;

long long int fib(int n) {            // an = an-1 + an-2
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);


}

int main() {
    int N;
    long long int wynik;
    cout << "N: ";
    cin >> N;

   wynik = fib(N);

   cout << "fib(" << N << ") = " << wynik << endl;
   return 0;
}


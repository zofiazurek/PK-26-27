#include <iostream>

using namespace std;

long long int silnia(int N) {
    if (N <= 1) {
        return 1;
    } else {
        return N * silnia(N-1);
    }

}

int main() {
long long int s, N;

cout << "N:";
cin >> N;

if (N < 0) {
    cout << "N musi być nieujemne" << endl;
    return 0;
}

s = silnia(N);

cout << "Silnia = " << s << endl;

return 0;
}
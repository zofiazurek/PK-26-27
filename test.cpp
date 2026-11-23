#include <iostream>
using namespace std;

void zamien(int n, int podstawa) {
    if (n == 0) return;                 // warunek końca

    zamien(n / podstawa, podstawa);     // najpierw starsze cyfry
    cout << "0123456789ABCDEF"[n % podstawa];  // potem ostatnia cyfra
}

int main() {
    int N;
    cout << "N: ";
    cin >> N;

    cout << "Binarnie: ";      zamien(N, 2);  cout << endl;
    cout << "Piątkowo: ";      zamien(N, 5);  cout << endl;
    cout << "Siódemkowo: ";    zamien(N, 7);  cout << endl;
    cout << "Ósemkowo: ";      zamien(N, 8);  cout << endl;
    cout << "Szesnastkowo: ";  zamien(N, 16); cout << endl;

    return 0;
}
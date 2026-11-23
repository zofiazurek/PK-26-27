#include <iostream>
using namespace std;

void cyfra( int c) {
    if (c < 10 && c >= 0) {
        cout << c;
    } else {
        switch(c) {
            case 10: cout << 'A'; break;
            case 11: cout << 'B'; break;
            case 12: cout << 'C'; break;
            case 13: cout << 'D'; break;
            case 14: cout << 'E'; break;
            case 15: cout << 'F'; break;
        }
    }
}


void zamiana (int a, int p) {
    if (a == 0) return;

    zamiana (a/p, p);
    cyfra(a% p);
}
void wypisz (int a, int p) {
    if (a == 0) {
    cout << "0"; }
    else {
    zamiana (a, p);}
}

int main() {
int N;

cout << "N: ";
cin >> N;

cout << "Binarnie: ";  wypisz(N, 2);  cout << endl;
cout << "Piątkowo: ";  wypisz(N, 5);  cout << endl;
cout << "Siódemkowo: ";  wypisz(N, 7);  cout << endl;
cout << "Ósemkowo: ";  wypisz(N, 8);  cout << endl;
cout << "Szesnastkowo: ";  wypisz(N, 16);  cout << endl;

return 0;
}
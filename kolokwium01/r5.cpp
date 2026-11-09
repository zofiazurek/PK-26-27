#include <iostream>

using namespace std;

int main() {

int H;

cout << "Podaj wysokość choinki: ";
cin >> H;

int s = H -1;
int g = 1;

for (int w = 0; w < H; w++) {
    for (int spacje = 0; spacje < s; spacje++) {
        cout << " ";
    }
    for (int gwiazdki = 0; gwiazdki < g; gwiazdki++ ) {
        cout << "*";
    } 

    s --;
    g += 2;
    
    cout << endl;

}
return 0;
}
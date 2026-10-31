#include <iostream>

using namespace std;

int main() {

    int h;
    cout << "Wysokość: ";
    cin >> h;

    int sp = h - 1;
    int gw = 1;

    for(int w = 0; w < h; w++) {
        for(int s = 0; s < sp; s++) {
            cout << " ";
        }
        for (int g = 0; g < gw; g++) {
        cout << "*";
        }
        
        sp--;
        gw += 2;
        cout << endl;
        
    }
return 0;
    }



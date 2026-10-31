#include <iostream>

using namespace std;

int main() {

    int wier, kol;
    // cout << "Wiersze:";
    cin >> wier >> kol;

    int numer = 1;

    for(int w = 0; w < wier; w++ ) {

        for(int k = 0; k < kol; k++) {
            // co sie dzieje w kolumnach
        cout << numer;
        numer ++;
        
        }
        // co sie dzieje w wierszach
        cout << endl;
    }

return 0;
}
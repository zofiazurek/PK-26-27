#include <iostream>

using namespace std;

int main() {

    int rozmiar;
    cout << "Rozmiar:";
    cin >> rozmiar;

    for(int w = 0; w < rozmiar; w++ ) {

        for(int k = 0; k < rozmiar; k++) {
            // co sie dzieje w kolumnach
        
            if( (w+k) % 2 == 0) {
                cout << "##";
            } else {
                cout << "  ";
            }
        
        }
        // co sie dzieje w wierszach
        cout << endl;
    }

return 0;
}
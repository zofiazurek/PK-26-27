#include <iostream>

using namespace std;

int main() {

int podstawa, wykladnik;

long int potega;

cout << "Podstawa: ";
cin >> podstawa;
cout << "Wykładnik: ";
cin >> wykladnik;

if (wykladnik < 0) {
    cout << "Wykładnik nie może być ujemny" << endl;
} else if (wykladnik == 1) {
    cout << podstawa << " ^ " << wykladnik << " = " << podstawa << endl; 
} else if (wykladnik == 0) {
    cout << podstawa << " ^ " << wykladnik << " = 1" << endl; 
}
else {
    potega = podstawa;
    for(int p = 1; p < wykladnik; p++) {
    potega = (potega * podstawa);
    }
    cout << podstawa << " ^ " << wykladnik << " = " << potega << endl; 
}

}
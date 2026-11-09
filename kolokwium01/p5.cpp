#include <iostream>
#include <iomanip>
using namespace std;

int main() {

char znak;
string typ;

cout << "Podaj znak: ";
cin >> znak;

if (znak >= 'A' && znak <= 'Z') {
    typ = "wielka litera";
} else if (znak >= 'a' && znak <= 'z') {
    typ = "mała litera";
} else if (znak >= '0' && znak <= '9') {
    typ = "cyfra";
} else {
    typ = "inny znak";
}
cout << "Znak: '" << znak << "'" << endl;
cout << "Rodzaj: " << typ << endl;
cout << "Kod dziesiętnie: " << dec << static_cast<int>(znak) << endl;
cout << "Kod szesnastkowo: " << showbase << hex << static_cast<int>(znak) << endl;

}

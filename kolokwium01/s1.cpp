#include <iostream>
#include <string>

using namespace std;

int main() {

char znak;
string rodzaj;

cout << "Podaj znak: ";
cin >> znak;

if (znak >= 'a' && znak <= 'z') {
    rodzaj = "Znak jest małą literą";
} else if (znak >= 'A' && znak <= 'Z') {
    rodzaj = "Znak jest wielką literą";
} else if (znak >= '0' && znak <= '9') {
    rodzaj = "Znak jest cyfrą";
} else {
    rodzaj = "Znak jesy innym znakiem";
}

cout << rodzaj << endl;
cout << "Kod ASCII: " << static_cast<int>(znak) << endl;

return 0;
}
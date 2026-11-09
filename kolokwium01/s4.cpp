#include <iostream> 

using namespace std;

int main() {

char znak;

cout << "Podaj znak: ";
cin >> znak;

cout << endl;
cout << "Znak: " << znak << endl; 
cout << "Kod dziesiętny: " << dec << static_cast<int>(znak) << endl;
cout << "Kod szesnastkowy: " << hex << showbase << static_cast<int>(znak) << endl;
cout << "Kod ósemkowy: " << oct << showbase << static_cast<int>(znak) << endl;

return 0;

}
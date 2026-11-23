#include <iostream>
using namespace std;
bool pierwsze = true;

void wypisz (const string & s) {
if (!pierwsze) cout << " ";
cout << s;
pierwsze = false; 
}
void setki (int a) {
    switch(a) {
        case 1: wypisz("sto"); break;
        case 2: wypisz("dwieście"); break;
        case 3: wypisz("trzysta"); break;
        case 4: wypisz("czterysta"); break;
        case 5: wypisz("pięćset"); break;
        case 6: wypisz("sześćset"); break;
        case 7: wypisz("siedemset"); break;
        case 8: wypisz("osiemset"); break;
        case 9: wypisz("dziewięćset"); break;
    }
}
void nastki (int a) {
    switch(a) {
        case 0: wypisz("dziesięć"); break;
        case 1: wypisz("jedenaście"); break;
        case 2: wypisz("dwanaście"); break;
        case 3: wypisz("trzynaście"); break;
        case 4: wypisz("czternaście"); break;
        case 5: wypisz("piętnaście"); break;
        case 6: wypisz("szesnaście"); break;
        case 7: wypisz("siedemnaście"); break;
        case 8: wypisz("osiemnaście"); break;
        case 9: wypisz("dziewiętnaście"); break;
    }

}

void dziesiatki (int a) {
    switch(a) {
        case 2: wypisz("dwadzieścia"); break;
        case 3: wypisz("trzydzieści"); break;
        case 4: wypisz("czterdzieści"); break;
        case 5: wypisz("pięćdziesiąt"); break;
        case 6: wypisz("sześćdziesiąt"); break;
        case 7: wypisz("siedemdziesiąt"); break;
        case 8: wypisz("osiemdziesiąt"); break;
        case 9: wypisz("dziewięćdziesiąt"); break;
    }
}
void jednosci (int a) {
    switch(a) {
        case 1: wypisz("jeden"); break;
        case 2: wypisz("dwa"); break;
        case 3: wypisz("trzy"); break;
        case 4: wypisz("cztery"); break;
        case 5: wypisz("pięć"); break;
        case 6: wypisz("sześć"); break;
        case 7: wypisz("siedem"); break;
        case 8: wypisz("osiem"); break;
        case 9: wypisz("dziewięć"); break;
    }
}

int main() {

int jedn, dzie, set;

int liczba;
cout << "Liczba: ";
cin >> liczba;

if (liczba < 0) {
    wypisz("minus");
    liczba = -liczba;
}
if (liczba == 0) {
    wypisz("zero");
} else {
    jedn = liczba % 10;
    dzie = (liczba/10) % 10;
    set = liczba / 100;

    setki(set);
    if (dzie == 1) {
        nastki(jedn);
    } else {
        dziesiatki(dzie);
        jednosci(jedn);
    }
}

cout << endl;
return 0;

}

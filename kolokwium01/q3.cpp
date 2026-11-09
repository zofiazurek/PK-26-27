#include <iostream>

using namespace std;

int main()
{

    int A;
    int B;

    int ilosc = 0;
    int suma = 0;

    cout << "Podaj liczbę A: ";
    cin >> A;

    cout << "Podaj liczbę B: ";
    cin >> B;

    if (B < A)
    {
        cout << "B nie może być mniejsze od A.";
        return 0;
    }
    for (int i = A; i <= B; i++)
    {
        if ((i % 3 == 0) || (i % 7 == 0))
        {
            ilosc++;
            suma = suma + i;
        }
    }

    if (ilosc == 0)
    {
        cout << "Brak pasujących liczb." << endl;
    }
    else
    {
        cout << "Liczby: ";
        for (int i = A; i <= B; i++)
        {
            if ((i % 3 == 0) || (i % 7 == 0))
            {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "Liczba pasujących wartości: " << ilosc << endl;
        cout << "Suma: " << suma << endl;
    }
    return 0;
}
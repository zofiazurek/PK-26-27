#include <iostream>

using namespace std;

int main()
{

    int N;
    int A;
    int suma = 0;

    cout << "N: ";
    cin >> N;

    if (N < 0)
    {
        cout << "N musi być większe od 0" << endl;
    }
    else
    {

        cout << "A: ";
        cin >> A;

        if (A < 0)
        {
            cout << "A nie jest liczbą naturalną";
        }
        else
        {
            while (N > 0)
            {
                A = A + 1;
                suma = suma + A;
                N = N - 1;
            } cout << "Suma = " << suma << endl;
        }    
    }
    return 0;
}
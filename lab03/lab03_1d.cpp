#include <iostream>

using namespace std;

int main()
{

    int N;
    long int S = 1;

    cout << "N: ";
    cin >> N;

    if (N < 0)
    {
        cout << "N musi być nieujemne" << endl;
    }
    else
    {
        while (N > 1)
        {
            S = S * N;
            N = N - 1;
        }
        cout << "Silnia = " << S << endl;
    }
    return 0;
}
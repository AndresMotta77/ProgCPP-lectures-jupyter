#include <iostream>
using namespace std;

double factRec(int n)
{
    if (n < 0)
    {
        cout << "n = " << n << " inadecuado." << endl;
        return 0.0;
    }

    if (n < 2)
        return 1.0;
    else
        return n * factRec(n - 1);
}

int main()
{
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Factorial de " << n << " = " << factRec(n) << endl;

    return 0;
}
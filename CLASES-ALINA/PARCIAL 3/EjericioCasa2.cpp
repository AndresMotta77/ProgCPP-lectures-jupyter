#include <iostream>

using namespace std;

// Función recursiva
int F(int x, int n)
{
    if (n == 0)
        return x;

    if (n == 1)
        return x + 2;

    return F(x, n - 1) - F(x, n - 2);
}

int main()
{
    int x = 20;
    int n = 12;

    cout << "F(" << x << "," << n << ") = " << F(x, n) << endl;

    return 0;
}

/*
    Función recursiva definida por la relación de recurrencia:

        F(x, n) = F(x, n-1) - F(x, n-2),   para n >= 2

    Condiciones iniciales:

        F(x, 0) = x
        F(x, 1) = x + 2

    La función calcula F(x, n) utilizando llamadas recursivas
    hasta llegar a los casos base (n = 0 y n = 1).

    Ejemplo:
        F(20, 12) = 20
*/
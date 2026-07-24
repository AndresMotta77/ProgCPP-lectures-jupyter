#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;

    cout << "Numero de ecuaciones: ";
    cin >> n;

    double A[n][n + 1];

    cout << "\nIngrese la matriz aumentada [A|b]:\n";

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n + 1; j++)
        {

            cin >> A[i][j];
        }
    }

    double x[n];

    cout << "\nIngrese la aproximacion inicial:\n";

    for (int i = 0; i < n; i++)
    {

        cout << "x" << i + 1 << " = ";
        cin >> x[i];
    }

    int iteraciones;

    cout << "\nNumero de iteraciones: ";
    cin >> iteraciones;

    // Metodo Gauss-Seidel

    for (int k = 0; k < iteraciones; k++)
    {

        for (int i = 0; i < n; i++)
        {

            double suma = 0;

            for (int j = 0; j < n; j++)
            {

                if (j != i)
                {

                    suma += A[i][j] * x[j];
                }
            }

            // Actualizacion inmediata
            x[i] = (A[i][n] - suma) / A[i][i];
        }

        cout << "\nIteracion " << k + 1 << endl;

        for (int i = 0; i < n; i++)
        {

            cout << "x" << i + 1 << " = "
                 << fixed << setprecision(6)
                 << x[i] << endl;
        }
    }

    cout << "\nSolucion aproximada final:\n";

    for (int i = 0; i < n; i++)
    {

        cout << "x" << i + 1 << " = "
             << fixed << setprecision(6)
             << x[i] << endl;
    }

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cout << "Numero de ecuaciones: ";
    cin >> n;

    double A[n][n + 1];

    cout << "\nIngrese la matriz aumentada (" << n << " x " << n + 1 << "):\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cin >> A[i][j];
        }
    }

    // Eliminación de Gauss
    for (int k = 0; k < n - 1; k++)
    {

        if (A[k][k] == 0)
        {
            cout << "Pivote cero. El programa no realiza pivoteo.\n";
            return 1;
        }

        for (int i = k + 1; i < n; i++)
        {

            double factor = A[i][k] / A[k][k];

            for (int j = k; j < n + 1; j++)
            {
                A[i][j] -= factor * A[k][j];
            }
        }
    }

    cout << "\nMatriz escalonada:\n\n";

    cout << fixed << setprecision(4);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << setw(10) << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
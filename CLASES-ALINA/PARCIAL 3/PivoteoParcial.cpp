#include <iostream>
#include <iomanip>
#include <cmath>

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

    // Eliminación de Gauss con pivoteo parcial
    for (int k = 0; k < n - 1; k++)
    {

        // Buscar el mayor elemento de la columna k
        int filaMax = k;

        for (int i = k + 1; i < n; i++)
        {
            if (abs(A[i][k]) > abs(A[filaMax][k]))
            {
                filaMax = i;
            }
        }

        // Intercambiar filas si es necesario
        if (filaMax != k)
        {
            for (int j = 0; j < n + 1; j++)
            {
                swap(A[k][j], A[filaMax][j]);
            }
        }

        // Verificar pivote
        if (A[k][k] == 0)
        {
            cout << "La matriz no tiene solucion unica." << endl;
            return 1;
        }

        // Eliminación
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
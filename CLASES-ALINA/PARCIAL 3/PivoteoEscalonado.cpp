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
    double s[n]; // Factores de escala

    cout << "\nIngrese la matriz aumentada (" << n << " x " << n + 1 << "):\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cin >> A[i][j];
        }
    }

    // Calcular los factores de escala
    for (int i = 0; i < n; i++)
    {

        s[i] = 0;

        for (int j = 0; j < n; j++)
        {

            if (abs(A[i][j]) > s[i])
            {
                s[i] = abs(A[i][j]);
            }
        }
    }

    // Eliminación de Gauss con pivoteo parcial escalado
    for (int k = 0; k < n - 1; k++)
    {

        int filaMax = k;
        double mayor = abs(A[k][k]) / s[k];

        // Buscar la mejor fila
        for (int i = k + 1; i < n; i++)
        {

            double razon = abs(A[i][k]) / s[i];

            if (razon > mayor)
            {
                mayor = razon;
                filaMax = i;
            }
        }

        // Intercambiar filas
        if (filaMax != k)
        {

            for (int j = 0; j < n + 1; j++)
            {
                swap(A[k][j], A[filaMax][j]);
            }

            // Intercambiar factores de escala
            swap(s[k], s[filaMax]);
        }

        // Verificar pivote
        if (abs(A[k][k]) < 1e-12)
        {
            cout << "La matriz no tiene solucion unica.\n";
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
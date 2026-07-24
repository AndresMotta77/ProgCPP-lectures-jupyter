#include <iostream>

using namespace std;

int main()
{
    const int TAM = 10;
    int lista[TAM];
    int temp;

    // Leer los elementos del vector
    cout << "Ingrese " << TAM << " numeros enteros:\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << "Elemento [" << i << "]: ";
        cin >> lista[i];
    }

    // Ordenamiento Burbuja
    for (int i = 1; i < TAM; i++)
    {
        for (int j = 0; j < TAM - 1; j++)
        {
            if (lista[j] > lista[j + 1])
            {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }

    // Imprimir la lista ordenada
    cout << "\nLista ordenada:\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}
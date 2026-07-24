#include <iostream>

using namespace std;

int main()
{
    const int TAM = 10;
    double nota[TAM];
    double suma = 0.0, media;
    double temp;

    // Leer las calificaciones
    cout << "Ingrese las " << TAM << " calificaciones:\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> nota[i];
        suma += nota[i];
    }

    // Calcular la media
    media = suma / TAM;

    cout << "\nLa media es: " << media << endl;

    // Imprimir las notas mayores que la media
    cout << "\nCalificaciones mayores que la media:\n";
    for (int i = 0; i < TAM; i++)
    {
        if (nota[i] > media)
        {
            cout << nota[i] << " ";
        }
    }

    // Ordenar en forma descendente (Burbuja)
    for (int i = 1; i < TAM; i++)
    {
        for (int j = 0; j < TAM - 1; j++)
        {
            if (nota[j] < nota[j + 1]) // Cambia el signo para descendente
            {
                temp = nota[j];
                nota[j] = nota[j + 1];
                nota[j + 1] = temp;
            }
        }
    }

    // Mostrar la lista ordenada
    cout << "\n\nCalificaciones ordenadas de mayor a menor:\n";
    for (int i = 0; i < TAM; i++)
    {
        cout << nota[i] << " ";
    }

    cout << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int N = 15;
    double a[N];
    double suma = 0.0;
    double media, s = 0.0;

    // Leer los datos
    cout << "Ingrese los 15 numeros reales:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
        suma += a[i];
    }

    // Calcular la media
    media = suma / N;

    // Calcular la suma de cuadrados
    for (int i = 0; i < N; i++)
    {
        s += pow(a[i] - media, 2);
    }

    // Calcular la desviación estándar muestral
    s = sqrt(s / (N - 1));

    // Mostrar resultados
    cout << "\nMedia = " << media << endl;
    cout << "Desviacion estandar = " << s << endl;

    return 0;
}
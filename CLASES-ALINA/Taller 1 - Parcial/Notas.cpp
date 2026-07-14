#include <iostream>

int main()
{
    int N, nota, mayor;

    std::cout << "Digite la cantidad de notas: ";
    std::cin >> N;

    if (N > 0)
    {
        for (int i = 0; i < N; i++)
        {
            std::cout << "Digite la nota " << i + 1 << ": ";
            std::cin >> nota;

            if (i == 0)
            {
                mayor = nota;
            }

            if (nota > mayor)
            {
                mayor = nota;
            }
        }

        std::cout << "\nLa nota mayor es: " << mayor;
    }
    else
    {
        std::cout << "El numero de notas debe ser mayor que 0";
    }

    return 0;
}
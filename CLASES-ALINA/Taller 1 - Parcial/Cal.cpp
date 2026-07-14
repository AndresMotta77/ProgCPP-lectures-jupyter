#include <iostream>

int main(void)
{

    double a, b, suma, resta, division, multiplicacion;
    char operador;
    std::cout << "Digite la operacion: ";

    std::cin >> a;
    std::cin >> operador;
    std::cin >> b;

    if (operador == '+')
    {
        suma = a + b;
        std::cout << "El resulatdo es: " << suma;
    }
    else if (operador == '-')
    {
        resta = a - b;
        std::cout << "El resulatdo es: " << resta;
    }
    else if (operador == '/')
    {
        division = a / b;
        std::cout << "El resulatdo es: " << division;
    }
    else if (operador == '*')
    {
        multiplicacion = a * b;
        std::cout << "El resulatdo es: " << multiplicacion;
    }
    else
    {
        std::cout << "operacion no definida";
    }

    return 0;
}
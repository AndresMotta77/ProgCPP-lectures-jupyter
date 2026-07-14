#include <iostream>

int main(void)
{

    double number;
    std::cout << "Ingreese el valor: ";
    std::cin >> number;

    char ch;
    std::cout << "Ingrese la direccion de conversion (b o k): ";
    std::cin >> ch;

    if (ch == 'b')
    {
        number = number * 1024;
        std::cout << "El numero en bytes es: " << number;
    }
    else if (ch == 'k')
    {
        number = number / 1024;
        std::cout << "El numero en kylobytes es: " << number;
    }
    else
    {
        std::cout << "Cometio algun error en la ejecucion";
    }

    return 0;
}
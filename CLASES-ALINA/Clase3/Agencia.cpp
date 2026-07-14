#include <iostream>
#include <string>

int main()
{
    std::string nombre, descuento;
    int edad, estadia;
    double kilometros, precio;

    std::cout << "Por favor diligencie la siguiente informacion:  " << std::endl;
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Edad: ";
    std::cin >> edad;
    std::cout << "Dias de estadia: ";
    std::cin >> estadia;
    std::cout << "Kilometros de viaje: ";
    std::cin >> kilometros;
    std::cout << std::endl;

    if ((estadia > 7 && kilometros > 800) || edad > 55)
    {
        precio = kilometros * 0.5 * 0.75;
        descuento = "25%";
    }
    else
    {
        precio = kilometros * 0.5;
        descuento = "0%";
    }

    std::cout << "Estimado Sr. " << nombre << ", el precio de su viaje es de " << precio << "€" << std::endl;
    std::cout << "Le hemos aplicado un descuento de " << descuento;

    return 0;
}
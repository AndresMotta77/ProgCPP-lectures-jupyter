#include <iostream>

int main(void)
{

    int x, y;
    char c1, c2, c3;

    std::cout << "Ingrese el punto de la forma (x,y): ";
    std::cin >> c1 >> x >> c2 >> y >> c3;

    if (x > 0 and y > 0)
    {
        std::cout << "El punto: " << c1 << x << c2 << y << c3 << " pertenece al primer cuadrante";
    }
    else if (x < 0 and y > 0)
    {
        std::cout << "El punto: " << c1 << x << c2 << y << c3 << " pertenece al segundo cuadrante";
    }
    else if (x < 0 and y < 0)
    {
        std::cout << "El punto: " << c1 << x << c2 << y << c3 << " pertenece al tercer cuadrante";
    }
    else if (x > 0 and y < 0)
    {
        std::cout << "El punto: " << c1 << x << c2 << y << c3 << " pertenece al cuarto cuadrante";
    }
    else
    {
        std::cerr << "Punto no valido";
    }

    return 0;
}
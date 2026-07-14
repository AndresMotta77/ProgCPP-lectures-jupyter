#include "encabezado.h"
#include <iostream>
#include <cmath>

double funcion(double x);

int main(int argc, char **argv)
{
    double x{0}, h{0};

    x = std::stod(argv[1]);
    h = std::stod(argv[2]);

    std::cout << "Forward difference: " << forward_diff(x, h, funcion) << std::endl;
    std::cout << "Central difference: " << central_diff(x, h, funcion) << std::endl;
    std::cout << "Manual: " << 2 * x * std::cos(x * x) << std::endl;

    return 0;
}

double funcion(double x)
{
    return std::sin(x * x);
}
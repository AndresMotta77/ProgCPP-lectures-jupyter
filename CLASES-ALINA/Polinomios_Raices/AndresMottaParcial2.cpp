#include <iostream>
#include <cmath>

double f(double x)
{
    return std::pow(x, 3) - x - 2;
}

int main(void)
{

    double eps;
    double x0 = 1.0;
    double x1 = 2.0;

    std::cout << "Digite la tolerancia: ";
    std::cin >> eps;

    for (int i = 0; i < 100; i++)
    {
        double x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));

        std::cout << "Iteración " << i + 1 << ": x = " << x2 << std::endl;

        if (std::abs(f(x2)) < eps)
        {
            std::cout << "Raíz encontrada: " << x2 << std::endl;
            break;
        }

        x0 = x1;
        x1 = x2;
    }

    return 0;
}
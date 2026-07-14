#include <iostream>
#include <cmath>

int main(void)
{
    double a, b, c, r1, r2;

    std::cout << "Digite el numero a: ";
    std::cin >> a;

    std::cout << "Digite el numero b: ";
    std::cin >> b;

    std::cout << "Digite el numero c: ";
    std::cin >> c;

    r1 = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    std::cout << "La primera raiz es: " << r1 << std::endl;
    std::cout << "La segunda raiz es: " << r2 << std::endl;

    return 0;
}

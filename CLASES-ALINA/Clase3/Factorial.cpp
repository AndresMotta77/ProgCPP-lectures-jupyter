#include <iostream>
#include <cmath>

int main(void)
{

    int n;
    std::cout << "Digite el numero n para hallar su factorial: ";
    std::cin >> n;

    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    std::cout << "El resultado de " << n << " factorial es: " << result;

    return 0;
}
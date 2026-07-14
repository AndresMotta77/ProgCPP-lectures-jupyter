#include <iostream>
#include <cmath>

int main(void)
{
    int N;
    double sum = 0;

    std::cout << "Digite el numero N hasta donde quiere la sumatoria: ";
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        sum = pow(i, 3) - cos(i) + sum;
    }
    std::cout << "El resulatdo de la suma es: " << sum;

    return 0;
}

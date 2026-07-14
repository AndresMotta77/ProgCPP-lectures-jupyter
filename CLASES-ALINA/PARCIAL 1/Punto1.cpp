#include <iostream>
#include <cmath>

int main(void)
{

    int N;
    double sum = 0;
    double x;
    double fac = 1;

    std::cout << "Digite el termino N de precision : ";
    std::cin >> N;

    std::cout << "Digite el termino x que quiere calcular: ";
    std::cin >> x;

    if (N > 1)
    {

        for (int i = 1; i <= N; i++)
        {
            fac = fac * i;
            sum = sum + (pow(x, i) / (fac));
        }
        sum = sum + 1;

        std::cout << "El resultado es e^" << x << " hasta el termino " << N << " es: " << sum;
    }
    else if (N == 1)
    {
        std::cout << "El resultado es e^" << x << " hasta el termino " << N << " es: " << N;
    }

    return 0;
}
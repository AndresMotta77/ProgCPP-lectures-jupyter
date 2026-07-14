#include <iostream>
#include <cmath>

int fibonacci(int n);

int main(void)
{
    double count = 0;

    for (int n = 0; n <= 10; n++)
    {
        if (n == 4)
            continue;
        count = fibonacci(n) + count;
    }

    std::cout << "La suma de los primeros n Fibonacci menos el F(4) es " << count;
    return 0;
}

int fibonacci(int n)
{
    return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
}
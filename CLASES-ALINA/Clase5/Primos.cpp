#include <iostream>
#include <cmath>

int count_primes(int p);
bool isprime(int m);

int main(void)
{
    int f;
    std::cout << "Digite el numero de primos hasta el valor n que quiera conocer: ";
    std::cin >> f;

    int total = 0;

    for (int n = 2; n <= f; n++)
    {
        total = count_primes(n);
        std::cout << n << "\t" << total << std::endl;
    }

    std::cout << "Hasta " << f << " hay " << total << " numeros primos" << std::endl;

    return 0;
}

int count_primes(int p)
{
    int k = 0;
    for (int i = 2; i <= p; i++)
    {
        if (isprime(i))
        {
            k++;
        }
    }
    return k;
}

bool isprime(int m)
{
    if (m < 2)
        return false;

    for (int i = 2; i <= std::sqrt(m); i++)
    {
        if (m % i == 0)
        {
            return false;
        }
    }
    return true;
}
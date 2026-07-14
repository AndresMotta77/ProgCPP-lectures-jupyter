#include <iostream>
#include <cmath>

int count_primes(int p);
bool isprime(int m);

int main(void)
{
    for (int n = 2; n <= 200; n++)
    {
        int count = count_primes(n);
        std::cout << n << "\t" << count << std::endl;
    }
    return 0;
}

int count_primes(int p)
{
    int k = 0;
    for (int i = 2; i < p; i++)
    {
        if (isprime(i) == true)
        {
            k = k + 1;
        }
    }
    return k;
}

bool isprime(int m)
{
    bool flag = true;
    for (int i = 2; i <= std::sqrt(m); i++)
    {
        if (m % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

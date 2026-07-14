#include <iostream>
#include <cmath>

/* bool primo(int num);

int main(void)
{
    int num;

    std::cout << "Escriba un numero del 2-10: ";
    std::cin >> num;

    if (primo(num))
    {
        std::cout << "El numero es primo";
    }
    else if (primo(num) == false)
    {
        std::cout << "El numero no es primo ";
    }
    else
    {
        std::cout << "Too large to verify manually";
    }
    return 0;
}

bool primo(int num)
{
    bool flag = true;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return flag;
} */

int main(void)
{
    int num;
    std::cout << "Write a number between 1-10, please: ";
    std::cin >> num;

    if (num == 2)
    {
        std::cout << "This number is prime";
    }
    else if (num == 3)
    {
        std::cout << "This number is prime";
    }
    else if (num == 4)
    {
        std::cout << "This number isnt prime";
    }
    else if (num == 5)
    {
        std::cout << "This number is prime";
    }
    else if (num == 6)
    {
        std::cout << "This number isnt prime";
    }
    else if (num == 7)
    {
        std::cout << "This number is prime";
    }
    else if (num == 8)
    {
        std::cout << "This number isnt prime";
    }
    else if (num == 9)
    {
        std::cout << "This number isnt prime";
    }
    else
    {
        std::cout << "Too large to verify manually";
    }
    return 0;
}

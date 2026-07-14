#include <iostream>

int main(void)
{
    int i, j, n;

    std::cout << "Digite el numero n para hacer el cuadrado nxn: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
            {
                std::cout << " ";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
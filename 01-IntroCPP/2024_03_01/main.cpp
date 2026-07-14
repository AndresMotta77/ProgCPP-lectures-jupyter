#include <iostream>
#include <string>
#include "encabezado.h"

int main(int argc, char **argv)
{
    int nmin{0}, nmax{0};

    nmin = std::stoi(argv[1]);
    nmax = std::stoi(argv[2]);

    for (int i = nmin; i <= nmax; i++)
    {
        if (primo(i) == true and primo(i + 4) == true)
        {
            std::cout << "(" << i << "," << i + 4 << ")" << "\n";
        }
    }

    return 0;
}

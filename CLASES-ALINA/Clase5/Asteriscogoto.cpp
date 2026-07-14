#include <iostream>

int main(void)
{
    int i = 0;
    int j = 0;

fila:
    if (i >= 5)
        goto fin;

    j = 0;

columna:
    if (j >= 5)
        goto salto_linea;

    if (i == 0 || i == 4 || j == 0 || j == 4)
        std::cout << "*";
    else
        std::cout << " ";

    j++;
    goto columna;

salto_linea:
    std::cout << std::endl;

    i++;
    goto fila;

fin:
    return 0;
}
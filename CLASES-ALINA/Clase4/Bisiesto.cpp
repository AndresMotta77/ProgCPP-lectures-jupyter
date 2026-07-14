#include <iostream>

int main(void)
{

    int año;
    std::cout << "Digite el año que desea conocer si es bisiesto o normal: ";
    std::cin >> año;

    if (año <= 0)
    {
        std::cout << "Año equivocado";
    }
    else if (año > 0 && año % 4 != 0)
    {
        std::cout << año << " tiene 365 dias, año normal";
    }
    else
    {
        if (año % 100 != 0)
        {
            std::cout << año << " tiene 366 dias, año bisiesto";
        }
        else
        {
            if (año % 400 == 0)
            {
                std::cout << año << " tiene 366 dias, año bisiesto";
            }
            else
            {
                std::cout << año << " tiene 365 dias, año normal";
            }
        }
    }

    return 0;
}
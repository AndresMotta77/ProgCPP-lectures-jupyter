#include <iostream>

int main()
{
    int totalMin;

    std::cout << "Digite la cantidad de minutos: ";
    std::cin >> totalMin;

    int dias = totalMin / 1440;
    totalMin = totalMin % 1440;

    int horas = totalMin / 60;
    totalMin = totalMin % 60;

    std::cout << "Tiempo equivalente:\n";
    std::cout << dias << " dias, ";
    std::cout << horas << " horas y ";
    std::cout << totalMin << " minutos ";

    return 0;
}
// Initialization
// Create a program that declares a variable of type

// int without initializing it.
// double with initial value -9.87e-8.
// std::string initialized with your first name .
// std::vector<double> with 10 values not initialized.

#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int a;
    std::cout << a << std::endl;

    double b = -9.87e-8;
    std::cout << b << std::endl;

    std::string Nombre = "Andres";
    std::cout << Nombre << std::endl;

    std::vector<double> v(10);
    return 0;
}
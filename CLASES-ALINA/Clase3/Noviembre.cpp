#include <iostream>
using namespace std;

int main()
{
    int dia_usuario;
    cout << "Ingrese el dia del mes: ";
    cin >> dia_usuario;

    int dia_semana = 3;

    for (int i = 1; i < dia_usuario; i++)
    {
        dia_semana = dia_semana + 1;

        if (dia_semana == 8)
        {
            dia_semana = 1;
        }
    }

    if (dia_semana == 1)
        cout << dia_usuario << " Fue Lunes";
    else if (dia_semana == 2)
        cout << dia_usuario << " Fue Martes";
    else if (dia_semana == 3)
        cout << dia_usuario << " Fue Miercoles";
    else if (dia_semana == 4)
        cout << dia_usuario << " Fue Jueves";
    else if (dia_semana == 5)
        cout << dia_usuario << " Fue Viernes";
    else if (dia_semana == 6)
        cout << dia_usuario << " Fue Sabado";
    else if (dia_semana == 7)
        cout << dia_usuario << " Fue Domingo";

    return 0;
}
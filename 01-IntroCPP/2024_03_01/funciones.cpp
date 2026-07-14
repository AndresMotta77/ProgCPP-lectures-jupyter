#include "encabezado.h"

bool primo(int p)
{
    bool flag = true;
    for (int i = 2; i * i <= p; i++)
    {
        if (p % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
#include "encabezado.h"

// using fptr = double(double);

double forward_diff(double x, double h, double (*ptrf)(double))
{
    return (ptrf(x + h) - ptrf(x)) / h;
}

double central_diff(double x, double h, double (*ptrf)(double))
{
    return (ptrf(x + h) - ptrf(x - h)) / (2 * h);
}
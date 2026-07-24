#include <iostream>

using namespace std;

// Prototipo de la función
void interc1(int &i, int &j);

int main()
{
    int m = 2;
    int n = 5;

    cout << "MAIN1: m = " << m << ", n = " << n << endl;

    interc1(m, n);

    cout << "MAIN2: m = " << m << ", n = " << n << endl;

    return 0;
}

// Función que intercambia los valores usando referencias
void interc1(int &i, int &j)
{
    cout << "FUNC1: i = " << i << ", j = " << j << endl;

    int t = i;
    i = j;
    j = t;

    cout << "FUNC2: i = " << i << ", j = " << j << endl;
}
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Multiplica dos polinomios
vector<double> multiplicar(vector<double> A, vector<double> B)
{

    vector<double> C(A.size() + B.size() - 1, 0);

    for (int i = 0; i < A.size(); i++)
    {

        for (int j = 0; j < B.size(); j++)
        {

            C[i + j] += A[i] * B[j];
        }
    }

    return C;
}

// Suma dos polinomios
void sumar(vector<double> &P, vector<double> Q)
{

    if (P.size() < Q.size())
        P.resize(Q.size(), 0);

    for (int i = 0; i < Q.size(); i++)
        P[i] += Q[i];
}

int main()
{

    int n;

    cout << "Numero de puntos: ";
    cin >> n;

    vector<double> x(n), y(n);

    cout << "Ingrese los valores x:\n";

    for (int i = 0; i < n; i++)
        cin >> x[i];

    cout << "Ingrese los valores y:\n";

    for (int i = 0; i < n; i++)
        cin >> y[i];

    vector<double> P(1, 0);

    // Construccion de Lagrange

    for (int i = 0; i < n; i++)
    {

        vector<double> L(1, 1);

        double denominador = 1;

        for (int j = 0; j < n; j++)
        {

            if (i != j)
            {

                // (X-xj)

                vector<double> factor = {-x[j], 1};

                L = multiplicar(L, factor);

                denominador *= x[i] - x[j];
            }
        }

        // Multiplicar Li por yi/denominador

        for (int k = 0; k < L.size(); k++)
            L[k] = L[k] * y[i] / denominador;

        sumar(P, L);
    }

    cout << "\nPolinomio interpolante:\n";

    cout << fixed << setprecision(8);

    for (int i = P.size() - 1; i >= 0; i--)
    {

        cout << P[i];

        if (i > 0)
            cout << " x^" << i << " + ";
    }

    cout << endl;

    return 0;
}
#include <iostream>
#include <string>

bool primo(int p);

int main(int argc, char **argv)
{
    int nmin{0}, nmax{0};

    nmin = std::stoi(argv[1]);
    nmax = std::stoi(argv[2]);

        for (int i = nmin; i <= nmax; i++)
    {
        if (primo(i) == true)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}

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
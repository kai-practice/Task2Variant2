#include <iostream>
#include <numeric>

#include "../../format.h"
#include "../Modules.h"

//алгоритм Євкліда
void gcd(int a, int b)
{
    //a≥b≥0
    if (a >= b && b >= 0)
    {
        std::cout << "результат:\n";
        std::cout << std::gcd(a, b) << '\n';
    }
    else
    {
        std::cout << "невірне значення";
    }
}


static void module_init()
{
    setupEnv();
    
    int a, b;
    std::cout << "Введіть A та B\n";
    std::cin >> a >> b;
    gcd(a,b);
}

static Module module(
    module_init,
    "(27). Знайдіть найбільший спільний дільник одночасно не рівних нулю цілих чисел a та b\nтаких що a≥b≥0 (використайте алгоритм Євкліда)."
);

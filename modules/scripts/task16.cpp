#include <iostream>

#include "../../format.h"
#include "../Modules.h"


static void module_init()
{
	setupEnv();

	std::cout << "Введіть n\nn:";
	int n;
	std::cin >> n;
	if (n < 0) {
		std::cout << "Від'ємний факторіал неможливий\n";
		return;
	}
	unsigned long long f = 1;
	for (int i = 2; i <= n; i++) f *= i;
	std::cout << f << '\n';
}

static Module module(
	module_init,
	"(16) Обрахуйте факторіал числа, що вводиться з клавіатури, коректно передбачивши введення відємних чисел."
);

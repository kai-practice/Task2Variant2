#include <iostream>

#include "../../format.h"
#include "../Modules.h"



bool viet(int a, int b, int c, int &x1, int &x2) {
	for (int i = -100; i <= 100; i++) {
		for (int j = -100; j <= 100; j++) {
			if (i + j == -b / a && i * j == c / a) {
				x1 = i;
				x2 = j;
				return true;
			}
		}
	}
	return false;
}

static void module_init()
{
	setupEnv();
	int a, b, c;
	std::cout << "Введіть коефіцієнти a, b, c: ";
	std::cin >> a >> b >> c;

	if (a == 0) {
		std::cout << "Це не квадратне рівняння." << std::endl;
		return;
	}

	int root1, root2;
	if (viet(a, b, c, root1, root2)) {
		std::cout << "Корені рівняння: x1 = " << root1 << ", x2 = " << root2 << std::endl;
	} else {
		std::cout << "Цілі корені за теоремою Вієта не знайдено." << std::endl;
	}

}

static Module module(
	module_init,
	"(9) Напишіть програму, що знаходить корені звичайного квадратного рівняння за теоремою Вієта."
);

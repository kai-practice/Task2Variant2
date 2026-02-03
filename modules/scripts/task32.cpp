#include <iostream>

#include "../../format.h"
#include "../Modules.h"


static void module_init()
{
	setupEnv();
	std::cout << "Введіть n\nn:";
	int n;
	std::cin >> n;

	int first = (n / 10) % 10;
	int middle = n % 10;
	int last = n / 100;

	int x = 100 * first + 10 * middle + last;

	if (n <= 10 || n >= 999 || first == 0) {
		std::cout << "Некоректне число n\n";
		return;
	}
		else {
		std::cout << "результат:\n";
		std::cout << x << '\n';
	}
}

static Module module(
	module_init,
	"(32) Від тризначного числа x відняли його останню цифру. \nПісля ділення результату на 10 до частки ліворуч дописали останню цифру числа х та отримали число n. \nЗа заданим числом n знайти вихідне число x. Вважати,що 10<n<999, а число десятків у n не дорівнює нулю."
);

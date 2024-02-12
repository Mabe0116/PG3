#include <stdio.h>
#include <iostream>
#include "Comparer.h"

int main() {

	Comparer<int, int> comparer1(1, 2);
	std::cout << comparer1.Min() << std::endl;

	Comparer<int, float> comparer2(3, 4.0f);
	std::cout << comparer2.Min() << std::endl;

	Comparer<int, double> comparer3(5, 6.0f);
	std::cout << comparer3.Min() << std::endl;

	Comparer<float, float> comparer4(7.0f, 8.0f);
	std::cout << comparer4.Min() << std::endl;

	Comparer<float, double> comparer5(9.0f, 10.0f);
	std::cout << comparer5.Min() << std::endl;

	Comparer<double, double> comparer6(11.0f, 12.0f);
	std::cout << comparer6.Min() << std::endl;

	return 0;
}
#include <string>
#include <iostream>

int main()
{

	double a, b, c, a1, b1;

	std::cout << "Enter length of figure" << '\n';
	std::cin >> c;

	std::cout << "Enter height of figure" << '\n';
	std::cin >> b;

	std::cout << "Enter weight of figure" << '\n';
	std::cin >> a;

	std::cout << "Enter width of whole" << '\n';
	std::cin >> a1;

	std::cout << "Enter height of whole" << '\n';
	std::cin >> b1;

	if (c <= b1 and a <= a1 or b <= a1) {
		std::cout << "Normal" << '\n';
	}

	else if (c <= a1 and a <= b1 or b <= b1) {
		std::cout << "Normal" << '\n';
	}

	else if (a <= b1 and a <= a1 or b <= a1) {
		std::cout << "Normal" << '\n';
	}

	else if (a <= a1 and a <= b1 or b <= b1) {
		std::cout << "Normal" << '\n';
	}

	else if (b <= b1 and a <= a1 or b <= a1) {
		std::cout << "Normal" << '\n';
	}

	else if (b <= a1 and a <= b1 or b <= b1) {
		std::cout << "Normal" << '\n';
	}

	else {
		std::cout << "ERROR";
	}

}

#include <string>
#include <iostream>

int main()
{

	std::string n;

	std::cout << "Enter n:" << '\n';
	std::cin >> n;

	int k;

	std::cout << "Enter k:" << '\n';
	std::cin >> k;

	if (k <= size(n)) {

		for (int i = 0; i < k; i++) {
			std::cout << n[i];
		}

	}
	else {
		std::cout << "ERROR";
	}
   
}

#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, y, x, z;
	std::cout << "Введите высоту и ширину длины ";
	std::cout << "Высота равна: ";
	std::cin >> a;
	std::cout << "Ширина равна:  ";
	std::cin >> b;
	std::cout << "Введите ширину, длину и высоту параллелепипеда : ";
	std::cout << "Ширина равна: ";
	std::cin >> y;
	std::cout << " Высота равна:";
	std::cin >> x;
	std::cout << "Длина равна:";
	std::cin >> z;
	if (x < b && y < a && z < b && z < a)
	{
		std::cout << "Это возможно ";
	}
	else
		std::cout << "Жто невозможно ";
	system("pause");
	return 0;

}
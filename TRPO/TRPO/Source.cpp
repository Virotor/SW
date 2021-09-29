#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int num;
	cout << "Введите число\n"; cin >> num;
	while (num)
	{
		cout << num % 10 << endl;
		num /= 10;
	}
	



int day;
	cout << "Введите номер дня недели\n"; cin >> day;
	switch (day)
	{
	case(1):
		cout << "Понедельник\n";
		break;
	case(2):
		cout << "Вторник\n";
		break;
	case(3):
		cout << "Среда\n";
		break;
	case(4):
		cout << "Четверг\n";
		break;
	case(5):
		cout << "Пятница\n";
		break;
	case(6):
		cout << "Суббота\n";
		break;
	case(7):
		cout << "Воскресенье\n";
		break;
	default:
		cout << "Такого дня недели нет" << endl;
	}
	


	int n, k,y,c,g;
	c = 0;
	cout << "Введите число\n"; cin >> n;
	g = n;
	cout << "Сколько первых цифр этого числа вы хотите увидеть?:"; cin >> k;
	for (c; g > 0; c++) {
		g /= 10;
	}
	if (k > c) cout << n;
	else {
		y = n / pow(10, c - k);
		cout << y;
	}
	return 0;



}
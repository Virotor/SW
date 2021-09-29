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
	


	int n, k,y,f,g;
	f = 0;
	cout << "Введите число\n"; cin >> n;
	g = n;
	cout << "Сколько первых цифр этого числа вы хотите увидеть?:" ; cin >> k;
	for (f; g > 0; f++) {
		g /= 10;
	}
	if (k > f) cout << n ;
	else {
		y = n / pow(10, f - k);
		cout << y << endl;
	}
	

	double l, r, h, w;
	int p;
	cout << "Введите радиус отверстия: "; cin >> r;
	cout << "Введите длину, ширину и высоту параллелепипеда: "; cin >> l >> w >> h;
	if (pow(l * l + w * w, 0.5) <= r * 2)
		p = 1;
	else p = 2;
	if (pow(l * l + h * h, 0.5) <= r * 2)
		p = 3;
	else p = 4;
	if (pow(w * w + h * h, 0.5) <= r * 2)
		p = 5;
	else p = 6;
	int R = p % 2;
	switch (R) {
	case 1: cout << "Войдет\n";
		break;
	case 0: cout << "Не войдет\n";
		break;
	}
	system("pause");


	int a, b, c, d, A, B, C, D;
	a = rand() % 9 + 1;
	b = rand() % 9 + 1;
	c = rand() % 9 + 1;
	d = rand() % 9 + 1;
	cout << "Введите пароль:"; cin >> A >> B >> C >> D;
	if (A != a || B != b || C != c || D != d)
	{
		if (A == a) cout << "Первая цифра подобрана" << endl;
		if (B == b) cout << "Вторая цифра подобрана" << endl;
		if (C == c) cout << "Третья цифра подобрана" << endl;
		if (D == d) cout << "Четвертая цифра подобрана" << endl;
	}
	else if (A == a || B == b || C == c || D == d)
	{
		cout << "Успешно. Пароль:" << a << " " << b << "" << c << "" << d << endl;
	}
	return 0;
}
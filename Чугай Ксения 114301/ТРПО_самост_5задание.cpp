#include<iostream>
#include<cmath>
#include <random>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, d, a1 = 0, b1 = 0, c1 = 0, d1 = 0;
	srand((int)time(0));
	a = rand() % 10 + 0;
	b = rand() % 10 + 0;
	c = rand() % 10 + 0; 
	d = rand() % 10 + 0;
	cout << "Пароль: " << a;
	cout << b;
	cout << c;
	cout << d << endl;
	while (a1 != a) {
		a1++;
	}
	while (b1 != b) {
		b1++;
	}
	while (c1 != c) {
		c1++;
	}
	while (d1 != d) {
		d1++;
	}
	cout << "Сгенерированный пароль: " << a1;
	cout << b1;
	cout << c1;
	cout << d1;
	return 0;
}
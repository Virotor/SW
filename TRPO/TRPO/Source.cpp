#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	using namespace std;
	int num;
	cout << "Input number\n"; cin >> num;
	while (num)
	{
		cout << num % 10 << endl;
		num /= 10;
	}
	



int day;
	cout << "Input day number\n"; cin >> day;
	switch (day)
	{
	case(1):
		cout << "Monday\n";
		break;
	case(2):
		cout << "Tuesday\n";
		break;
	case(3):
		cout << "Wednesday\n";
		break;
	case(4):
		cout << "Thursday\n";
		break;
	case(5):
		cout << "Friday\n";
		break;
	case(6):
		cout << "Saturday\n";
		break;
	case(7):
		cout << "Sunday\n";
		break;
	default:
		cout << "Can't find this day..." << endl;
	}
	


	int n, k,y,f,g;
	f = 0;
	cout << "Input number\n"; cin >> n;
	g = n;
	cout << "How many first numbers of inputed number do you want to see?:" ; cin >> k;
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
	cout << "Set circle radius: "; cin >> r;
	cout << "Input length, width and height of parallelepiped : "; cin >> l >> w >> h;
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
	case 1: cout << "Parallelepiped will pass\n";
		break;
	case 0: cout << "Parallelepiped won't pass \n";
		break;
	}
	system("pause");


	int a, b, c, d, A, B, C, D;
	a = rand() % 9 + 1;
	b = rand() % 9 + 1;
	c = rand() % 9 + 1;
	d = rand() % 9 + 1;
	cout << "Input password:"; cin >> A >> B >> C >> D;
	if (A != a || B != b || C != c || D != d)
	{
		if (A == a) cout << "First nubmer picked up" << endl;
		if (B == b) cout << "Second nubmer picked up" << endl;
		if (C == c) cout << "Third nubmer picked up" << endl;
		if (D == d) cout << "Forth nubmer picked up" << endl;
	}
	else if (A == a || B == b || C == c || D == d)
	{
		cout << "Successful. Password:" << a << " " << b << "" << c << "" << d << endl;
	}
	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int num;
	cout << "������� �����\n"; cin >> num;
	while (num)
	{
		cout << num % 10 << endl;
		num /= 10;
	}
	



int day;
	cout << "������� ����� ��� ������\n"; cin >> day;
	switch (day)
	{
	case(1):
		cout << "�����������\n";
		break;
	case(2):
		cout << "�������\n";
		break;
	case(3):
		cout << "�����\n";
		break;
	case(4):
		cout << "�������\n";
		break;
	case(5):
		cout << "�������\n";
		break;
	case(6):
		cout << "�������\n";
		break;
	case(7):
		cout << "�����������\n";
		break;
	default:
		cout << "������ ��� ������ ���" << endl;
	}
	


	int n, k,y,f,g;
	f = 0;
	cout << "������� �����\n"; cin >> n;
	g = n;
	cout << "������� ������ ���� ����� ����� �� ������ �������?:" ; cin >> k;
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
	cout << "������� ������ ���������: "; cin >> r;
	cout << "������� �����, ������ � ������ ���������������: "; cin >> l >> w >> h;
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
	case 1: cout << "������\n";
		break;
	case 0: cout << "�� ������\n";
		break;
	}
	system("pause");


	int a, b, c, d, A, B, C, D;
	a = rand() % 9 + 1;
	b = rand() % 9 + 1;
	c = rand() % 9 + 1;
	d = rand() % 9 + 1;
	cout << "������� ������:"; cin >> A >> B >> C >> D;
	if (A != a || B != b || C != c || D != d)
	{
		if (A == a) cout << "������ ����� ���������" << endl;
		if (B == b) cout << "������ ����� ���������" << endl;
		if (C == c) cout << "������ ����� ���������" << endl;
		if (D == d) cout << "��������� ����� ���������" << endl;
	}
	else if (A == a || B == b || C == c || D == d)
	{
		cout << "�������. ������:" << a << " " << b << "" << c << "" << d << endl;
	}
	return 0;
}
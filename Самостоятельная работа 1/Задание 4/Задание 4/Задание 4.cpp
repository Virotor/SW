
#include <iostream>
using namespace std;
int main()
{
	//4 задание
	setlocale(LC_ALL, "rus");
	double dl, sh, v, r;
	int j;

	cout << "Введите длину параллелепипеда" << endl;
	cin >> dl;
	cout << "Введите ширину параллелепипеда " << endl;
	cin >> sh;
	cout << "Введите высоту параллелепипеда" << endl;
	cin >> v;
	cout << "Первый случай. Отверстие КРУГЛОЕ" << endl << endl << endl << endl << endl;
	cout << "Введите радиус отверстия " << endl;
	cin >> r;
	if ((pow(dl * dl + v * v, 0.5)) <= r * 2)
		j = 1;
	else if ((pow(dl * dl + sh * sh, 0.5)) <= r * 2)
		j = 1;
	else if ((pow(v * v + sh * sh, 0.5)) <= r * 2)
		j = 1;
	else
		j = 2;
	switch (j) {
	case 0:
		cout << "параллелепипед не войдет в отверстие" << endl;
		break;
	case 1:
		cout << "параллелепипед войдет в отверстие" << endl;
		break;
	}
	cout << "Второй случай. Отверстие ПРЯМОУГОЛЬНОЕ(КВАДРАТНОЕ)" << endl << endl << endl << endl << endl;
	double a, b;
	cout << "Введите длину отверстия" << endl;
	cin >> a;
	cout << "Введите ширину отверстия" << endl;
	cin >> b;

	if (a > 0 && b > 0 && sh > 0 && dl > 0 && v > 0) {
		if (dl <= b and sh <= a or v <= a)cout << "параллелепипед войдет в отверстие" << endl;
		else if (dl <= a and sh <= b or v <= b)cout << "параллелепипед войдет в отверстие" << endl;
		else if (sh <= b and sh <= a or v <= a)cout << "параллелепипед войдет в отверстие" << endl;
		else if (sh <= a and sh <= b or v <= b)cout << "параллелепипед войдет в отверстие" << endl;
		else if (v <= b and sh <= a or v <= a)cout << "параллелепипед войдет в отверстие" << endl;
		else if (v <= a and sh <= b or v <= b)cout << "параллелепипед войдет в отверстие" << endl;
		else cout << "параллелепипед не войдет в отверстие" << endl;
	}
	else cout << "Ошибка";
	system("pause");
	return 0;
}

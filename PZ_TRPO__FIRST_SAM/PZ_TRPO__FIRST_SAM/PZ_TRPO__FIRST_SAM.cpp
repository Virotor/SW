#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");


	int chislo;
	cout << "Задание 1." << endl;
	cout << "Введите число: "; cin >> chislo;
	while (chislo) {
		cout << chislo % 10 << endl;
		chislo /= 10;
	}
	cout << endl;

	cout << "Задание 2." << endl;
	int dn;
	cout << "Введите номер дня недели: "; cin >> dn;

	switch (dn) {
	case 1:
		cout << "Понедельник.";
		break;
	case 2:
		cout << "Вторник.";
		break;
	case 3:
		cout << "Среда.";
		break;
	case 4:
		cout << "Четверг.";
		break;
	case 5:
		cout << "Пятница.";
		break;
	case 6:
		cout << "Суббота.";
		break;
	case 7:
		cout << "Воскресенье.";
		break;
	default:
		cout << "В дне недели 7 дней, попробуйте снова.";
		break;
	}
	cout << endl;


	cout << "Задание 3." << endl;
	int n, k, razr = 0;
	cout << "Введите число: "; cin >> n;
	cout << "Введите сколько первых разрядов вывести: "; cin >> k;
	int n2 = n;
	while (n2) {
		n2 /= 10;
		razr++;
	}

	for (int i = 0; i < (razr - k); i++)
	{
		n /= 10;
	}
	if (k >= razr) cout << "Количество первых разрядов больше или совпадает  с кол-вом разрядов которые отбрасываются." << endl;
	else cout << "Первые " << k << " цифры числа: " << n << endl;





	cout << endl;
	cout << "Задание 4." << endl;
	int shiro, dlo, uglo, dlbr, shirbr, visbr;
	cout << "Введите ширину отверстия: "; cin >> shiro;
	cout << "Введите длину отверстия: "; cin >> dlo;
	cout << "Введите углубление отверстия: "; cin >> uglo;
	cout << "Введите длину бруска: "; cin >> dlbr;
	cout << "Введите ширину бруска: "; cin >> shirbr;
	cout << "Введите высоту бруска: "; cin >> visbr;
	if (shirbr > shiro || dlbr > dlo) cout << "Брусок не пролезет в отверстие." << endl;
	else if (visbr > uglo) cout << "Брусок будет торчать." << endl;
	else cout << "Брусок пролезет но останется углубление." << endl;
	if (shirbr < shiro && dlbr < dlo && visbr < uglo) cout << "Брусок пролезет в отверстие." << endl;

	cout << endl;
	cout << "Задание 5." << endl;


	int Arr[4];
	for (int i = 0; i < 4; i++)
	{
		Arr[i] = rand() % 9;

	}
	cout << "Пароль сгенерирован..." << endl;



	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				for (int d = 0; d < 10; d++) {
					if (Arr[0] == a && Arr[1] == b && Arr[2] == c && Arr[3] == d) {
						cout << "Пароль наден: " << a << b << c << d;
						break;
					}
				}
			}
		}
	}
	cout << endl;
	return 0;

}
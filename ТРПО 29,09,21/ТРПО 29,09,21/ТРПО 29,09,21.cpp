#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	setlocale(LC_ALL, "ru");
	int x, y = 1;
	cout << "Введите положительное число "; cin >> x;
	for (y; x != 0; y++) {
		cout << x % 10 << endl;
		x /= 10;
	}
	int a;
	cout << "Введите номер дня недели "; cin >> a;
	switch (a) {
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	case 7:
		cout << "Воскресенье" << endl;
		break;
	}

	return 0;
}
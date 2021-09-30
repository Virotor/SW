#include <iostream>
using namespace std;
#include <clocale>
int main()
{
	setlocale(LC_ALL, "russian");
	int n;
	cout << "Введите день недели" << endl;
	cin >> n;
	switch (n) {
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
	default:
		cout << "Такого дня нету";
	}

	return 0;
}

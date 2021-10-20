#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите номер дня недели" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << " Это понедельник" << endl;
		break;
	case 2:
		cout << " Это вторник" << endl;
		break;
	case 3:
		cout << " Это среда" << endl;
		break;
	case 4:
		cout << " Это четверг" << endl;
		break;
	case 5:
		cout << " Это пятница" << endl;
		break;
	case 6:
		cout << " Это cуббота" << endl;
		break;
	case 7:
		cout << " Это воскресенье" << endl;
		break;
	}
	system("pause");
	return 0;
}
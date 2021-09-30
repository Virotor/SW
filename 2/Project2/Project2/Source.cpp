#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите № дня недели:" << endl;
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: cout << "Понедельник" << endl; break;
	case 2: cout << "Вторник" << endl; break;
	case 3: cout << "Среда" << endl; break;
	case 4: cout << "Четверг" << endl; break;
	case 5: cout << "Пятница" << endl; break;
	case 6: cout << "Субббота" << endl; break;
	case 7: cout << "Воскресенье" << endl; break;
	default: cout << "Ошибка! Попробуйте ещё раз." << endl;
	}
	return 0;
}
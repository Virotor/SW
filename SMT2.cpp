#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    int n;
	cin >> n;
	switch (n)
	{
	default:cout << "НОМЕР НУЖНО ВВОДИТЬ ОТ 1 до 7, а не вот это вот"; break;
	case 1:cout << "Понедельник"; break;
	case 2:cout << "Вторник"; break;
	case 3:cout << "Среда"; break;
	case 4:cout << "Четверг"; break;
	case 5:cout << "Пятница"; break;
	case 6:cout << "Суббота"; break;
	case 7:cout << "Воскресенье"; break;
	}
    return 0;
}




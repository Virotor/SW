#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double visota, dlina, shirina, visotaOtv, dlinaOtv, shirinaOtv;
	cout << "Введите высоту, длину и ширину параллелепипеда: ";
	cin >> visota >> dlina >> shirina;
	cout << "Введите высоту, длину и ширину отверстия : ";
	cin >> visotaOtv >> dlinaOtv >> shirinaOtv;
	double paral[3] = { visota, dlina, shirina };
	double otv[3] = { visotaOtv, dlinaOtv, shirinaOtv };
	sort(paral, paral + 3);
	sort(otv, otv + 3);
	if (paral[0] <= otv[0] and paral[1] <= otv[1] and paral[2] <= otv[2])
		cout << "Влезет" << endl;
	else
		cout << "Не влезет" << endl;
	system("pause");
	return 0;
}
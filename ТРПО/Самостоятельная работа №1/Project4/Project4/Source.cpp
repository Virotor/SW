#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int shirotaOtv, dlinaOtv, visotaParal, dlinaParal, shirinaParal, glubinaOtv;
	setlocale(LC_ALL, "RUS");
	cout << "Введите длину отверстия : ";
	cin >> dlinaOtv;
	cout << "Введите ширину отверстия : ";
	cin >> shirotaOtv;
	cout << "Введите глубину отверстия : ";
	cin >> glubinaOtv;
	cout << "Введите длину параллелепипеда : ";
	cin >> dlinaParal;
	cout << "Введите ширину параллелепипеда : ";
	cin >> shirinaParal;
	cout << "Введите высоту параллелепипеда : ";
	cin >> visotaParal;
	if (((glubinaOtv>=shirinaParal) and (dlinaOtv>=dlinaParal) and (shirotaOtv>=visotaParal)) || ((glubinaOtv>=shirinaParal) and (dlinaOtv>=visotaParal) and (shirotaOtv>=dlinaParal)))
	{
		cout << "Пройдет\n";
	}
	else
	{
		cout << "Не пройдет\n";
	}
return 0;
}

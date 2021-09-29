#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double dlinna, shirina, visota, dlinna_hole, shirina_hole, visota_hole;
	cout << "Введите измерения параллелепипеда" << endl;
	cout << "Длинна: ";
	cin >> dlinna;
	cout << "Ширина: ";
	cin >> shirina;
	cout << "Высота: ";
	cin >> visota;
	cout << "Введите измерения отверстия" << endl;
	cout << "Длинна: ";
	cin >> dlinna_hole;
	cout << "Ширина: ";
	cin >> shirina_hole;
	cout << "Высота: ";
	cin >> visota_hole;
	double paral[3] = { dlinna,shirina,visota };
	double hole[3]{ dlinna_hole, shirina_hole, visota_hole };
	sort(paral, paral + 3);
	sort(hole, hole + 3);
	if (paral[0] <= hole[0] and paral[1] <= hole[1] and paral[2] <= hole[2])
		cout << "Поместиться";
	else  cout << "Не поместиться";
	return 0;
}
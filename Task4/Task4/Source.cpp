#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "*************Задание 4*******************" << endl;
	do {
		int weight1, long1, hight1, weight2, long2;
		cout << "Введите длину, ширину и высоту параллелепипида" << endl;
		cin >> long1 >> weight1 >> hight1;
		cout << "Введите длину и ширину отверстия " << endl;
		cin >> long2 >> weight2;
		int min1, medium1, min2, max2;//нахожу самую малеьнкую и среднюю стороны параллелепида, а также самую маленькую и самую большую сторону прямоугольника
		if (long1 <= weight1 && long1 <= hight1) {
			min1 = long1;
			if (weight1 <= hight1)
			{
				medium1 = weight1;
			}
			else {
				medium1 = hight1;
			}
		}
		else if (weight1 <= long1 && weight1 <= hight1) {
			min1 = weight1;
			if (long1 <= hight1)
			{
				medium1 = long1;
			}
			else {
				medium1 = hight1;
			}
		}
		else {
			min1 = hight1;
			if (long1 <= weight1)
			{
				medium1 = long1;
			}
			else {
				medium1 = weight1;
			}
		}///
		if (long2 <= weight2) {
			min2 = long2;
			max2 = weight2;
		}
		else {
			max2 = long2;
			min2 = weight2;
		}
		if (min1 <= min2 && medium1 <= max2)

			cout << "Пройдет" << endl;
		else
			cout << "Не пройдет" << endl;


		cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
		_getch();
		system("cls");
	} while (_getch() == '1');
	
}
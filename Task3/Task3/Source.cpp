#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
cout << "*************Задание 3*******************" << endl;
do {

	long long int k, i, j, stepen, n, NikitaDuko;


	cout << "Введите k и n" << endl;

	cin >> k >> n;


	for (i = 0;; ++i)
	{
		NikitaDuko = n / pow(10, i);//NikitaDuko-вспомогательная переменная
		if (NikitaDuko == 0) {

			break;
		}


	}
	stepen = i - k;

	int conch;//conch - конечное число
	if (stepen < 0)
		cout << "Цифр в числе меньше, чем значение k" << endl;
	else {
		conch = n / pow(10, stepen);
		cout << conch << endl;
	}
	cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
	_getch();
	system("cls");
} while (_getch() == '1');
}
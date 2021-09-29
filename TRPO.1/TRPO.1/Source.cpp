#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	do {

		cout << "*************Задание 1*******************" << endl;
		int i;
		string string1;

		cout << "Введите число" << endl;
		getline(cin, string1);
		int length;
		length = string1.length();
		for (i = 0; i < length; i++)
		{
			cout << string1[i] << endl;
		}
		cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
		_getch();
		system("cls");
	} while (_getch() == '1');
}
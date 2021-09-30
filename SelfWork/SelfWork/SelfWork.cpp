#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void Task1()
{
	int num;
	string digit;

	cout << "Задание 1: Введите число: ";
	cin >> num;
	while (num > 0)
	{
		digit += to_string(num % 10);
		num /= 10;
	}
	for (int i = digit.length() - 1; i >= 0; i--)
	{
		cout << digit[i] << endl;
	}
	digit.clear();
}
void Task2()
{
	cout << "Задание 2:" << endl;

	string day[] = {
		"Понедельник",
		"Вторник",
		"Среда",
		"Четверг",
		"Пятница",
		"Суббота",
		"Воскресенье"
	};
	int num;
	cout << "Введите номер дня: ";
	cin >> num;
	num = (num - 1);
	
	if (num < 1 || num > 7)
	{
		cout << "Нет такого дня недели";
		return;
	}
	cout << day[num];
}
void Task3()
{
	cout << "Задание3" << endl;
	int N, K;
	cout << "Введите число n: "; cin >> N;
	cout << "Введите число k: "; cin >> K;
	string temp;
	temp = to_string(N);
	for (int i = 0; i < K; i++)
	{
		cout << temp[i];

	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	Task3();
}

#include <iostream>
#include <locale>
#include <string>
using namespace std;

int task1();
int task2();
int task3();

int main()
{
	setlocale(LC_ALL,"rus");
	task1();
	task2();
	task3();
	return 0;
}

int task1()
{
	cout << "\tЗадание 1\n";
	cout << "Введите целое число: ";
	int number;
	cin >> number;
	string digit;
	while (number > 0)
	{
		digit += to_string(number % 10);
		number /= 10;
	}
	for (int i = digit.length(); i >= 0; i--)
		cout << digit[i] << endl;
	return 0;
}
int task2()
{
	cout << "\n\tЗадание 2\n";
	int day;
	do{
		cout << "Введите номер дня недели: ";
		cin >> day;
		switch (day)
		{
		case 1: cout << "Понедельник" << endl; break;
		case 2: cout << "Вторник" << endl; break;
		case 3: cout << "Среда" << endl; break;
		case 4: cout << "Четверг" << endl; break;
		case 5: cout << "Пятница" << endl; break;
		case 6: cout << "Суббота" << endl; break;
		case 7: cout << "Воскресенье" << endl; break;
		default: cout << "Такого дня нет!!!" << endl; break;
		}
	} while (day > 7 || day < 1);
	return 0;
}
int task3()
{
	cout << "\n\tЗадание3\n";
	int numberN, numberK;
	cout << "Введите число n: "; cin >> numberN;
	cout << "Введите число k: "; cin >> numberK;
	string temp;
	temp = to_string(numberN);
	for (int i = 0; i < numberK; i++)
	{
		cout << temp[i];
	}
	return 0;
}

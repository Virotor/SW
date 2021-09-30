#include <iostream>
#include <locale>
#include <string>
using namespace std;

int task1();
int task2();
int task3();
int task4();
int task5();

int main()
{
	setlocale(LC_ALL,"rus");
	task1();
	task2();
	task3();
	task4();
	task5();
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
	cout << "\tЗадание 2\n";
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
	cout << "\tЗадание3\n";
	int numberN, numberK, temp, kol=0;
	cout << "Введите число n: "; cin >> numberN;
	cout << "Введите число k: "; cin >> numberK;
	temp = numberN;
	while (numberN)
	{
		numberN /= 10;
		kol++;
	}
	for (int i = 0; i < kol - numberK; i++)
		temp /= 10;
	cout << temp;
	return 0;
}
int task4()
{
	cout << "\n\tЗадание 4\n";
	int holeHeight, holeWidth;
	cout << "Введите размеры отверстия (высота, ширина): "; cin >> holeHeight >> holeWidth;
	int paralLength, paralHeight, paralWidth;
	cout << "Введите габариты параллелепипеда (длина, высота, ширина):"; cin >> paralLength >> paralHeight >> paralWidth;
	if ((paralLength < holeWidth && paralWidth < holeHeight) || (paralWidth < holeWidth && paralLength < holeHeight) || (paralHeight < holeHeight && paralLength < holeWidth) || (paralHeight < holeHeight && paralWidth < holeWidth) || (paralHeight < holeWidth && paralWidth < holeHeight) || (paralHeight < holeWidth && paralLength < holeHeight))
		cout << "Параллелепипед поместиться в отверстие";
	else
		cout << "Параллелепипед не поместиться в отверстие";

	return 0;
}

int task5()
{
	cout << "\n\tЗадание 5\n";
	srand(time(0));
	char pass[5]{ rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48 };
	for (char num1 = '0'; num1 <= '9'; ++num1)
		for (char num2 = '0'; num2 <= '9'; ++num2)
			for (char num3 = '0'; num3 <= '9'; ++num3)
				for (char num4 = '0'; num4 <= '9'; ++num4)
					if (pass[0] == num1 && pass[1] == num2 && pass[2] == num3 && pass[3] == num4)
						cout << "Угаданный пароль: " << num1 << num2 << num3 << num4;
	return 0;
}
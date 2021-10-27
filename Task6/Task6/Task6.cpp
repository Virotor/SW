#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;

void PositionOfFirstEqualNumber();
//MagicNumbers - числа, которые меньше разности двух предыдущих в массиве. Как их ещё лаконично назвать?
void TaskWithMagicNumbers();

int* CreateArray(int);
void SetArray(int, int*);
void PrintArray(int, int*);
void SearchEqualElement(int, int, int*);
string SearchMagicNumbers(int, int*);

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int taskNumber;
	cout << "Введите номер задания" << endl;
	cin >> taskNumber;

	switch (taskNumber)
	{
	case 1:
		PositionOfFirstEqualNumber();
		break;
	case 2:
		TaskWithMagicNumbers();
		break;
	case 3:

		break;
	case 4:

		break;
	default:
		break;
	}
}

void PositionOfFirstEqualNumber()
{
	int size;

	cout << "Введите размер массива ";
	cin >> size;
	size = abs(size);

	int* array = CreateArray(size);
	SetArray(size, array);
	PrintArray(size, array);

	int element;
	cout << "Введите искомый элемент ";
	cin >> element;

	SearchEqualElement(element, size, array);

	delete[]array;
}

void TaskWithMagicNumbers()
{
	int size;

	do
	{
		cout << "Введите размер массива (не меньше трёх элементов) ";
		cin >> size;
		size = abs(size);
	} while (size < 3);

	int* array = CreateArray(size);
	SetArray(size, array);
	PrintArray(size, array);

	cout << SearchMagicNumbers(size, array);

	delete[]array;
}

int* CreateArray(int size)
{
	int* array = new int[size];

	return array;
}

void PrintArray(int size, int* array)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void SetArray(int size, int* array)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 21 - 10;
	}
}

void SearchEqualElement(int element, int size, int* array)
{
	bool isEqual = false;
	int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == element)
		{
			isEqual = true;
			break;
		}
	}

	if (isEqual)
	{
		cout << "Позиция элемента: " << i;
	}
	else
	{
		cout << "В данном массиве нет такого элемента";
	}
}

string SearchMagicNumbers(int size, int* array)
{
	string magicNumbers;
	int numberToCheck, numberToCompare;
	bool hasNumbers = false;

	for (int i = 2; i < size; i++)
	{
		numberToCompare = array[i - 1] - array[i - 2];
		numberToCheck = array[i];
		if (numberToCheck < numberToCompare)
		{
			magicNumbers += to_string(numberToCheck);
			magicNumbers += " ";
			hasNumbers = true;
		}
	}

	return hasNumbers ? magicNumbers : "В массиве нет таких чисел";
}
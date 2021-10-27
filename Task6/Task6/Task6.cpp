#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;

void PositionOfFirstEqualNumber();

int* CreateArray(int);
void SetArray(int, int*);
void PrintArray(int, int*);
void SearchEqualElement(int, int, int*);

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
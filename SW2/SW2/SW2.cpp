﻿#include<iostream>
#include <time.h>
#include <iomanip>
int* CreateNewArray(int);
void FillInArray(int, int*);
void CoutArray(int, int*);
void DeleteArray(int*);
int** CreateMatrix(int, int);
void FillInMatrix(int, int, int**);
void CoutMatrix(int, int, int**);
void DeleteMatrix(int, int**);
int NumberOfElement1();
int DifferenceBetweenElements();
int LineOfEqualNumbers();
int TransFromMainLineTask();
int TransFromMainLine(int, int, int**);
int TransFromOtherLine(int, int, int**);
void SpaceBetweenDots();
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите номер задания ";
	int Number, size,number,position,counter, counterincycle, counterincycle3, matrixSize1,matrixSize2;
	int* arr3;
	cin >> Number;
	switch (Number)
	{
	case 1:
		NumberOfElement1();
		break;
	case 2:
		DifferenceBetweenElements();
		break;
	case 3:
		LineOfEqualNumbers();
		break;
	case 4:
		TransFromMainLineTask();
		break;
	case 5:
		SpaceBetweenDots();
		break;
	default:
		cout << "Вы ввели номер задания которого неть";
	}
	return 0;
}


int* CreateNewArray(int size)
{
	int* arr = new int[size];
	return arr;
}

void FillInArray(int size, int* arr)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
}

void CoutArray(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(5) << arr[i];

	}

}

void DeleteArray(int* arr)
{
	delete[] arr;
}


int** CreateMatrix(int size, int arr)
{
	int** a = new int* [size];
	for (int i = 0; i < size; i++)
	{
		a[i] = new int[arr];
	}
	return a;
}
void FillInMatrix(int matrixSize1, int matrixSize2, int** Matrix)
{
	srand(time(0));
	for (int i = 0; i < matrixSize1; i++)
	{
		for (int j = 0; j < matrixSize2; j++)
		{
			Matrix[i][j] = rand() % 21 - 10;
		}
	}
}
void CoutMatrix(int matrixSize1, int matrixSize2, int** Matrix)
{
	for (int i = 0; i < matrixSize1; i++)
	{
		for (int j = 0; j < matrixSize2; j++)
		{
			cout << setw(5) << Matrix[i][j];
		}
		cout << endl << endl;
	}

}
void DeleteMatrix(int matrixSize1, int** Matrix)
{
	for (int i = 0; i < matrixSize1; i++)
	{
		delete[] Matrix[i];
	}
	delete[] Matrix;
}

int NumberOfElement1()
{
	int size;
	cout << "Введите размер массива" << endl;
	cin >> size;
	int* arr = CreateNewArray(size);
	FillInArray(size, arr);
	CoutArray(size, arr);
	cout << endl << "Введите число, по которому будет проводиться поиск" << endl;
	int number, position = 0, counter = 0;
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			position = i;
			counter = counter++;
			break;
		}

	}
	if (counter != 0)
		cout << "Элемент, равный " << number << " находится на " << position << "-й позиции";
	else cout << "неть такого элемента :(" << endl;
	DeleteArray(arr);
	return size,number;
}


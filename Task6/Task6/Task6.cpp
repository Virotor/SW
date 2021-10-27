#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#include <iomanip>
using namespace std;

void PositionOfFirstEqualNumber();
//MagicNumbers - числа, которые меньше разности двух предыдущих в массиве. Как их ещё лаконично назвать?
void TaskWithMagicNumbers();
void SubsequenceTask();
void TransposeMatrix();
void Distance();

int* CreateArray(int);
int** CreateMatrix(int, int);
void SetArray(int, int*);
void SetMatrix(int, int, int**);
void PrintArray(int, int*);
void PrintMatrix(int, int, int**);
void SearchEqualElement(int, int, int*);
string SearchMagicNumbers(int, int*);
int CountGreatestSubsequence(int, int*);
void TransposeMainDiagonal(int, int, int**);
void TransposeSideDiagonal(int, int, int**);
double CompareCoordinats(int, int**);
void DeleteMatrix(int, int**);

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
		SubsequenceTask();
		break;
	case 4:
		TransposeMatrix();
		break;
	case 5:
		Distance();
		break;
	default:
		cout << "Вы ввели некорректный номер задания";
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

void SubsequenceTask()
{
	int size;

	cout << "Введите размер массива ";
	cin >> size;
	size = abs(size);

	int* array = CreateArray(size);
	SetArray(size, array);
	PrintArray(size, array);

	cout << CountGreatestSubsequence(size, array);

	delete[]array;
}

void TransposeMatrix()
{
	int size;

	cout << "Введите размер для квадратной матрицы (n)" << endl;
	cin >> size;

	int** array = CreateMatrix(size, size);
	SetMatrix(size, size, array);
	cout << "Матрица: " << endl;
	PrintMatrix(size, size, array);

	cout << "Матрица, транспонированная по главной диагонали:" << endl;
	TransposeMainDiagonal(size, size, array);

	cout << "Матрица, транспонировання по побочной диагонали:" << endl;
	TransposeSideDiagonal(size, size, array);

	DeleteMatrix(size, array);
}

void Distance()
{
	int coordinateColumn, row = 2;

	do
	{
		cout << "Введите количество точек (больше одной) ";
		cin >> coordinateColumn;
	} while (coordinateColumn < 2);

	int** array = CreateMatrix(row, coordinateColumn);
	SetMatrix(row, coordinateColumn, array);

	cout << "строка x и строка y соответственно: " << endl;
	PrintMatrix(row, coordinateColumn, array);

	double maxDistance = CompareCoordinats(coordinateColumn, array);
	cout << "наибольшее расстояние : " << maxDistance;

	DeleteMatrix(row, array);
}

int* CreateArray(int size)
{
	int* array = new int[size];

	return array;
}

int** CreateMatrix(int row, int column)
{
	int** array = new int* [row];
	for (int i = 0; i < row; i++)
	{
		array[i] = new int[column];
	}

	return array;
}

void SetArray(int size, int* array)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 21 - 10;
	}
}

void SetMatrix(int row, int column, int** array)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
			array[i][j] = rand() % 21 - 10;
	}
}

void PrintArray(int size, int* array)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void PrintMatrix(int row, int column, int** array)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(4) << array[i][j];
		}
		cout << endl;
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

int CountGreatestSubsequence(int size, int* array)
{
	int i;
	int totalSubsequence = 1; int greatestSubsequence = 1;

	if (size == 1)
	{
		return greatestSubsequence;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			while (array[i] == array[i + 1])
			{
				totalSubsequence += 1;
				i++;
			}
			if (totalSubsequence > greatestSubsequence)
			{
				greatestSubsequence = totalSubsequence;
			}

			i++;
		}
	}

	return greatestSubsequence;
}

void TransposeMainDiagonal(int row, int column, int** array)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(4) << array[j][i];
		}
		cout << endl;
	}
}

void TransposeSideDiagonal(int row, int column, int** array)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(4) << array[row - 1 - j][column - 1 - i];
		}
		cout << endl;
	}
}

double CompareCoordinats(int column, int** array)
{
	double xDistance, yDistance, totalDistance, maxDistance = 0;

	for (int i = 0; i < column - 1; i++)
	{
		int j = 1;
		while (i + j < column)
		{
			xDistance = (array[0][i] - array[0][i + j]) * (array[0][i] - array[0][i + j]);
			yDistance = (array[1][i] - array[1][i + j]) * (array[1][i] - array[1][i + j]);

			totalDistance = sqrt(xDistance + yDistance);

			if (totalDistance > maxDistance)
			{
				maxDistance = totalDistance;
			}

			j++;
		}
	}

	return maxDistance;
}

void DeleteMatrix(int row, int** array)
{
	for (int i = 0; i < row; i++)
	{
		delete[] array[i];
	}
	delete[] array;
}

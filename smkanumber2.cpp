#include <iostream>
#include<locale.h> 
using namespace std;

void OutPutArray(int*, int);
int FillArray(int*, int);
int LongestEq(int*, int);
void FindNumber(int, int*, int);
void ifDifferenceLessOutputNumber(int*, int);
int** CreateFillMatrix(int&, int&);
int Transpose();
int MaxDistance();
void CreateArray(int*& b, int size)
{
	b = new int[size];

}

int main()
{
	setlocale(LC_ALL, "rus");
	int length, number;
	cout << "Введите размер массива";
	cin >> length;
	int* array;
	CreateArray(array, length);
	FillArray(array, length);
	OutPutArray(array, length);

	cout << "Введите число";
	cin >> number;
	FindNumber(number, array, length);
	ifDifferenceLessOutputNumber(array, length);
	cout << "Длина промежутка" << "  " << LongestEq(array, length) << endl;
	int row, column;
	Transpose();
	MaxDistance();

	return 0;
}


void OutPutArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
}
//

int FillArray(int* arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
	return *arr;
}

//

void FindNumber(int number, int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			cout << i << endl;
			break;
		}
		else
		{
			if (i == size - 1)
			{
				cout << "Такого числа нет" << endl;
			}
		}
	}
}

//

void ifDifferenceLessOutputNumber(int* arr, int size)
{
	for (int i = 0; i < size - 2; i++)
	{
		if (arr[i] - arr[i + 1] > arr[i + 2])
		{
			cout << arr[i + 2] << endl;
		}
		else
		{
			if (i == size - 3)
			{
				cout << "Такого числа нет" << endl;
			}
		}
	}
}

int LongestEq(int* arr, int length)
{
	int i, c, m;
	m = 1;
	c = 1;
	for (i = 0; i < length - 1; i++)
		if (arr[i] == arr[i + 1])
		{
			c++;
			if (c > m) m = c;
		}
		else
			c = 1;
	return m;
}

int** CreateFillMatrix(int& row, int& column)
{

	cout << "Введите число строк и столбцов" << endl;
	cin >> row >> column;
	int** matrix = new int* [row];

	for (int i = 0; i < row; i++)
		matrix[i] = new int[column];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix[i][j] = rand() % 21 - 10;
			cout << matrix[i][j] << "\t ";
		}
		cout << endl;
	}

	return matrix;
}


int Transpose()
{
	int row, column;
	int** matrix = CreateFillMatrix(row, column);
	int** matrixTranspose = new int* [column];
	*matrixTranspose = new int[column * row];
	for (int i = 1; i < column; ++i)
	{
		matrixTranspose[i] = matrixTranspose[i - 1] + row;
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			matrixTranspose[j][i] = matrix[i][j];
		}
	}

	cout << "Транспонированная матрица по главной диагонали" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << matrixTranspose[i][j] <<"  ";
		}
		cout << endl;
	}

	cout << "Транспонированная матрица по побочной диагонали" << endl;

	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << matrix[row - 1 - j][column - 1 - i] << "\t";
		}
		cout << endl;
	}
	return 0;


}


int MaxDistance()
{
	double distance, MaxDistance = 0;
	int NumberOfPoints;
	cout << "Введите количество точек ";
	cin >> NumberOfPoints;

	int* coordinatesX = new int[NumberOfPoints];
	int* coordinatesY = new int[NumberOfPoints];

	for (int i = 0; i < NumberOfPoints; i++)
	{
		coordinatesX[i] = rand() % 21 - 10;
		coordinatesY[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < NumberOfPoints; i++)
	{
		cout << "(" << coordinatesX[i] << "," << coordinatesY[i] << ")" << endl;

	}

	for (int i = 0; i < NumberOfPoints; i++)
	{
		for (int k = 0; k < NumberOfPoints - 1; k++)
		{
			distance = sqrt((coordinatesX[i] - coordinatesX[k]) * (coordinatesX[i] - coordinatesX[k]) + (coordinatesY[i] - coordinatesY[k]) * (coordinatesY[i] - coordinatesY[k]));
			if (distance > MaxDistance)
			{
				MaxDistance = distance;
			}
		}
	}
	cout << "Максимальное расстояние = " << MaxDistance << endl;
	return 0;

}
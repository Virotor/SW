#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void FillArrayRandom(int* arr, int size)
{
	for ( int i = 0; i < size; i++)
	{
		arr[i] = -10 + rand() % 21;
	}
}
void FillArrayManually(int* arr, int size)
{
	cout << "Введите элементы массива через пробел:  ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void FillMatrix(int** matrix, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = -10 + rand() % 21;
		}
	}
}
void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
void PrintMatrix(int** matrix, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
void DeleteMatrix(int** matrix, int row)
{
	for (int i = 0; i < row; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
void PositionOfElement(int* arr, int size, int element, int position)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			position = i;
			cout << "Позиция числа " << element << ": " << position << endl;
			break;
		}
	}
}
void ElementsLessThenDiffOfTwoPrev(int* arr, int size)
{
	for (int i = 2; i < size; i++)
	{
		if (arr[i] < (arr[i - 2] - arr[i - 1]))
		{
			cout << arr[i] << "  ";
		}
	}
}
void LengthOfTheLargestSequenceOfIdentialNum(int* arr, int size)
{
	int max = 0;
	int* extraArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		extraArr[i] = 0;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				extraArr[i] ++;
			}
			else break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (extraArr[i] > max)
		{
			max = extraArr[i];
		}
	}
	max++;
	cout << "Длина последовательности одинаковых чисел равна " << max << endl;
	delete[] extraArr;
}
void MatrixMainDiagonal(int** matrix, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int tmpM = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = tmpM;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
void MatrixSideDiagonal(int** matrix, int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - 1; j++)
		{
			int tmpS = matrix[i][j];
			matrix[i][j] = matrix[row - j - 1][row - i - 1];
			matrix[row - j - 1][row - i - 1] = tmpS;
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
void SubstringInString()
{
	cout << "Введите строку : " << endl;
	string mainstring, substring;
	cin.ignore();
	getline(cin, mainstring);
	int LengthOfMainstring, LengthOfSubstring;
	LengthOfMainstring = mainstring.length();
	cout << "Введите подстроку : " << endl;
	cin.ignore();
	getline(cin, substring);
	LengthOfSubstring = substring.length();
	bool ValueOfFindingElement = false;
	int LengthSubstringMinusOne = LengthOfSubstring - 1;
	for (int i1 = 0; i1 < LengthOfMainstring; i1++)
	{
		if (mainstring[i1] == substring[0])
		{
			int j1 = i1, j2 = 0;
			for (j1, j2; j2 < LengthOfSubstring; j1++, j2++)
			{
				if (mainstring[j1] != substring[j2])
				{
					break;
				}
				if (j2 == LengthSubstringMinusOne)
				{
					cout << "Совпадения начинаются с символа под номером : " << i1 - 1 << endl;
					ValueOfFindingElement = true;
				}
			}
			if (ValueOfFindingElement)
			{
				break;
			}
			else if (ValueOfFindingElement == false)
			{
				cout << "Такой подстроки нет." << endl;
			}
		}
	}
}


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int kod;
	bool stop = false;
	while (!stop)
	{
		cout << "Введите номер задания\n";
		cin >> kod;
		stop = true;
		switch (kod)
		{
		case 1:
		{
			cout << "Задание 1\n";
			int size;
			cout << "Введите размер массива: ";
			cin >> size;
			int element, position = 0;
			int* arr = new int[size];
			FillArrayRandom(arr, size);
			PrintArray(arr, size);
			cout << "Введите элемент, позицию которого хотите найти: ";
			cin >> element;
			PositionOfElement(arr, size, element, position);
			delete[] arr;
			SubstringInString();
			break;
		}
		case 2:
		{
			cout << "Задание 2\n";
			int size;
			cout << "Введите размер массива: ";
			cin >> size;
			int* arr = new int[size];
			FillArrayRandom(arr, size);
			PrintArray(arr, size);
			ElementsLessThenDiffOfTwoPrev(arr, size);
			delete[] arr;
			break;
		}
		case 3:
		{
			cout << "Задание 3\n";
			int size;
			cout << "Введите размер массива: ";
			cin >> size;
			int* arr = new int[size];
			FillArrayManually(arr, size);
			PrintArray(arr, size);
			cout << endl;
			LengthOfTheLargestSequenceOfIdentialNum(arr, size);
			delete[] arr;
			break;
		}
		case 4:
		{
			int row, col;
			cout << "Введите количество строк: ";
			cin >> row;
			cout << "Введите количество столбцов: ";
			cin >> col;
			int** matrix = new int* [row];
			for (int i = 0; i < row; i++)
			{
				matrix[i] = new int[col];
			}
			FillMatrix(matrix, col, row);
			PrintMatrix(matrix, col, row);
			cout << endl;
			cout << "Транспонированная матрица относительно главной диагонали: \n";
			MatrixMainDiagonal(matrix, col, row);
			cout << endl;
			cout << "Новая матрица:\n";
			FillMatrix(matrix, col, row);
			PrintMatrix(matrix, col, row);
			cout << endl;
			cout << "Транспонированная матрица относительно побочной диагонали: \n";
			MatrixSideDiagonal(matrix, col, row);
			DeleteMatrix(matrix, row);
			break;
		}
		case 5:
		{
			cout << "Задание 5\n";
			break;
		}
		default:
			cout << "Нету такой задачи, выберите ещё раз\n";
			stop = false;
		}
	}
	return 0;
}	

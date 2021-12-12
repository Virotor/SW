#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int** inputMatrix(int**, int);
int choise();
int inputNum();
int** transpositionMain(int**, int);
int** transpositionColl(int**, int);
void printMatrix(int**, int);

int main()
{
	setlocale(0, "rus");
	int s = abs(inputNum());
	int** matrix = new int*[s];
	for (int i = 0; i < s; i++)
	{
		matrix[i] = new int[s];
	}
	matrix = inputMatrix(matrix, s);
	while (true)
	{
		switch (choise())
		{
		case 1:
			printMatrix(matrix, s);
			break;
		case 2:
			matrix = transpositionMain(matrix, s);
			printMatrix(matrix, s);
			break;
		case 3:
			matrix = transpositionColl(matrix, s);
			printMatrix(matrix, s);
			break;
		default:
			cout << "ERROR" << endl;
			break;
		}
	}
	return 0;
}


int** inputMatrix(int** matrix, int a)
{
	srand(time(0));
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			matrix[i][j] = rand() % 101 - 50;
		}
	}
	return matrix;
}

void printMatrix(int** matrix, int a)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}

int** transpositionMain(int** matrix, int a)
{
	int b;
	for (int i = 0; i < a; i++)
	{
		for (int j = i; j < a; j++)
		{
			b = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = b;
		}
	}
	return matrix;
}

int** transpositionColl(int** matrix, int a)
{
	int c = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a - i - 1; ++j)
		{
			int c = matrix[i][j];
			matrix[i][j] = matrix[a - j - 1][a - i - 1];
			matrix[a - j - 1][a - i - 1] = c;
		}
	}
	return matrix;
}

int inputNum()
{
	cout << "Введите размер матрицы" << endl;
	int num;
	while (!scanf_s("%d", &num))
	{
		system("cls");
		rewind(stdin);
		cout << "Введите целое число!" << endl;
	}
	return num;
}

int choise()
{
	cout << "1) Текущая матрица" << endl;
	cout << "2) Транспонирование матрицы относительно главной диагонали" << endl;
	cout << "3) Транспонирование матрицы относительно побочной диагонали" << endl;
	int var = inputNum();
	return var;
}
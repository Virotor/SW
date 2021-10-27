#include <iostream>
#include <ctime>
#include <Windows.h>
#include <iomanip>

using namespace std;

int** inputMatrix(int**, int);
void printMatrix(int**, int);
int inputInt();
int** matrixTranspositionMain(int**, int);
int** matrixTranspositionSecondary(int**, int);
int menu();

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int x = abs(inputInt());
	int** matrix = new int* [x];
	for (int i = 0; i < x; i++)
	{
		matrix[i] = new int[x];
	}
	matrix = inputMatrix(matrix, x);
	while (true) {
		switch (menu())
		{
		case 1:
			printMatrix(matrix, x);
			break;
		case 2:
			matrix = matrixTranspositionMain(matrix, x);
			cout << "Новая матрица:" << endl;
			printMatrix(matrix, x);
			break;
		case 3:
			matrix = matrixTranspositionSecondary(matrix, x);
			cout << "Новая матрица:" << endl;
			printMatrix(matrix, x);
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "Ошибка" << endl;
			break;
		}
	}
	return 0;
}

int inputInt() {
	cout << "Введите размер матрицы" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		rewind(stdin);
		cout << "Введите целое число" << endl;
	}
	return num;
}

int** matrixTranspositionMain(int** matrix, int x)
{
	int temp = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = i; j < x; j++)
		{
			temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
	return matrix;
}

int** matrixTranspositionSecondary(int** matrix, int x)
{
	int temp = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x - i - 1; ++j)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[x - j - 1][x - i - 1];
			matrix[x - j - 1][x - i - 1] = temp;
		}
	}
	return matrix;
}

int menu() {
	cout << "1)Вывод матрицы" << endl;
	cout << "2)Транспонирование матрицы относительно главной диагонали" << endl;
	cout << "3)Транспонирование матрицы относительно побочной диагонали" << endl;
	cout << "4)Выход из программы" << endl;
	int choice = inputInt();
	return choice;
}

int** inputMatrix(int** matrix, int x) {
	srand(time(0));
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			matrix[i][j] = rand() % 10 - 10;
		}
	}
	return matrix;
}

void printMatrix(int** matrix, int x) {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}

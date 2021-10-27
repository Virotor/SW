#include <iostream>
#include <ctime>
#include <iomanip>
#include <math.h>
#include <Windows.h>

using namespace std;

int inputInt();
int menu();
int** randCoordinates(int**, int);
void findMaxDistance(int**, int);
void printCoordinates(int**, int);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите количество хрнимых точек" << endl;
	int y = abs(inputInt());
	int** coordinates = new int* [y];
	for (int i = 0; i < y; i++)
	{
		coordinates[i] = new int[2];
	}
	coordinates = randCoordinates(coordinates, y);
	printCoordinates(coordinates, y);
	findMaxDistance(coordinates, y);
	return 0;
}

void printCoordinates(int** matrix, int y) {
	cout << setw(5) << "X" << setw(5) << "Y" << endl;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}

int** randCoordinates(int** matrix, int y) {
	srand(time(0));
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			matrix[i][j] = rand() % 50 - 25;
		}
	}
	return matrix;
}

void findMaxDistance(int** matrix, int y) {
	float distance = 0, maxDistance = 0;
	for (int i = 0; i < y - 1; i++)
	{
		for (int k = i + 1; k < y; k++)
		{
			distance = sqrt(pow(abs(matrix[0][i] - matrix[0][k]), 2) + pow(abs(matrix[1][i] - matrix[1][k]), 2));
			if (maxDistance < distance) {
				maxDistance = distance;
			}
			distance = 0;
		}
	}
	cout << "Максимальное расстояние между точками: " << maxDistance << endl;
}

int menu() {
	cout << "1)Вывод матрицы" << endl;
	cout << "2)Транспонирование матрицы относительно главной диагонали" << endl;
	cout << "3)Транспонирование матрицы относительно побочной диагонали" << endl;
	cout << "4)Выход из программы" << endl;
	int choice = inputInt();
	return choice;
}

int inputInt() {
	cout << "Введите число int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		rewind(stdin);
		cout << "Введите целое число" << endl;
	}
	return num;
}
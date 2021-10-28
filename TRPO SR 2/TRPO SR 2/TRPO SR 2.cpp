#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
using namespace std;
int** inputMatrix(int& row, int& column);
void readMatrix(int** matrix, int row, int column);
int* inputArray(int& size);
void readArray(int* array, int size);
int PositionWithdrawal(int* array, int size);
void readNumber(int* array, int size);
int researchSuccession(int* array, int size);
void Matrixtransponate(int** matrix, int row, int column);
int** inputMatrixXY(int count);
int calculateMaxLength(int** dataCoordinates, int count);

int main()
{
	int TheExercise;
	do {
		cout << "Choose an exercise \n  1__Position withdrawal\n  2__Difference of elements\n  3__CalculateMaxLength\n  4__Matrix transponate\n  5__Maximum distance among points\n ";
		cin >> TheExercise;
	} while (TheExercise < 1 || TheExercise > 5);

	switch (TheExercise)
	{
	case 1:
	{
		int size;
		int* array = inputArray(size);
		readArray(array, size);

		int number = PositionWithdrawal(array, size);
		if (number != -1) cout << "\nPosition this number | " << number <<endl;
		else  cout << "\nThis element is apsent in array!" << endl;
		break;
	}
	case 2:
	{
		int size;
		int* array = inputArray(size);
		readArray(array, size);
		readNumber(array, size);
		break;
	}
	case 3:
	{
		int size;
		int* array = inputArray(size);
		readArray(array, size);
		cout << "\nMax succession | " << researchSuccession(array, size) << endl;
		break;
	}
	case 4:
	{
		int row, column;
		int** matrix = inputMatrix(row, column);
		readMatrix(matrix, row, column);
		Matrixtransponate(matrix, row, column);
		break;
	}
	case 5:
	{
		int count;
		do {
			cout << "\nEnter count coordinates (3 - 10) -> ";
			cin >> count;
		} while (count < 3 || count > 10);

		int** dataCoordinates = inputMatrixXY(count);
		cout << "\nMax length | " << calculateMaxLength(dataCoordinates, count) << std::endl;
	}
	}
	return 0;
}

int** inputMatrix(int& row, int& column)
{
	do {
		cout << "\nEnter size of matrix (max 10x10) -> ";
		cin >> row >> column;
	} while (row < 1 || column < 1 || row > 10 || column > 10);


	int** matrix = new int* [row];

	srand(time(0));
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[column];
		for (int j = 0; j < column; j++) matrix[i][j] = rand() % 21 - 10;
	}
	return matrix;
}

void readMatrix(int** matrix, int row, int column)
{
	cout << "\n";
	for (int j = 0; j < row; j++)
	{
		for (int i = 0; i < column; i++) std::cout << std::setw(5) << matrix[j][i];
		cout << "\n\n";
	}
}

int* inputArray(int& size)
{
	do {
		cout << "\nEnter size of array (max 20) -> ";
		cin >> size;
	} while (size < 1 || size > 20);

	int* array = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++) array[i] = rand() % 21 - 10;

	return array;
}

void readArray(int* array, int size)
{
	for (int i = 0; i < size; i++) cout << setw(5) << array[i];
}

int PositionWithdrawal(int* array, int size)
{
	int researchNumber, number = -1;
	cout << "\nEnter number | ";
	cin >> researchNumber;
	for (int j = 0; j < size; j++) if (array[j] == researchNumber) number = j;
	return number;
}

void readNumber(int* array, int size)
{
	cout << "\n\n";
	for (int j = 2; j < size; j++)
	{
		if ((array[j - 2] - array[j - 1]) > array[j]) cout << setw(5) << array[j];
	}
}

int researchSuccession(int* array, int size)
{
	int number = 1;
	int count = 1;
	for (int j = 0; j < size; j++)
	{
		if (array[j] == array[j + 1]) count += 1;
		else {
			if (count > number) {
				number = count;
				count = 1;
			}
		}
	}
	return number;
}

void Matrixtransponate(int** matrix, int row, int column)
{
	cout<< "Not done" << endl;
}

int** inputMatrixXY(int count)
{
	int row = count;
	int column = 2;
	int** matrix = new int* [row];
	srand(time(0));
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[column];
		for (int j = 0; j < column; j++) matrix[i][j] = rand() % 21 - 10;
	}
	return matrix;
}

int calculateMaxLength(int** dataCoordinates, int row)
{
	int maxLength = 0, length, x, y, x1, y1;
	for (int i = 0; i < row; i++)
	{
		x = dataCoordinates[i][0];
		y = dataCoordinates[i][1];

		for (int j = 0; j < row; j++)
		{
			x1 = dataCoordinates[j][0];
			y1 = dataCoordinates[j][1];
			length = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
			if (length > maxLength) maxLength = length;
		}
	}
	cout << "\n" << setw(5) << "X" << setw(5) << "Y" <<endl;
	readMatrix(dataCoordinates, row, 2);
	return maxLength;
}
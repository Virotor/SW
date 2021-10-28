#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>

int** writeMatrix(int &row, int &column);
void readMatrix(int** matrix, int row, int column);

int* writeArray(int &size);
void readArray(int* array, int size);

int findPositionElementArray(int* array, int size);
void readNumber(int* array, int size);
int researchSuccession(int* array, int size);
void transponateMatrix(int** matrix, int row, int column);
int** writeMatrixXY(int count);
int calculateMaxLength(int** dataCoordinates, int count);




int main()
{
	int exercise;
	do {
		std::cout << "Enter digit of exercise \n  1 | First position a element in the array\n    2 | Difference of elements\n      3 | Find a sequence of numbers\n    4 | Transponate matrix\n  5 | Calculate max length between two coordiantes\n\n-> ";
		std::cin >> exercise;
	} while (exercise < 1 || exercise > 5);

	switch (exercise)
	{
	case 1:
	{
		int size;
		int* array = writeArray(size);
		readArray(array, size);

		int number = findPositionElementArray(array, size);
		if (number != -1) std::cout << "\nPosition this number | " << number << std::endl;
		else  std::cout << "\nThis element is apsent in array!" << std::endl;
		break;
	}
	case 2:
	{
		int size;
		int* array = writeArray(size);
		readArray(array, size);
		readNumber(array, size);
		break;
	}
	case 3:
	{
		int size;
		int* array = writeArray(size);
		readArray(array, size);
		std::cout << "\nMax succession | " << researchSuccession(array, size) << std::endl;
		break;
	}
	case 4:
	{
		int row, column;
		int** matrix = writeMatrix(row, column);
		readMatrix(matrix, row, column);
		transponateMatrix(matrix, row, column);
		break;
	}
	case 5:
	{
		int count;
		do {
			std::cout << "\nEnter count coordinates (3 - 10) -> ";
			std::cin >> count;
		} while (count < 3 || count > 10);

		int** dataCoordinates = writeMatrixXY(count);
		std::cout << "\nMax length | " << calculateMaxLength(dataCoordinates, count) << std::endl;
	}
	}
	return 0;
}


int** writeMatrix(int &row, int &column)
{
	do {
		std::cout << "\nEnter size of matrix (max 10x10) -> ";
		std::cin >> row >> column;
	} while (row < 1 || column < 1 || row > 10 || column > 10);

	
	int** matrix = new int* [row];

	srand(time(0));
	for (int i = 0; i < row; i++){
		matrix[i] = new int[column];
		for (int j = 0; j < column; j++) matrix[i][j] = rand() % 21 - 10;
	}
	return matrix;
}


void readMatrix(int** matrix, int row, int column)
{	
	std::cout << "\n";
	for (int j = 0; j < row; j++)
	{
		for (int i = 0; i < column; i++) std::cout << std::setw(5) << matrix[j][i];
		std::cout << "\n\n";
	}
}


int* writeArray(int &size)
{
	do {
		std::cout << "\nEnter size of array (max 20) -> ";
		std::cin >> size;
	} while (size < 1 || size > 20);

	int* array = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++) array[i] = rand() % 21 - 10;

	return array;
}

void readArray(int* array, int size)
{
	for (int i = 0; i < size; i++) std::cout << std::setw(5) << array[i];
}


int findPositionElementArray(int* array, int size)
{
	int researchNumber, number = -1;
	std::cout << "\nEnter number | ";
	std::cin >> researchNumber;

	for (int j = 0; j < size; j++) if (array[j] == researchNumber) number = j;

	return number;
}

void readNumber(int* array, int size)
{
	std::cout << "\n\n";
	for (int j = 2; j < size; j++)
	{
		if ((array[j - 2] - array[j - 1]) > array[j]) std::cout << std::setw(5) << array[j];
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
				count = 1;}
		}
	}
	return number;
}


void transponateMatrix(int** matrix, int row, int column)
{
	int** matrix1 = matrix;
	int** matrix2 = matrix;

	int num;
	for (int j = 0; j < row; j++)
	{
		
		for (int i = j; i < column; i++)
		{
			num = matrix[j][i];
			matrix1[j][i] = matrix1[i][j];
			matrix1[i][j] = num;
		}
	}
	readMatrix(matrix1, row, column);

	int num2;
	for (int j = 0; j < row; j++)
	{

		for (int i = 0; i < column-j-1; i++)
		{
			num2 = matrix[j][i];
			matrix1[j][i] = matrix1[column-i-1][row-j-1];
			matrix1[column-i-1][row-j-1] = num2;
		}
	}
	readMatrix(matrix2, row, column);

}


int** writeMatrixXY(int count)
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
	std::cout << "\n" << std::setw(5) << "X" << std::setw(5) << "Y" << std::endl;
	readMatrix(dataCoordinates, row, 2);

	return maxLength;
}




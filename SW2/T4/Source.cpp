#include <iostream>
#include <ctime>

using namespace std;

void fillingMatrix(int** Matrix, unsigned int rows, unsigned int columns)
{
	srand(time(NULL));
	unsigned int i = 0;
	for (i; i < rows; i++)
	{
		for (unsigned int ii = 0; ii < columns; ii++)
			Matrix[i][ii] = 9 - rand() % 19;
	}
};
void outputtingMatrix(int** Matrix, unsigned int rows, unsigned int columns)
{
	unsigned int i = 0;
	for (i; i < rows; i++)
	{
		for (unsigned int ii = 0; ii < columns; ii++)
			printf("%-7i ", Matrix[i][ii]);
		cout << endl;
	}
};
void transpositingMatrixMainDiagonal(int** matrix, unsigned int rows, unsigned int columns, int** matrixToFill)
{
	for (unsigned int i = 0; i < rows; i++)
	{
		for (unsigned int ii = 0; ii < columns; ii++)
		{
			matrixToFill[ii][i] = matrix[i][ii];
		};
	};
};
void transpositingMatrixSecondaryDiagonal(int** matrix, unsigned int rows, unsigned int columns, int** matrixToFill)
{
	for (unsigned int i = 0; i < rows; i++)
	{
		for (unsigned int ii = 0; ii < columns; ii++)
		{
			matrixToFill[columns - ii - 1][rows - i - 1] = matrix[i][ii];
		};
	};
};

int main()
{
	unsigned int rows, columns;
	cout << "Enter number of rows:\n > "; cin >> rows;
	cout << "Enter number of colums:\n > "; cin >> columns;
	int** matrix = new int* [rows];
	for (unsigned int i = 0; i < rows; i++)
	{
		matrix[i] = new int[columns];
	}
	fillingMatrix(matrix, rows, columns);
	cout << "Generated matrix is:\n";
	outputtingMatrix(matrix, rows, columns);
	int** matrixBuffer = new int* [columns];
	for (unsigned int i = 0; i < columns; i++)
	{
		matrixBuffer[i] = new int[rows];
	}
	transpositingMatrixMainDiagonal(matrix, rows, columns, matrixBuffer);
	cout << "\nFirst time transposed matrix:\n";
	outputtingMatrix(matrixBuffer, columns, rows);
	transpositingMatrixSecondaryDiagonal(matrixBuffer, columns, rows, matrix);
	cout << "\nAnswer matrix:\n";
	outputtingMatrix(matrix, rows, columns);
	return 0;
}
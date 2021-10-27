#include <iostream>
#include <ctime>

using namespace std;

void fillingMatrix(int** matrix, int unsigned orderOfMatrix)
{
	srand(time(NULL));
	unsigned int i = 0;
	for (i; i < orderOfMatrix; i++)
	{
		for (unsigned int ii = 0; ii < orderOfMatrix; ii++)
			matrix[i][ii] = 9 - rand() % 19;
	}
};
void outputtingMatrix(int** matrix, int unsigned orderOfMatrix)
{
	unsigned int i = 0;
	for (i; i < orderOfMatrix; i++)
	{
		for (unsigned int ii = 0; ii < orderOfMatrix; ii++)
			printf("%-3i ", matrix[i][ii]);
		cout << endl;
	}
};
void transpositingMatrix(int** matrix, unsigned int orderOfMatrix)
{
	int buffer = 0;
	for (unsigned int i = 0; i < orderOfMatrix; i++)
	{
		for (unsigned int ii = i; ii < orderOfMatrix; ii++)
			{
				buffer = matrix[i][ii];
				matrix[i][ii] = matrix[ii][i];
				matrix[ii][i] = buffer;
			};
	};
	for (unsigned int i = 0; i < orderOfMatrix; i++)
	{
		for (unsigned int ii = 0; ii < orderOfMatrix - i; ii++)
			{
				buffer = matrix[i][ii];
				matrix[i][ii] = matrix[orderOfMatrix - ii - 1][orderOfMatrix - 1 - i];
				matrix[orderOfMatrix - ii - 1][orderOfMatrix - i - 1] = buffer;
			};
	};
};

int main()
{
	unsigned int orderOfMatrix;
	cout << "Enter order of matrix:\n > "; cin >> orderOfMatrix;
	int** matrix = new int* [orderOfMatrix];
	for (unsigned int i = 0; i < orderOfMatrix; i++)
	{
		matrix[i] = new int[orderOfMatrix];
	}
	fillingMatrix(matrix, orderOfMatrix);
	cout << "Generated matrix is:\n";
	outputtingMatrix(matrix, orderOfMatrix);
	transpositingMatrix(matrix, orderOfMatrix);
	cout << "Transposed matrix:\n";
	outputtingMatrix(matrix, orderOfMatrix);
	return 0;
}
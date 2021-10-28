#include <iostream>

void makeMatrix(int **&a,int numberOfLines,int numberOfColumns);
int fillingMatrix(int**& a, int numberOfLines, int numberOfColumns);
void printmatrix(int**& a, int numberOfLines, int numberOfColumns);
void deleteMatrix(int**& a, int numberOfLines);
void transposeMatrixRelativeToMainDiagonal(int**& a, int numberOfLines, int numberOfColumns);
void transposeMatrixRelativeToSaidDiagonal(int**& a, int numberOfLines, int numberOfColumns);

int main()
{
	srand(time(0));
	int** f, n, k;
	do
	{
		std::cout << "Input size of matrix(n*n):";
		std::cin >> n >> k;
	} while (n != k);
	makeMatrix(f,n,k);
	fillingMatrix(f, n, k);
    printmatrix(f, n, k);
	transposeMatrixRelativeToMainDiagonal(f, n, k);
	transposeMatrixRelativeToSaidDiagonal(f, n, k);
	deleteMatrix(f, n);
	return 0;
}
void makeMatrix(int**& a, int numberOfLines, int numberOfColumns)
{
	a = new int* [numberOfLines];
	for (int i = 0; i < numberOfLines; i++)
	{
		a[i] = new int[numberOfColumns];
	}
}
int fillingMatrix(int**& a, int numberOfLines, int numberOfColumns)
{
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int g = 0; g < numberOfColumns;g++)
		{
			a[i][g] = rand() % 21 - 10;
		}
	}
	return **a;
}
void printmatrix(int**& a, int numberOfLines, int numberOfColumns)
{
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int g = 0; g < numberOfColumns; g++)
		{
			std::cout << " " << a[i][g];
		}
		std::cout << std::endl;
	}
}
void deleteMatrix(int**& a,int numberOfLines)
{
	for (int i = 0; i < numberOfLines; i++)
	{
		delete[]a[i];
	}
	delete[]a;
}
void transposeMatrixRelativeToMainDiagonal(int**& a, int numberOfLines, int numberOfColumns)
{
	std::cout << "Transpose matrix relative to the main diagonal" << std::endl;
	int **v;
	makeMatrix(v, numberOfColumns, numberOfLines);
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int g = 0; g < numberOfColumns; g++)
		{
			v[i][g] = a[g][i];
		}
	}
	printmatrix(v, numberOfColumns, numberOfLines);
	deleteMatrix (v, numberOfLines);
}
void transposeMatrixRelativeToSaidDiagonal(int**& a, int numberOfLines, int numberOfColumns)
{
	std::cout << "Transpose matrix relative to the said diagonal" << std::endl;
	int **j;
	makeMatrix(j, numberOfColumns, numberOfLines);
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int g = 0; g < numberOfColumns-i-1; g++)
		{
			int temp = a[i][g];
			a[i][g] = a[numberOfLines - g - 1][numberOfLines - i - 1];
			a[numberOfLines - g - 1][numberOfLines - i - 1] = temp;
		}
	}
	printmatrix(a, numberOfColumns, numberOfLines);
	deleteMatrix(a, numberOfLines);
}
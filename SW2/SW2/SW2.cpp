#include <iostream>
#include <string>
#include <iomanip>

//Функции выполнения заданий
void searchFirstSelectedElement();
void searchSubstringInString();
void searchElementLessThanDifference();
void searchGreatestSequenceLength();
void matrixTransposition();
void searchMaxDistance();


//Функции массива
int* initArray(int);
void printArray(int*, int);
void clearArrayMem(int*);


//Функции для матрицы
int** initMatrix(int, int);
int** initEmptyMatrix(int, int);
void printMatrix(int**, int, int);
void clearMatrixMem(int**, int);


void main()
{
	searchFirstSelectedElement();
	searchSubstringInString();
	searchElementLessThanDifference();
	searchGreatestSequenceLength();
	matrixTransposition();
	searchMaxDistance();
}


//Функции выполнения заданий
void searchFirstSelectedElement()
{
	std::cout << "Enter array size: ";
	int arraySize = 0;
	std::cin >> arraySize;
	int* array = initArray(arraySize);
	printArray(array, arraySize);
	std::cout << "Enter element: ";
	int element = 0;
	std::cin >> element;
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == element)
		{
			std::cout << "Position of the selected element: " << i << std::endl;
			clearArrayMem(array);
			return;
		}
	}
	std::cout << "There is no selected element here!" << std::endl;
	clearArrayMem(array);
}

void searchSubstringInString()
{
	std::cout << "Enter string: ";
	std::string string;
	std::cin >> string;
	std::cout << "Enter substring: ";
	std::string subString;
	std::cin >> subString;
	int i = 0;
	bool flag = false;
	while (i < string.length())
	{
		int k = 0;
		while (string[i] == subString[k] && k < subString.length() && i < string.length())
		{
			i++;
			k++;
			flag = true;
		}
		if (k == subString.length())
		{
			std::cout << "Substring starts with " << i - k << " number" << std::endl;
			return;
		}
		else if (!flag)
			i++;
		flag = false;
	}
	std::cout << "There is no substring in string" << std::endl;
}

void searchElementLessThanDifference()
{
	std::cout << "Enter array size: ";
	int arraySize = 0;
	std::cin >> arraySize;
	int* array = initArray(arraySize);
	bool flag = false;
	printArray(array, arraySize);
	for (int i = 2; i < arraySize; i++)
	{
		if (array[i] < array[i - 2] - array[i - 1])
		{
			std::cout << array[i] << " " << std::endl;
			flag = true;
		}
	}
	if (!flag)
		std::cout << "There is no elements less than difference in array" << std::endl;
	clearArrayMem(array);
}

void searchGreatestSequenceLength()
{
	std::cout << "Enter array size: ";
	int arraySize = 0;
	std::cin >> arraySize;
	int* array = initArray(arraySize);
	printArray(array, arraySize);
	int count = 0;
	int maxCount = 0;
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == array[i + 1])
			count++;
		else if (count > maxCount)
		{
			maxCount = count + 1;
			count = 0;
		}
		else
			count = 0;
	}
	std::cout << "The greatest sequence length is " << maxCount << std::endl;
	clearArrayMem(array);
}

void matrixTransposition()
{
	std::cout << "Enter matrix size: ";
	int row = 0, col = 0;
	std::cin >> row >> col;
	int** matrix = initMatrix(row, col);
	printMatrix(matrix, row, col);
	std::cout << "Choose a diagonal (1 - main, 2 - side): ";
	int diagonal = 0;
	std::cin >> diagonal;
	if (diagonal == 1)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = i; j < col; j++)
			{
				int temp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = temp;
			}
		}
		printMatrix(matrix, row, col);
	}
	else if (diagonal == 2)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col - i - 1; j++)
			{
				int temp = matrix[i][j];
				matrix[i][j] = matrix[col - j - 1][row - i - 1];
				matrix[col - j - 1][row - i - 1] = temp;
			}
		}
		printMatrix(matrix, row, col);
	}
	clearMatrixMem(matrix, row);
}

void searchMaxDistance()
{
	std::cout << "Enter count of coordinates: ";
	int row = 0, col = 2;
	std::cin >> row;
	int** coords = initMatrix(row, col);
	std::cout << "x y" << std::endl;
	printMatrix(coords, row, col);
	double maxDistance = 0;
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = i + 1; j < row; j++)
		{
			double distance = sqrt((coords[i][0] - coords[j][0]) * (coords[i][0] - coords[j][0]) + (coords[i][1] - coords[j][1]) * (coords[i][1] - coords[j][1]));
			if (distance > maxDistance)
				maxDistance = distance;
		}
	}
	std::cout << std::fixed << std::setprecision(3) << "Maximum distance is " << maxDistance;
	clearMatrixMem(coords, row);
}


//Функции массива
int* initArray(int arraySize)
{
	srand(time(0));
	int* array = new int[arraySize];
	std::cout << "Enter range of random: ";
	int minValue = -20, maxValue = 40;
	std::cin >> minValue >> maxValue;
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
	return array;
}

void printArray(int* array, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void clearArrayMem(int* array)
{
	delete[]array;
}


//Функции для матрицы
int** initMatrix(int row, int col)
{
	srand(time(0));
	int** matrix = new int* [row];
	std::cout << "Enter range of random: ";
	int minValue = -20, maxValue = 40;
	std::cin >> minValue >> maxValue;
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = rand() % (maxValue - minValue + 1) + minValue;
		}
	}
	return matrix;
}

void printMatrix(int** matrix, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void clearMatrixMem(int** matrix, int row)
{
	for (int i = 0; i < row; i++)
		delete[] matrix[i];
	delete[] matrix;
}
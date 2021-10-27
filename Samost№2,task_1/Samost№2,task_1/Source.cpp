#include <iostream>
#include <conio.h>
#include <time.h>
#include <string>


using namespace std;
int max_element, min_element, i, j;

int* createArray(int);

void FillArray(int*, int);

void outArray(int*, int);

void posElement(int*, int, int);

void findStr(string main, string sub);

void deleteArray(int*);

void searchNumber(int*, int);

void repeatElement(int* array, int size);

int** createMatrix(int rows, int cols);

void fillMatrix(int** matrix, int rows, int cols);

void deleteMatrix(int** matrix, int rows, int cols);

void outMatrix(int** matrix, int rows, int cols);

void transposeMatrix(int** matrix, int rows, int cols);

int main()
{
	srand(time(NULL));
	cout << "Enter a range of values " << endl
		<< "From ";
	cin >> min_element;
	cout << "Before ";
	cin >> max_element;
	cout << "Enter the job number" << endl;
	switch (_getch())
	{
	case '1':
	{
		cout << "Enter the dimensions of the array ";
		int size;
		cin >> size;
		cout << "Enter the number ";
		int num;
		cin >> num;
		posElement(createArray(size), size, num);
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Additional task " << endl;
		string main, sub;
		cout << "Enter the main line ";
		getline(cin, main);
		cout << "Enter the sub line ";
		getline(cin, sub);
		findStr(main, sub);
		break;
	}
	case '2':
	{
		int size;
		cout << "Enter the size of the array ";
		cin >> size;
		searchNumber(createArray(size), size);
		break;
	}
	case '3':
	{
		int size;
		cout << "Enter the size of the array ";
		cin >> size;
		repeatElement(createArray(size), size);
		break;
	}
	case '4':
	{
		cout << "Enter the dimensions of the matrix" << endl;
		int rows, cols;
		cin >> rows >> cols;
		transposeMatrix(createMatrix(rows, cols), rows, cols);
		break;
	}
	default:
	{
		cout << "There is no assignment under this number" << endl;
	}
	}
}


int* createArray(int size)
{
	int* array = new int[size];
	FillArray(array, size);
	return  array;
}

void FillArray(int* array, int size)
{
	for (i = 0;i < size;i++)
	{
		array[i] = rand() % (max_element - min_element + 1) + min_element;
	}
}

void outArray(int* array, int size)
{
	cout << "Array" << endl;
	for (i = 0;i < size;i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

void posElement(int* array, int size, int num)
{

	outArray(array, size);
	j = -1;
	for (i = 0;i < size;i++)
	{
		if (array[i] == num)
		{
			j = i;
			break;
		}
		else
		{
			continue;
		}
	}
	cout << "Number position " << num << " is equal to " << j << endl;
	deleteArray(array);
}

void findStr(string main, string sub)
{
	bool flag1 = false;
	int check;
	for (i = 0;i < main.length();i++)
	{
		if (sub[0] == main[i])
		{
			for (j = 0, check = 0;j < sub.length();j++)
			{
				if (sub[j] == main[i])
				{
					check++;

				}
				else
				{
					break;
				}
				if (j == (sub.length() - 1))
				{
					cout << i - check + 1 << endl;
					flag1 = true;
				}
				i++;
			}
		}
		if (flag1 == true)
		{
			break;
		}
	}
	if (flag1 == false)
	{
		cout << "The string does not contain the given substring " << endl;
	}
}

void deleteArray(int* array)
{
	delete[]array;
}

void searchNumber(int* array, int size)
{
	outArray(array, size);
	cout << "The numbers " << endl;
	for (i = 2; i < size;i++)
	{
		if (array[i] < array[i - 2] - array[i - 1])
		{
			cout << array[i] << "\t";
		}
		else
		{
			continue;
		}
	}
	cout << endl;
	deleteArray(array);
}

void repeatElement(int* array, int size)
{
	int num = 1, max = 0;
	outArray(array, size);
	for (i = 0;i < size;i++)
	{
		if (array[i] == array[i + 1])
		{
			num = 1;
			for (j = i;array[j] == array[j + 1];j++)
			{
				num++;
			}
			if (num > max)
			{
				max = num;
			}
			i = j;
		}
	}
	cout << "Maximum number of repetitions " << max << endl;
	deleteArray(array);
}

void transposeMatrix(int** matrix, int rows, int cols)
{
	int num;
	fillMatrix(matrix, rows, cols);
	outMatrix(matrix, rows, cols);
	int** trans_matrix = createMatrix(cols, rows);
	for (i = 0;i < cols;i++)
	{
		for (j = 0;j < rows;j++)
		{
			trans_matrix[i][j] = matrix[j][i];
		}
	}
	outMatrix(trans_matrix, cols, rows);
	int** trans_matrix_2 = createMatrix(cols, rows);
	for (i = 0;i < cols;i++)
	{
		for (j = 0;j < rows;j++)
		{
			trans_matrix_2[i][j] = matrix[cols - j - 1][rows - i - 1];
		}
	}
	outMatrix(trans_matrix_2, cols, rows);
	deleteMatrix(matrix, rows, cols);
	deleteMatrix(trans_matrix_2, cols, rows);
	deleteMatrix(trans_matrix, cols, rows);
}

int** createMatrix(int rows, int cols)
{
	int** matrix;
	matrix = new int* [rows];
	for (i = 0;i < rows;i++)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}


void fillMatrix(int** matrix, int rows, int cols)
{
	srand(time(NULL));
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			matrix[i][j] = rand() % (max_element - min_element + 1) + min_element;
		}
	}
}

void outMatrix(int** matrix, int rows, int cols)
{
	cout << "Matrix " << endl;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

}

void deleteMatrix(int** matrix, int rows, int cols)
{
	for (i = 0;i < rows;i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
}
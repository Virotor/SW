#include<iostream>
#include <time.h>
#include <iomanip>
#include<math.h>
using namespace std;
int* CreateArray(int);
void SetArray(int, int*);
void printArray(int, int*);
void deleteArray(int*);
void findNumb(int, int, int*);
int createArrayAndFindNumb();
int withDrawDifference();
void findNumbDiffence(int, int*);
int sequenceLength();
void inputArray(int, int*);
int countLength(int, int*);
int transpMatrix();
int** CreateMatrix(int, int);
void SetMatrix(int, int, int**);
void printMatrix(int, int, int**);
void deleteMatrix(int, int**);
int transpMatrixMainDiagon(int, int, int**);
int transpMatrixSideDiagon(int, int, int**);
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "TASK 1: Write a function that will display the position of the first array element equal to the entered number"<<endl<<
		"TASK 2: Write a function that will find all the numbers in the array that are less than the difference between the two previous ones"<<endl<<
		"TASK 3: Write a function that finds the length of the largest sequence of indentical numbers in a row"<<endl<<
		"TASK 4: Transpose the matrix relative to the side and main diagonals"<<endl<<
		"TASK 5: There is no task 5 here, because I`ve had some problems with it)"<<endl<<
		"Select a task to check (from 1 to 4): ";
	int taskNumber;
	cin >> taskNumber;
	switch (taskNumber)
	{
	case 1:
		createArrayAndFindNumb();
		break;
	case 2:
		withDrawDifference();
		break;
	case 3:
		sequenceLength();
		break;
	case 4:
		transpMatrix();
		break;
	default:
		cout << "There is no task with this number ";
	}
	return 0;
}
int* CreateArray(int n)
{
	int* a = new int[n];
	return a;
}
void SetArray(int n, int* a)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 21 - 10;
	}
}
void printArray(int n, int* a)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);

	}
}
void deleteArray(int* a)
{
	delete[] a;
}
void findNumb(int n, int N, int* a)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == N)cout << "The number of the element:" << i << endl;
		if (a[i] == N)break;
	}
}
int createArrayAndFindNumb()
{
	int a, N;
	cout << "Enter the sise of the array:  ";
	cin >> a;
	int* save = CreateArray(a);
	SetArray(a, save);
	printArray(a, save);
	cout << endl;
	cout << "Enter the element which position number you want to know: ";
	cin >> N;
	findNumb(a, N, save);
	deleteArray(save);
	system("pause");
	return a, N;
}
int withDrawDifference()
{
	int a;
	cout << "Enter the size of the array: ";
	cin >> a;
	int* save = CreateArray(a);
	SetArray(a, save);
	printArray(a, save);
	cout << endl << endl;
	findNumbDiffence(a, save);
	deleteArray(save);
	system("pause");
	return a;

}
void findNumbDiffence(int n, int* a)
{
	for (int i = 2; i < n; i++)
	{
		if (a[i - 2] - a[i - 1] > a[i])cout << a[i] << endl;
	}
}
int sequenceLength()
{
	int a;
	cout << "Enter the sise of the array:  ";
	cin >> a;
	int* save = CreateArray(a);
	inputArray(a, save);
	cout << endl;
	countLength(a, save);
	deleteArray(save);
	system("pause");
	return a;
}
void inputArray(int n, int* a)
{
	cout << "Enter the sise of the array manually: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int countLength(int n, int* a)
{
	int Counter = 1, max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			Counter++;
		}
		else
		{
			if (max < Counter) max = Counter;
			Counter = 1;
		}
	}
	cout << "The longest sequence is  " << max << endl;
	return Counter, max;
}
int transpMatrix()
{
	int line, column;
	cout << "Enter the size of the square matrix:";
	cin >> line >> column;
	int** save = CreateMatrix(line, column);
	SetMatrix(line, column, save);
	printMatrix(line, column, save);
	int number;
	cout << "Press 1 if you want to display the transposed matrix along the main diagonal" << endl;
	cout << "Press 2 if you want to display the transposed matrix along the main diagonal" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
		cout << endl << "The transposed matrix along the main diagonal" << endl;
		transpMatrixMainDiagon(line, column, save);
		break;
	case 2:
		cout << endl << "The transposed matrix along the side diagonal" << endl;
		transpMatrixSideDiagon(line, column, save);
		break;
	default:
		cout << "Error.You had to press 1 or 2. Repeat"<<endl;
	}

	printMatrix(line, column, save);
	deleteMatrix(line, save);
	system("pause");
	return line, column;
}
int** CreateMatrix(int n, int k)
{
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[k];
	}
	return a;
}
void SetMatrix(int n, int k, int** a)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			a[i][j] = rand() % 21 - 10;
		}
	}
}
void printMatrix(int n, int k, int** a)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl << endl;
	}

}
void deleteMatrix(int n, int** a)
{
	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}
int transpMatrixMainDiagon(int n, int k, int** a)
{
	int exchange;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			exchange = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = exchange;
		}
	}
	return 	exchange;
}
int transpMatrixSideDiagon(int n, int k, int** a)
{
	int e;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
		{

			e = a[i][j];
			a[i][j] = a[n - j - 1][n - i - 1];
			a[n - j - 1][n - i - 1] = e;
		}
	return e;
}

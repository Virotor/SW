#include<iostream>
using namespace std;
void Fill_Array(int*, int);
void Show_Array(int*, int);
void Serching_index(int*, int, int);
void Less_diference(int*, int);
int Max_length(int*, int);
void Fill_Matrix(int**, int);
void Show_Matrix(int**, int);
void transpose_glav(int**, int);
void transpose_poboch(int**, int);
int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int size_of_array;
	cout << "enter size of array" << "\t";
	cin >> size_of_array;
	int number;
	cout << "enter number to search the index";
	cin >> number;
	int* arr = new int[size_of_array];
	Fill_Array(arr, size_of_array);
	Show_Array(arr, size_of_array);
	Serching_index(arr, size_of_array, number);
	Less_diference(arr, size_of_array);
	cout << endl;
	cout << "Max = " << Max_length(arr, size_of_array);
	int rows;
	cout << endl;
	cout << "number of rows = ";
	cin >> rows;
	int** arr2 = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr2[i] = new int[rows];
	}
	Fill_Matrix(arr2, rows);
	Show_Matrix(arr2, rows);
	cout << endl;
	transpose_glav(arr2, rows);
	cout << endl;
	transpose_poboch(arr2, rows);
	delete[]arr;
	for (int i = 0; i < rows; i++)
	{
		delete[i] arr2;
	}
	delete[] arr2 ;
}
void Fill_Array(int* arr, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		arr[i] = rand() % 2;
	}
}
void Show_Array(int* arr, int size_of_array)
{

	for (int i = 0; i < size_of_array; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Serching_index(int* arr, int size_of_array, int number)
{
	bool flag = true;
	for (int i = 0; i < size_of_array; i++)
	{
		if (arr[i] == number)
		{
			cout << "index = " << i << endl;
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		cout << "there is no such number" << endl;
	}
}
void Less_diference(int* arr, int size_of_array)
{
	for (int i = 0; i < size_of_array - 2; i++)
	{
		if (arr[i] < (arr[i + 1] - arr[i + 2]))
		{
			cout << arr[i] << "\t";
		}
	}
}
int Max_length(int* arr, int size_of_array)
{
	int n = 1;
	int max = 0;
	for (int i = 0; i < size_of_array - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			n++;
		}
		else
		{
			n = 1;
		}
		if (n > max)
		{
			max = n;
		}
	}
	return max;
}
void Fill_Matrix(int** arr2, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr2[i][j] = rand() % 21 - 10;
		}
	}
}
void Show_Matrix(int** arr2, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
}
void transpose_glav(int** arr2, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr2[j][i] << "\t";
		}
		cout << endl;
	}
}
void transpose_poboch(int** arr2, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr2[rows - 1 - j][rows - 1 - i] << "\t";
		}
		cout << endl;
	}
}

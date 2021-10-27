#include<iostream>
using namespace std;
void Fill_Array(int*, int);
void Show_Array(int*, int);
void Serching_index(int*, int,int);
void Less_diference(int*, int);
int Max_length(int*, int);
void Show_Array2(int*, int);
void Fill_Matrix(int**, int);
void Show_Matrix(int**, int);
void Transp_glav(int**, int);
void Transp_poboch(int**, int);
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
	int* arr2 = new int[size_of_array];
	Fill_Array(arr, size_of_array);
	Show_Array(arr, size_of_array);
	Serching_index(arr, size_of_array, number);
	Less_diference(arr, size_of_array);
	cout << endl;
	Show_Array2(arr2, size_of_array);

	cout << "Max = " << Max_length(arr2, size_of_array);
	int rows;
	cout << endl;
	cout << "number of rows = ";
	cin >> rows;
	int** arr3 = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr3[i] = new int[rows];
	}
	Fill_Matrix(arr3, rows);
	Show_Matrix(arr3, rows);
	cout << endl;
	Transp_glav(arr3, rows);
	cout << endl;
	Transp_poboch(arr3, rows);

	delete[]arr;
	delete[]arr2;
	for (int i = 0; i < rows; i++)
	{
		delete[i]arr3;
	}
	delete[]arr3;

}
void Fill_Array(int* arr, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		arr[i] = rand() % 20-10;
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
void Serching_index(int* arr, int size_of_array,int number)
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
	if (flag==true)
	{
		cout << "there is no such number" << endl;
	}
}
void Less_diference(int* arr, int size_of_array)
{
	for (int i = 2; i < size_of_array; i++)
	{
		if (arr[i] < (arr[i - 2] - arr[i - 1]))
		{
			cout << arr[i] << "\t";
		}
	}
}
int Max_length(int* arr2, int size_of_array)
{
	int n = 1;
	int max = 0;
	for (int i = 0; i < size_of_array - 1; i++)
	{
		if (arr2[i] == arr2[i + 1])
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
void Show_Array2(int* arr2, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		cout << "arr2[" << i + 1 << "]=";
		cin >> arr2[i];
	}
}
void Fill_Matrix(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			arr3[i][j] = rand() % 20 - 10;
		}
	}
}
void Show_Matrix(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[i][j] << "\t";
		}
		cout << endl;
	}
}
void Transp_glav(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[j][i] << "\t";
		}
		cout << endl;
	}
}
void Transp_poboch(int** arr3, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr3[rows - 1 - j][rows - 1 - i] << "\t";
		}
		cout << endl;
	}
}

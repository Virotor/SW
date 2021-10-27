#include <iostream>
#include <iomanip>
using namespace std;

int** Matrix_create(int raw, int col)
{
	int i, j;
	int** a = new int* [raw];
	srand(time(0));
	for (i = 0;i < raw;i++)
		a[i] = new int[col];
	for (i = 0;i < raw;i++)
		for (j = 0;j < col;j++)
			a[i][j] = rand() % 21 - 10;
	return (a);
}

void Matrix_print(int raw, int col, int** arr)
{
	int i, j;
	for (i = 0;i < raw;i++)
	{
		for (j = 0;j < col;j++)
			cout << setw(5) << arr[i][j] << ' ';
		cout << endl;
	}
	cout << endl;
}

void Matrix_delete(int raw, int** arr)
{
	for (int i = 0;i < raw;i++)
		delete[]arr[i];
	delete[]arr;
}

int* Array_create(int _size)
{
	int* a = new int[_size];
	srand(time(0));
	for (int i = 0;i < _size;i++)
		a[i] = rand() % 21 - 10;
	return(a);
}

void Array_print(int* a, int _size)
{
	for (int i = 0;i < _size;i++)
		cout << a[i] << ' ';
	cout << endl;
}

int Element_number(int* a, int _size, int el)
{
	int i = 0, num = -1;
	while (i < _size)
	{
		if (el == a[i])
		{
			num = i;
			i = _size;
		}
		else i++;
	}
	return(num);
}

int Max_raw(int* a, int s)
{
	int max = 1, k = 1;
	for (int i = 1;i < s;i++)
	{
		if (a[i] == a[i - 1])
		{
			k++;
		}
		else
		{
			if (k > max)
				max = k;
			k = 1;
		}
	}
	return(max);
}

int** Main_trans(int size, int** mat)
{
	int r;
	for (int i = 0;i < size - 1;i++)
		for (int j = i + 1;j < size;j++)
		{
			r = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = r;
		}
	return(mat);
}

int** Side_trans(int size, int** mat)
{
	int r;
	for (int i = 0;i < size - 1;i++)
		for (int j = 0;j < size;j++)
		{
			if (i + j < size - 1)
			{
				r = mat[i][j];
				mat[i][j] = mat[size - 1 - j][size - 1 - i];
				mat[size - 1 - j][size - 1 - i] = r;
			}
		}
	return(mat);
}

void Element_position()
{
	int size, * array, element;
	cout << "Enter size of array" << endl;
	cin >> size;
	array = Array_create(size);
	Array_print(array, size);
	cout << "Enter the element" << endl;
	cin >> element;
	cout << Element_number(array, size, element) << endl;
	delete[]array;
}

void Numbers_search()
{
	int size, * array, flag = 0;
	cout << "Enter size of array" << endl;
	cin >> size;
	array = Array_create(size);
	Array_print(array, size);
	if (size > 2)
		for (int i = 2;i < size;i++)
		{
			if (array[i] < array[i - 2] - array[i - 1])
			{
				cout << array[i] << ' ';
				flag = 1;
			}
		}
	else cout << "No such numbers" << endl;
	if (flag == 0)
		cout << "No such numbers" << endl;
	delete[]array;
}

void Max_subsequence()
{
	int size;
	cout << "Enter size of array" << endl;
	cin >> size;
	int* array = new int[size];
	for (int i = 0;i < size;i++)
	{
		cout << "a[" << i << "] = ";
		cin >> array[i];
	}
	Array_print(array, size);
	cout << Max_raw(array, size) << endl;
	delete[]array;
}

void Matrix_transposition()
{
	int raw_count, col_count, ** matrix1, ** matrix2, ** matrix3, ** copy;
	cout << "Enter sizes of matrix n,m" << endl;
	cin >> raw_count >> col_count;
	matrix1 = Matrix_create(raw_count, col_count);
	Matrix_print(raw_count, col_count, matrix1);
	copy = Matrix_create(raw_count, col_count);
	for (int i = 0;i < raw_count;i++)
		for (int j = 0;j < col_count;j++)
			copy[i][j] = matrix1[i][j];
	if (raw_count == col_count)
	{
		matrix2 = Main_trans(raw_count, matrix1);
		Matrix_print(raw_count, col_count, matrix2);
		matrix3 = Side_trans(raw_count, copy);
		Matrix_print(raw_count, col_count, matrix3);
	}
}

int main()
{
	int task_number;
	cout << "Enter task number" << endl;
	cin >> task_number;
	switch (task_number)
	{
	case 1:
		Element_position();
		break;
	case 2:
		Numbers_search();
		break;
	case 3:
		Max_subsequence();
		break;
	case 4:
		Matrix_transposition();
	}
}
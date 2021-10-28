#include <iostream>
#include <iomanip>
using namespace std;

int** makematrix(int raw1, int col1)
{
	int i, j;
	int** a = new int* [raw1];
	srand(time(0));
	for (i = 0; i < raw1; i++)
		a[i] = new int[col1];
	for (i = 0; i < raw1; i++)
		for (j = 0; j < col1; j++)
			a[i][j] = rand() % 21 - 10;
	return (a);
}

void printmatrix(int raw2, int col2, int** arr1)
{
	int i, j;
	for (i = 0; i < raw2; i++)
	{
		for (j = 0; j < col2; j++)
			cout << setw(5) << arr1[i][j] << ' ';
		cout << endl;
	}
	cout << endl;
}

void delete1(int raw3, int** arr2)
{
	for (int i = 0; i < raw3; i++)
		delete[]arr2[i];
	delete[]arr2;
}

int* makearray(int size1)
{
	int* a = new int[size1];
	srand(time(0));
	for (int i = 0; i < size1; i++)
		a[i] = rand() % 21 - 10;
	return(a);
}

void printarray(int* a, int size2)
{
	for (int i = 0; i < size2; i++)
		cout << a[i] << ' ';
	cout << endl;
}

int numberofelement(int* a, int size3, int element)
{
	int i = 0, num = -1;
	while (i < size3)
	{
		if (element == a[i])
		{
			num = i;
			i = size3;
		}
		else i++;
	}
	return(num);
}

int maxraw(int* a, int s)
{
	int max = 1, k = 1;
	for (int i = 1; i < s; i++)
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

int** transpositonmain(int size4, int** matr1)
{
	int r;
	for (int i = 0; i < size4 - 1; i++)
		for (int j = i + 1; j < size4; j++)
		{
			r = matr1[i][j];
			matr1[i][j] = matr1[j][i];
			matr1[j][i] = r;
		}
	return(matr1);
}

int** transpositonsecond(int size5, int** matr2)
{
	int r;
	for (int i = 0; i < size5 - 1; i++)
		for (int j = 0; j < size5; j++)
		{
			if (i + j < size5 - 1)
			{
				r = matr2[i][j];
				matr2[i][j] = matr2[size5 - 1 - j][size5 - 1 - i];
				matr2[size5 - 1 - j][size5 - 1 - i] = r;
			}
		}
	return(matr2);
}

void positoinofelement()
{
	int size6, * array, element;
	cout << "Введите размер массива" << endl;
	cin >> size6;
	array = makearray(size6);
	printarray(array, size6);
	cout << "Введите номер элемента" << endl;
	cin >> element;
	cout << numberofelement(array, size6, element) << endl;
	delete[]array;
}

void numberssearch()
{
	int size7, * array, flag = 0;
	cout << "Введите размер массива" << endl;
	cin >> size7;
	array = makearray(size7);
	printarray(array, size7);
	if (size7 > 2)
		for (int i = 2; i < size7; i++)
		{
			if (array[i] < array[i - 2] - array[i - 1])
			{
				cout << array[i] << ' ';
				flag = 1;
			}
		}
	else cout << "Нет таких чисел" << endl;
	if (flag == 0)
		cout << "Нет таких чисел" << endl;
	delete[]array;
}

void maxsequence()
{
	setlocale(0, "rus");
	int size8;
	cout << "Введите размер массива" << endl;
	cin >> size8;
	int* array = new int[size8];
	for (int i = 0; i < size8; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> array[i];
	}
	printarray(array, size8);
	cout << maxraw(array, size8) << endl;
	delete[]array;
}

void transposition()
{
	setlocale(0, "rus");
	int raw, col, ** matrix1, ** matrix2, ** matrix3, ** copy;
	cout << "Введите размеры матрицы" << endl;
	cin >> raw >> col;
	matrix1 = makematrix(raw, col);
	printmatrix(raw, col, matrix1);
	copy = makematrix(raw, col);
	for (int i = 0; i < raw; i++)
		for (int j = 0; j < col; j++)
			copy[i][j] = matrix1[i][j];
	if (raw == col)
	{
		matrix2 = transpositonmain(raw, matrix1);
		printmatrix(raw, col, matrix2);
		matrix3 = transpositonsecond(raw, copy);
		printmatrix(raw, col, matrix3);
		delete1(raw, matrix2);
		delete1(raw, matrix3);
	}
	else cout << "Ошибка" << endl;
	delete1(raw, matrix1);
	delete1(raw, copy);
}


int main()
{
	setlocale(0, "rus");
	int a;
	cout << "Выберите номер  задания" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		positoinofelement();
		break;
	case 2:
		numberssearch();
		break;
	case 3:
		maxsequence();
		break;
	case 4:
		transposition();
		break;
	}
}
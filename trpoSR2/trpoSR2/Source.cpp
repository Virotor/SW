#include<iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int* CreateArray(int);
void SetArray(int, int*);
void printArray(int, int*);
void deleteArray(int*);
int createarrayandfindnumb();
int withDrawDifference();
void findNumbDiffence(int, int*);
int sequencelength();
void inputArray(int, int*);
int countLength(int, int*);
int transponitionMatrix();
int** CreateMatrix(int, int);
void SetMatrix(int, int, int**);
void printMatrix(int, int, int**);
void deleteMatrix(int, int**);
int transpMatrixMainDiagon(int, int, int**);
int transpMatrixSaidDiagon(int, int, int**);

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите номер задане: ";
	int Number;
	cin >> Number;
	switch (Number)
	{
	case 1:
		cout << "ЗАДАНИЕ №1" << endl;
		createarrayandfindnumb();
		break;
	case 2:
		cout << "ЗАДАНИЕ №2" << endl;
		withDrawDifference();
		break;
	case 3:
		cout << "ЗАДАНИЕ №3" << endl;
		sequencelength();
		break;
	case 4:
		cout << "ЗАДАНИЕ №4" << endl;
		transponitionMatrix();
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
		cout << setw(5) << a[i];

	}

}
void deleteArray(int* a)
{
	delete[] a;
}
void findNumber(int n, int N, int* a)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == N)cout << "Номер элемента:" << i << endl;
		if (a[i] == N)break;
	}
}
int createarrayandfindnumb()
{
	int a, N;
	cout << "Введите размер массива ";
	cin >> a;
	int* save = CreateArray(a);
	SetArray(a, save);
	printArray(a, save);
	cout << endl;
	cout << "Введите элемент номер позиции которого хотите вывести ";
	cin >> N;
	findNumber(a, N, save);
	deleteArray(save);
	system("pause");
	return a, N;
}
int withDrawDifference()
{
	int a;
	cout << "Введите размер массива ";
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
int sequencelength()
{
	int a;
	cout << "Введите размер массива ";
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
	cout << "Введите массив вручную:" << endl;
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
	cout << "Самая длиная последовательность равна " << max << endl;
	return Counter, max;
}
int transponitionMatrix()
{
	int line, column;
	cout << "Введите размер квадратной матрицы:";
	cin >> line;
	column = line;
	int** save = CreateMatrix(line, column);
	SetMatrix(line, column, save);
	printMatrix(line, column, save);
	int number;
	cout << "Чтобы вывести транспонированную матрицу по главной диагонали нажмите 1" << endl;
	cout << "Чтобы вывести транспонированную матрицу по побочной диагонали нажмите 2" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
		cout << endl << "Транспонированная матрица относительно главное диагонали" << endl;
		transpMatrixMainDiagon(line, column, save);
		break;
	case 2:
		cout << endl << "Транспонированная матрица относительно побочной диагонали" << endl;
		transpMatrixSaidDiagon(line, column, save);
		break;
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
int transpMatrixSaidDiagon(int n, int k, int** a)
{
	int exchange2;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i - 1; j++)
		{

			exchange2 = a[i][j];
			a[i][j] = a[n - j - 1][n - i - 1];
			a[n - j - 1][n - i - 1] = exchange2;
		}


	return exchange2;
}
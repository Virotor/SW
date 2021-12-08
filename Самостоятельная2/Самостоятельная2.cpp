#include <iostream>
#include <time.h>
#include <iomanip>
#include <math.h>
using namespace std;
int* MakeArray(int);
void SetArray(int , int* );
void printArray(int , int* );
void deleteArray(int*);
void findNumber(int, int, int*);
int Makearrayandfindnumb();
int withDrawDifference();
void findNumbDiffence(int , int* );
int sequencelength();
void inputArray(int , int* );
int countLength(int , int* );
int transponitionMatrix();
int** MakeMatrix(int , int);
void SetMatrix(int , int , int**);
void printMatrix(int, int, int**);
void deleteMatrix(int , int** );
int transpMatrixMainDiagon(int , int , int** );
int transpMatrixSaidDiagon(int , int , int** );
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "1 - Написать функцию, которая будет выводить позицию первого элемента массива, равного введённому числу." << endl;
    cout << "2 - Написать функцию, которая будет находить все числа в массиве, которые меньше разности двух предыдущих." << endl;
    cout << "3 - Написать функцию, которая находит длину наибольшей последовательности одинаковых чисел, идущих подряд." << endl;
    cout << "4 - Транспонировать матрицу относительно побочной и главной диагоналей." << endl;
	cout << "Введите номер задания: ";
	int Number;
	cin >> Number;
	switch (Number)
	{
	case 1: 
		Makearrayandfindnumb();
		break;
	case 2:
		withDrawDifference();
		break;
	case 3:
		sequencelength();
		break;
	case 4:
		transponitionMatrix();
		break;
	default:
		cout << "Вы ввели номер задания которого нету";
	}
	return 0;
}
int* MakeArray(int n)
{
	int* a = new int[n];
	return a;
}
void SetArray(int n, int* a )
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
void findNumber(int n, int N, int* a)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == N)cout << "Номер элемента:" << i << endl;
		if (a[i] == N)break;
	}
}
int Makearrayandfindnumb()
{
	int a, N;
	cout << "Введите размер массива ";
	cin >> a;
	int* save = MakeArray(a);
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
	int* save = MakeArray(a);
	SetArray(a, save);
	printArray(a, save);
	cout << endl<<endl;
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
	int* save = MakeArray(a);
	inputArray(a, save);
	cout << endl;
	countLength(a, save);
	deleteArray(save);
	system("pause");
	return a;
}
void inputArray(int n, int* a)
{
	cout << "Введите массив вручную:"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int countLength(int n, int* a)
{
	int Counter=1 , max=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			Counter++;
		}
		else 
		{
			if (max<Counter) max = Counter;
			Counter = 1;
		}
	}
	cout << "Самая длиная последовательность равна " << max << endl;
	return Counter,max;
}
int transponitionMatrix()
{
	int line, column;
	cout << "Введите размер квадратной матрицы:";
	cin >> line >> column;
	int** save = MakeMatrix(line, column);
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
int** MakeMatrix(int n, int k)
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

// TEST.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
using namespace std;

void fillingArray(int* array, int size)
{
	int k;
	cout << "Введите диапазон значений элемента массива: ";
	cin >> k;
	
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (2 * k + 1) - k;
	}
}


void fillingMatrix(int** array, int cols, int rows)
{
	int k;
	cout << "Введите диапазон значений элемента матрицы: ";
	cin >> k;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			array[i][j] = rand() % (2 * k + 1) - k;
		}
	}
}


void matrixOutput(int** array, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}


void arrayOutput(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}


void findNumb(int* array, int size, int numb)
{
	for (int i = 0; i <= (size - 1); i++)
	{
		if (numb == array[i])
		{
			cout << i + 1 << endl;
			delete[] array;
			break;
		}
		else continue;
	}
}


void raznNumb(int* array, int size)
{
	for (int i = 2; i < size; i++)
	{
		if ((array[i - 2] - array[i - 1]) > array[i])
		{
			cout << array[i] << " ";
		}
	}
	delete[] array;
}


void lengthChainNumber(int* array, int size)
{
	int max = 0;
	int* k = new int[size];
	for (int i = 0; i < size; i++)
	{
		k[i] = 0;
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] == array[j])
			{
				k[i]++;
			}
			else break;
		}

	}
	for (int i = 0; i < size; i++)
		if (max < k[i]) max = k[i];
	cout << "Длина цепочки чисел равна: " << max + 1;
}


void matrixMainDiagonal(int** array, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int tmp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = tmp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}


void matrixSideDiagonal(int** array, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows - 1; j++)
		{
			int tmp = array[i][j];
			array[i][j] = array[rows - j - 1][rows - i - 1];
			array[rows - j][rows - i] = tmp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
}

int main() {
	setlocale(LC_ALL, "rus");
	int number;
	cout << "Введите номер задания : ";
	cin >> number;
	switch (number) {
	case 1:
	{
		int size, numb;
		cout << "Введите размерность массива: ";
		cin >> size;
		int* array = new int[size];
		fillingArray(array, size);
		arrayOutput(array, size);
		cout << "\nВведите номер числа: ";
		cin >> numb;
		findNumb(array, size, numb);
		break;
	}
	case 2:
	{
		int size;
		cout << "Введите размерность массива: ";
		cin >> size;
		int* array = new int[size];
		fillingArray(array, size);
		arrayOutput(array, size);
		cout << endl;
		raznNumb(array, size);
		break;
	}
	case 3:
	{
		int size;
		cout << "Введите размерность массива: ";
		cin >> size;
		int* array = new int[size];
		fillingArray(array, size);
		arrayOutput(array, size);
		cout << endl;
		lengthChainNumber(array, size);
		break;
	}
	case 4:
	{   int rows, cols;
	cout << "Введите количество строк: ";
	cin >> rows;
	cout << "Введите количество столбцов: ";
	cin >> cols;
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}
	fillingMatrix(array, cols, rows);
	matrixOutput(array, cols, rows);
	cout << endl;
	cout << "Транспонированная матрица относительно главной диагонали: \n";
	matrixMainDiagonal(array, cols, rows);
	cout << endl;
	cout << "Транспонированная матрица относительно побочной диагонали: \n";
	matrixSideDiagonal(array, cols, rows);
	for (int i = 0; i < rows; i++)
	{
		delete[] array[i];
	}

	delete[] array;
	break;
	}
	default:
	{

	}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

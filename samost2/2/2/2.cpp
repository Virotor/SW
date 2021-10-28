// 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include<iostream>
using namespace std;
void matrixSideDiagonal(int** arr, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows - 1; j++)
		{
			int tmp = arr[i][j];
			arr[i][j] = arr[rows - j - 1][rows - i - 1];
			arr[rows - j][rows - i] = tmp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void matrixMainDiagonal(int** arr, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void fillingMatrix(int** arr, int cols, int rows)
{
	int k;
	cout << "Введите диапазон значений элемента матрицы: ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (2 * k + 1) - k;
		}
	}
}
void matrixOutput(int** arr, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void fillingArray(int* arr, int size)
{
	int k;
	cout << "Введите диапазон значений элемента массива): ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (2 * k + 1) - k;
	}
}
void arrayOutput(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void findNumb(int* arr, int size, int numb)
{
	for (int i = 0; i <= (size - 1); i++)
	{
		if (numb == arr[i])
		{
			cout << i + 1 << endl;
			delete[] arr;
			break;
		}
		else continue;
	}
}
void raznNumb(int* arr, int size)
{
	for (int i = 2; i < size; i++)
	{
		if ((arr[i - 2] - arr[i - 1]) > arr[i])
		{
			cout << arr[i] << " ";
		}
	}
	delete[] arr;
}
void lengthChainNumber(int* arr, int size)
{
	int max = 0;
	int* k = new int[size];
	for (int i = 0; i < size; i++)
	{
		k[i] = 0;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
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
		int* arr = new int[size];
		fillingArray(arr, size);
		arrayOutput(arr, size);
		cout << "\nВведите число, номер которого хотите найти: ";
		cin >> numb;
		findNumb(arr, size, numb);
		break;
	}
	case 2:
	{
		int size;
		cout << "Введите размерность массива: ";
		cin >> size;
		int* arr = new int[size];
		fillingArray(arr, size);
		arrayOutput(arr, size);
		cout << endl;
		raznNumb(arr, size);
		break;
	}
	case 3:
	{
		int size;
		cout << "Введите размерность массива: ";
		cin >> size;
		int* arr = new int[size];
		fillingArray(arr, size);
		arrayOutput(arr, size);
		cout << endl;
		lengthChainNumber(arr, size);
		break;
	}
	case 4:
	{   int rows, cols;
	cout << "Введите количество строк: ";
	cin >> rows;
	cout << "Введите количество столбцов: ";
	cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	fillingMatrix(arr, cols, rows);
	matrixOutput(arr, cols, rows);
	cout << endl;
	cout << "Транспонированная матрица относительно главной диагонали: \n";
	matrixMainDiagonal(arr, cols, rows);
	cout << endl;
	cout << "Транспонированная матрица относительно побочной диагонали: \n";
	matrixSideDiagonal(arr, cols, rows);
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
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

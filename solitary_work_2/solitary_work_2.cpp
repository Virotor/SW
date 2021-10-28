#include <iostream>
using namespace std;

int* array_gen(int as)
{
	int* arr = new int[as];
	srand(time(NULL));
	cout << "Сгенерированный массив: ";
	for (int i = 0; i < as; i++) 
	{
		arr[i] = rand() % 19 - 9;
		cout << arr[i] << " ";
	}
	return arr;
}

int main()
{
	int q;
	setlocale(LC_ALL, "Rus");
	cout << "						Самостоятельная работа №2" << endl << "Введите номер задания: ";
	tryagain:
	cin >> q;
	switch (q)
	{
	case 1:
		cout << "Задание 1: Позиция первого элемента массива, равного введённому числу." << endl << endl;
		void Task1();
		{
			int as, n;
			cout << "Введите размерность массива: ";
			cin >> as;
			int* arr = array_gen(as);
			cout << endl << "Введите желаемое число: ";
			cin >> n;
			for (int i = 0; i < as; i++)
			{
				if (arr[i] == n)
				{
					cout << "Индекс данного элемента: " << i << endl;
					break;
				}
			}
			delete[] arr;
		}
		break;

	case 2:
		cout << "Задание 2: Элементы массива, которые меньше разности двух предыдущих." << endl << endl;
		void Task2();
		{
			int as, k = 0;
			cout << "Введите размерность массива: ";
			cin >> as;
			int* arr = array_gen(as);
			cout << endl << "Подходящие под условия числа: ";
			for (int i = 2; i < as; i++)
			{
				if (arr[i] < (arr[i - 2] - arr[i - 1]))
				{
					cout << arr[i] << " ";
				}
				else
				{
					k++;
				}
			}
			if (k == as - 2)
			{
				cout << "таких чисел в массиве не существует." << endl;
			}
			delete[] arr;
		}
		break;

	case 3:
		cout << "Задание 3: Наибольшая последовательность одинаковых чисел, идущих подряд." << endl << endl;
		void Task3();
		{
			int as;
			int equals = 1, k = 1;
			cout << "Введите размер массива: ";//Рекомендую сразу вводить большую размерность массива
			cin >> as;
			int* arr = array_gen(as);
			for (int i = 1; i < as; i++)
			{
				if (arr[i] == arr[i - 1] and arr[i] == arr[i + 1])
					k++;
				else if (arr[i] == arr[i - 1] and arr[i] != arr[i + 1])
				{
					k++;
					if (k > equals)
					{
						equals = k;
					}
					k = 1;
				}
			}
			if (equals == 1)
			{
				cout << endl << "В массиве нет ряда одикаковых чисел" << endl;
			}
			else
			{
				cout << endl << "Длина наибольшей последовательности: " << equals << endl;
				delete[] arr;
			}
		}
		break;

	case 4:
		cout << "Задание 4: Транспонирование матрицы." << endl << endl;
		void Task4();
		{
			srand(time(0));
			int column, line;
			cout << "Введите число строк: ";
			cin >> line;
			cout << "Введите число столбцов: ";
			cin >> column;
			cout << "Полученная матрица:" << endl;
			int** mat = new int* [line];
			for (int i = 0; i < line; i++)
			{
				mat[i] = new int[column];
				for (int j = 0; j < column; j++)
				{
					mat[i][j] = rand() % 19 - 9;
				}
			}
			for (int i = 0; i < line; i++)
			{
				for (int j = 0; j < column; j++)
				{
					if (mat[i][j] >= 0) cout << " ";
					cout << mat[i][j] << "  ";
				}
				cout << endl << endl;
			}
			cout << "Транспонирование по главной диагонали: " << endl;
			for (int i = 0; i < column; i++)
			{
				for (int j = 0; j < line; j++)
				{
					if (mat[j][i] >= 0) cout << " ";
					cout << mat[j][i] << "  ";
				}
				cout << endl << endl;
			}
			cout << "Транспонирование по побочной диагонали: " << endl;
			for (int i = column - 1; i > -1; i--)
			{
				for (int j = line - 1; j > -1; j--)
				{
					if (mat[j][i] >= 0) cout << " ";
					cout << mat[j][i] << "  ";
				}
				cout << endl << endl;
			}
			for (int i = 0; i < line; i++)
			{
				delete[] mat[i];
			}
			delete[] mat;
		}
		break;

	default:
		cout << "Неверный номер. Попробуйте ещё раз: ";
		goto tryagain;
	}
}
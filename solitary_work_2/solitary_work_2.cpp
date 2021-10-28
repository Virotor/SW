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

	default:
		cout << "Неверный номер. Попробуйте ещё раз: ";
		goto tryagain;
	}
}
#include <iostream>
#include <ctime>
using namespace std;
int* inputArray(int*, int);
int inputNum();
int choise();
void printArray(int*, int);
void findNumber(int*, int);
void findNumberLessThanDifference(int*, int);
void findMaxLengthOfSequense(int*, int);

int main()
{
	setlocale(0, "rus");
	cout << "Введите размер массива" << endl;
	int size = inputNum();
	int* newArray = new int[size];
	newArray = inputArray(newArray, size);
	printArray(newArray, size);
	while (true)
	{
		switch (choise())
		{
		case 1:
			findNumber(newArray, size);
			break;
		case 2:
			findNumberLessThanDifference(newArray, size);
			break;
		case 3:
			findMaxLengthOfSequense(newArray, size);
			break;
		default:
			break;
		}
	}
	return 0;
}

int* inputArray(int *arr, int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101 - 40;
	}
	return arr;
}

void printArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

// Задание №1

void findNumber(int *arr, int size)
{
	cout << "Введите число для поиска" << endl;
	int num = inputNum();
	int a = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			a = i;
			break;
		}
	}
	if (a == -1)
	{
		cout << "Таких чисел нет" << endl;
	}
	else
	{
		cout << "Позиция первого элемента массива, равного числу " << num << ": " << a << endl;
	}
}

// Задание №2

void findNumberLessThanDifference(int *arr, int size)
{
	cout << "Элементы массива, которые меньше разности двух предыдущих элементов: " << endl;
	int a = 0;
	for (int i = 2; i < size; i++)
	{
		if (arr[i] < (arr[i - 2] - arr[i - 1]))
		{
			cout << arr[i] << endl;
		}
	}
	if (a == 0)
	{
		cout << "Таких элементов нет" << endl;
	}
}

// Задание №3

void findMaxLengthOfSequense(int* arr, int size)
{
	int seq = 1;
	int seq1 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == arr[i - 1]) {
			seq++;
		}
		else
		{
			if (seq1 < seq)
			{
				seq1 = seq;
			}
			seq = 1;
		}
	}
	cout << "Длина максимальной последовательности одинаковых чисел: " << seq1 << endl;
}

// Выбор номера задания, которое нужно выполнить

int choise()
{
	cout << " 1) Поиск первого элемента массива, равного введенному числу" << endl;
	cout << " 2) Поиск чисел в массиве, которые меньше разности двух предыдущих" << endl;
	cout << " 3) Поиск длины наибольшей последовательносии одинаковых чисел, идущих подряд" << endl;
	int var = inputNum();
	return var;
}

int inputNum()
{
	int num;
	while (!scanf_s("%d", &num))
	{
		system("cls");
		rewind(stdin);
		cout << "Введите целое число" << endl;
	}
	return num;
}
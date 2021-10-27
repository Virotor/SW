#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int* inputArray(int*, int);
void printArray(int*, int);
void findNum(int*, int);
int inputInt();
void findNumLessThanDifference(int*, int);
void findMaxLengthOfSequense(int*, int);
int menu();

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите размер массива" << endl;
	int size = inputInt();
	int* myArray = new int[size];
	myArray = inputArray(myArray, size);
	printArray(myArray, size);
	while (true) {
		switch (menu())
		{
		case 1:
			findNum(myArray, size);
			break;
		case 2:
			findNumLessThanDifference(myArray, size);
			break;
		case 3:
			findMaxLengthOfSequense(myArray, size);
			break;
		case 4:
			return 0;
		default:
			break;
		}
	}
	return 0;
}

int* inputArray(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
	return arr;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]=" << arr[i] << endl;
	}
}

void findNum(int* arr, int size) {
	cout << "Введите число для поиска в массиве" << endl;
	int num = inputInt();
	int flag = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num) {
			flag = i;
			break;
		}
	}
	if (flag == -1) {
		cout << "Таких чисел нет в массиве" << endl;
	}
	else {
		cout << "Первое вхождение числа под индексом:" << flag << endl;
	}
}

void findNumLessThanDifference(int* arr, int size) {
	cout << "Элементы массива, которые меньше разности двух предыдущих элементов" << endl;
	int flag = 0;
	for (int i = 2; i < size; i++)
	{
		if (arr[i] < (arr[i - 2] - arr[i - 1])) {
			cout << "a[" << i << "]=" << arr[i] << endl;
		}
	}
	if (flag == 0) {
		cout << "Таких элементов в матрцие нет" << endl;
	}
}

void findMaxLengthOfSequense(int* arr, int size) {
	int sequence = 0;
	int currentSequence = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] == arr[i - 1]) {
			currentSequence++;
		}
		else {
			sequence = currentSequence;
			currentSequence = 0;
		}
	}
	cout << "Длина максимальной последовательности одинаковых чисел в массиве: " << sequence << endl;
}

int inputInt() {
	cout << "Введите число int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		rewind(stdin);
		cout << "Введите целое число" << endl;
	}
	return num;
}

int menu() {
	cout << "1)Поиск первого вхождения числа (task 1)" << endl;
	cout << "2)Поиск всех чисел в массиве, которые меньше разности двух предыдущих (task 2)" << endl;
	cout << "3)Поиск длины наибольшей последовательносии одинаковых чисел, идущих подряд (task 3)" << endl;
	cout << "4)Выход из программы" << endl;
	int choice = inputInt();
	return choice;
}
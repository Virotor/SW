#include <iostream>
#include <time.h>

using namespace std;

int ArrTwo(int*, int);
void ArrThree(int*, int);
void numfinder(int, int*, int);
void LessNumber(int*, int);
int Length(int*, int);


void ArrOne(int*& x, int size)
{
	x = new int[size];
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int size, num;
	cout << "Введите размер массива: "; cin >> size;

	int* a;
	ArrOne(a, size);
	ArrTwo(a, size);
	ArrThree(a, size);


	cout << "/ / / / / Задание 1 / / / / /" << endl;
	cout << endl << "Введите число: ";
	cin >> num;
	numfinder(num, a, size);

	cout << "/ / / / / Задание 2 / / / / /" << endl;
	LessNumber(a, size);

	cout << "/ / / / / Задание 3 / / / / /" << endl;
	cout << "Длина наибольшей последовательности одинаковых чисел: " << Length(a, size) << endl;
	
	return 0;
}



int ArrTwo(int* a, int size)
{
	for (int i = 0; i < size; i++)
	
		a[i] = rand() % 20 - 10;
	
	return *a;
}

void ArrThree(int* a, int size)
{
	for (int i = 0; i < size; i++)
	
		cout << a[i] << "  ";
	
	cout << endl;
}



void numfinder(int num, int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num)

			cout << i << " ";
	}

	cout << endl;
}



void LessNumber(int* a, int size)
{
	for (int i = 0; i < size - 2; i++)
	{
		if (a[i] - a[i + 1] > a[i + 2])

			cout << a[i + 2] << endl;

		else

			if (i == size - 3)

				cout << "Число не существует" << endl;


	}
}

#include<iostream>
#include <time.h>
#include <iomanip>
int* CreateNewArray(int);
void FillInArray(int, int*);
void CoutArray(int, int*);
void DeleteArray(int*);
int NumberOfElement1();
int DifferenceBetweenElements();
int LineOfEqualNumbers();
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите номер задания ";
	int Number, size, number, position, counter, counterincycle, counterincycle3, matrixSize1, matrixSize2;
	int* arr3;
	cin >> Number;
	switch (Number)
	{
	case 1:
		NumberOfElement1();
		break;
	case 2:
		DifferenceBetweenElements();
		break;
	case 3:
		LineOfEqualNumbers();
		break;
	case 4:
		//TransFromMainLineTask();
		break;
	case 5:
		//SpaceBetweenDots();
		break;
	default:
		cout << "Вы ввели номер задания которого неть";
	}
	return 0;
}


int* CreateNewArray(int size)
{
	int* arr = new int[size];
	return arr;
}

void FillInArray(int size, int* arr)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
}

void CoutArray(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(5) << arr[i];

	}

}

void DeleteArray(int* arr)
{
	delete[] arr;
}


int NumberOfElement1()
{
	int size;
	cout << "Введите размер массива" << endl;
	cin >> size;
	int* arr = CreateNewArray(size);
	FillInArray(size, arr);
	CoutArray(size, arr);
	cout << endl << "Введите число, по которому будет проводиться поиск" << endl;
	int number, position = 0, counter = 0;
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			position = i;
			counter = counter++;
			break;
		}

	}
	if (counter != 0)
		cout << "Элемент, равный " << number << " находится на " << position << "-й позиции";
	else cout << "неть такого элемента :(" << endl;
	DeleteArray(arr);
	return size, number;
}


int DifferenceBetweenElements()
{
	int size, counterincycle = 0;
	cout << "Введите размер массива" << endl;
	cin >> size;
	int* arr2 = CreateNewArray(size);
	FillInArray(size, arr2);
	CoutArray(size, arr2);
	cout << endl;
	for (int counter = 0; counter < size - 2; counter++)
	{

		if (arr2[counter] - arr2[counter + 1] > arr2[counter + 2])
		{
			cout << arr2[counter + 2] << endl;
			counterincycle = counterincycle++;
		}
	}
	if (counterincycle == 0)
		cout << "таких чисель неть" << endl;
	DeleteArray(arr2);
	return size;
}


int LineOfEqualNumbers() //третье задание
{
	int* arr3;
	int counter, size, counterincycle3 = 0;
	cout << "Введите размер массива" << endl;
	cin >> size;
	srand(time(0));
	arr3 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr3[i] = 1 + rand() % 2; //небольшой диапозон чтобы был виден результат задания
	}
	CoutArray(size, arr3);
	int counter1, counter2;
	counter1 = 1;
	counter2 = 1;
	for (int i = 0; i < size - 1; i++)
	{
		if (arr3[i] == arr3[i + 1])
		{
			counter2++;
			if (counter2 > counter1) counter1 = counter2;
		}
		else
			counter2 = 1;
	}
	cout << endl << counter1;
	DeleteArray(arr3);
	return size;
}

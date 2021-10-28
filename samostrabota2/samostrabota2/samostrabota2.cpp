#include<stdlib.h>
#include<iostream>
#include<conio.h>

using namespace std;

void fillTheArrayWithRandomNumbers(int* array, int);
void printTheArrayToTheScreen(int* array, int);
int findThePositionOfTheFirstElement(int* array, int, int, int);

void fillTheArrayWithRandomNumbers(int* array, int size)
{
	srand(time(0));
	for (int i = 0;i < size;++i)
	{
		array[i] = rand() % 19 - 9;
	}
}

void printTheArrayToTheScreen(int* array, int size)
{
	cout << "\nArray:" << endl;

	for (int i = 0;i < size;++i)
	{
		cout << array[i] << "\t";
	}

	cout << "\n\n";
}

int findThePositionOfTheFirstElement(int* array, int size, int number, int d)
{
	for (int i = 0; i < size; ++i)
		if (array[i] == number)
		{
			d = i;
			break;
		}

	return d;
}

void printThePositionOfTheFirstElementOfArray()
{
	int sizeOfArray, number, position = 0;

	cout << "\nInput size of array:" << endl;
	cin >> sizeOfArray;

	int* array = new int[sizeOfArray];

	fillTheArrayWithRandomNumbers(array, sizeOfArray);

	printTheArrayToTheScreen(array, sizeOfArray);

	cout << "Input number:" << endl;
	cin >> number;

	position = findThePositionOfTheFirstElement(array, sizeOfArray, number, position);
	cout << "\nPosition is " << position << endl;

	delete[]array;
}

void main()
{
	cout << "Task 1 - press 1, dopolnitelno - press 2, task 2 - press 3,\ntask 3 - press 4, task 4 - press 5, task 5 - press 6 ..." << endl;

	switch (_getch())
	{
	case'1': printThePositionOfTheFirstElementOfArray();break;
	}
}
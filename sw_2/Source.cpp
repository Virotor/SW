#include <iostream>
#include <stdio.h>

using namespace std;

int* Array(int size);
void printArray(int* array, int size);
int positionElements(int* array, int size, int element, int* number);
void subtractElements(int* array, int size);
void sequenceLength(int* array, int size);

int main()
{
	int size;

	cout << "Enter the size if array = ";
	cin >> size;

	int* array = Array(size);

	printArray(array, size);

	int element;
	cout << "Enter the element = ";
	cin >> element;

	int number = 0;
	positionElements(array, size, element, &number);
	cout << "Position of elements = " << number << endl;

	subtractElements(array, size);

	sequenceLength(array, size);


	delete[] array;
}

int* Array(int size)
{
	int* array = new int(size);
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
	return array;
}

void printArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
}

int positionElements(int* array, int size, int element, int* number)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == element)
		{
			(*number) = i;
		}
		else
		{
			(*number) = 0;
		}
	}
	return *(number);
}

void subtractElements(int* array, int size)
{
	int sum = 0;
	int start = 2;
	int i;
	for (i = 0; i < size; i++)
	{
		sum = sum + array[i];
		if (sum > array[i + start])
		{
			cout << "Elements = " << array[i + start] << " ";
		}
	}
	cout << endl;
}

void sequenceLength(int* array, int size)
{
	int maxSequence = 1;
	int sequenceNumber = 1;
	for (int i = 1; i < size; i++)
	{
		if (array[i] == array[i - 1])
		{
			sequenceNumber++;
		}
		else
		{
			sequenceNumber = 1;
		}
		if (sequenceNumber > maxSequence)
		{
			maxSequence = sequenceNumber;
		}
	}
	cout << "Max sequence of length = " << maxSequence;
}

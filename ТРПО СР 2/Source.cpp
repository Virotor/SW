#include<iostream>
#include<windows.h>

using namespace std;

void init1dArray(int*array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 21 - 10;
	}
}

void print1dArray(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << "  ";
	}
}

void findPosition(int* array, int size, int pos)
{
	int flag=0;

	for (int i = 0; i < size; ++i)
	{
		if (pos == array[i])
		{
			cout << "The position of first number " << pos << " is " << i << endl;
			flag++;
			break;
		}
	}
	if (flag = 0)
		cout << "There is no sush element in this array";
}

void delete1dArray(int* array)
{
	delete[]array;
}

int main()
{
	srand(time(NULL));
	int size, number;
	cout << "Enter the size of array: ";
	cin >> size;
	int* array = new int[size];

	init1dArray(array, size);
	print1dArray(array, size);

	cout << "\nEnter the number from array: ";
	cin >> number;

	findPosition(array, size, number);
	
	delete1dArray(array);
}
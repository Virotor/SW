#include <iostream>

using namespace std;

void printLessThenPreviousTwo(int* array, int length);
int* initArray(int length);
void printArray(int* array, int length);

int main()
{
	int length;
	cout << "Enter length of array\n";
	cin >> length;
	srand(time(nullptr));

	int* array = initArray(length);

	printArray(array, length);

	printLessThenPreviousTwo(array, length);
}

void printLessThenPreviousTwo(int* array, int length)
{
	int resoult_length = 0;
    int* resoult_array = new int[length];
	for (int i = 2; i < length; i++)
	{
		if (array[i] < array[i-2] - array[i-1])
		{
			cout << array[i] << " ";
		}
	}
}

int* initArray(int length)
{
	int* array = new int[length];
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 20 - 10;
	}

	return array;
}

void printArray(int* array, int length)
{
	for (int j = 0; j < length; j++)
	{
		cout << array[j] << " ";
	}
	cout << endl;
}
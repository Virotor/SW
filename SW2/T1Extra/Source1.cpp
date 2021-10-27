#include <iostream>
#include<ctime>

using namespace std;

void fillArr(int* arr, unsigned int lengthOfArray)
{
	unsigned int i = 0;
	for (i; i < lengthOfArray; i++)
	{
		arr[i] = 10 - rand() % 21;
	};
};
void outArr(int* arr, unsigned int lengthOfArray)
{
	unsigned int i = 0;
	for (i; i < lengthOfArray; i++)
	{
		cout << arr[i] << " ";
	};
};
void findLength(int* arr, unsigned int lengthOfArray)
{
	unsigned int i = 1, maxLength = 1, buffer = 1;
	for (i; i < lengthOfArray; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			buffer++;
		}
		else
		{
			if (buffer <= maxLength)
			{
				buffer = 1;
			}
			else
			{
				maxLength = buffer;
				buffer = 1;
			};
		};
	};
	cout << maxLength;
};

int main()
{
	srand(time(NULL));
	unsigned int lengthOfArray;
	cout << "Enter length of array:\n > "; cin >> lengthOfArray;
	if (lengthOfArray == 0)
	{
		cout << "Array doesn't exist!";
		return 0;
	};
	int* arr = new int[lengthOfArray];
	fillArr(arr, lengthOfArray);
	cout << "Generated array is:\n";
	outArr(arr, lengthOfArray);
	cout << "\nLength of the longest sequence of numbers: ";
	findLength(arr, lengthOfArray);
	return 0;
}
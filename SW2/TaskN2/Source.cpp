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
void findPos(int* arr, unsigned int lengthOfArray)
{
	unsigned int i = 2;
	bool isPositionExists = 0;
	for (i; i < lengthOfArray; i++)
	{
		if (arr[i] < arr[i-2] - arr[i-1])
		{
			cout << arr[i] << "[" << i << "] ";
			isPositionExists = 1;
		};
	};
	if (isPositionExists == 0)
	{
		cout << "There is no elements!";
	};
};

int main()
{
	srand(time(NULL));
	unsigned int lengthOfArray;
	cout << "Enter length of array:\n > "; cin >> lengthOfArray;
	int* arr = new int[lengthOfArray];
	fillArr(arr, lengthOfArray);
	cout << "Generated array is:\n";
	outArr(arr, lengthOfArray);
	if (lengthOfArray < 3)
	{
		cout << "\nThere are not enought values in array!";
		return 0;
	};
	cout << "\nElements, that lower than difference between 2 previous elements:\n";
	findPos(arr, lengthOfArray);
	return 0;
}
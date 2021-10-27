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
void findPos(int* arr, unsigned int lengthOfArray, int whatToFind)
{
	unsigned int i = 0;
	unsigned int firstPosition = 0;
	bool isPositionExists = 0;
	while (i < lengthOfArray)
	{
		if (arr[i] == whatToFind)
		{
			firstPosition = i;
			isPositionExists = 1;
			i = lengthOfArray;
		};
		i++;
	};
	if (isPositionExists == 0)
	{
		cout << "There is no mentioned elements at array!";
	}
	else
	{
		cout << "Position of mentioned element is: " << firstPosition;
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
	int elementToFind;
	cout << "\nEnter element what you want to find:\n > "; cin >> elementToFind;
	findPos(arr, lengthOfArray, elementToFind);
	return 0;
}
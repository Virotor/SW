#include <iostream>

void makeArray(int*& a, int sizeOfArray);
int fillingArray(int*& a, int sizeOfArray);
void deleteArray(int*&a);
void printArray(int*& a, int sizeofArray);
void findIndexOfCustomNumber(int*& a, int sizeOfArray);

int main()
{
	int enteredNumber,*nameOfArray;
	std::cout << "Input size of array:";
	std::cin >> enteredNumber;
	makeArray(nameOfArray, enteredNumber);
	int maxValue, minValue;
	fillingArray(nameOfArray, enteredNumber );
	printArray(nameOfArray, enteredNumber);
	findIndexOfCustomNumber(nameOfArray, enteredNumber);
	deleteArray(nameOfArray);
	return 0;
}
void makeArray(int*& a, int sizeOfArray)
{
	a = new int[sizeOfArray];
}
int fillingArray(int *&a, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
		a[i] = rand() % 21 -10;
	return *a;
}
void deleteArray(int*& b)
{
	delete[]b;
}
void printArray(int*& b, int sizeofArray)
{
	for (int i = 0; i < sizeofArray; i++)
		std::cout << " " << b[i] << " ";
	std::cout << std::endl;
}
void findIndexOfCustomNumber(int*& a,int sizeOfArray)
{
	int yourNumber;
	std::cout << "Enter your number:";
	std::cin >> yourNumber;
	int index = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (a[i] == yourNumber)
		{
			std::cout << "Index of number is:" << index;
			break;
		}
		index++;
		if (i == sizeOfArray)
			std::cout << "Invalid selection";
	}
}
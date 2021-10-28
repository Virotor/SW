#include <iostream>

void makeArray(int*& a, int sizeOfArray);
int fillingArray(int*& a, int sizeOfArray);
void deleteArray(int*& a);
void printArray(int*& a, int sizeofArray);
void findNumbersInArray(int*& a, int sizeofArray);

int main()
{
	std::cout << "Input size of Array:";
	int sizeOfCustomArray,*w;
	std::cin >> sizeOfCustomArray;
	makeArray(w, sizeOfCustomArray);
	fillingArray(w, sizeOfCustomArray);
	printArray(w, sizeOfCustomArray);
	findNumbersInArray(w, sizeOfCustomArray);
	deleteArray(w);
	return 0;
}
void makeArray(int*& a, int sizeOfArray)
{
	a = new int[sizeOfArray];
}
int fillingArray(int*& a, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
		a[i] = rand() % 21 - 10;
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
void findNumbersInArray(int*& a, int sizeofArray)
{
	std::cout << "Special numbers:";
	for (int i = 2; i < sizeofArray - 1; i++)
	{
		if (a[i] < a[i - 2] - a[i - 1])
			std::cout << " " << a[i];
	}
}

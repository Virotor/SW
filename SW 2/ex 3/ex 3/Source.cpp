#include <iostream>

void makeArray(int*& a, int sizeOfArray);
int fillingArray(int*& a, int sizeOfArray);
void deleteArray(int*& a);
void findLongestLenghtSequenceOfIdenticalNumbers(int*& a, int sizeofArray);

int main()
{
	std::cout << "Input size of Array:";
	int sizeOfCustomArray, * s;
	std::cin >> sizeOfCustomArray;
	makeArray(s, sizeOfCustomArray);
	fillingArray(s, sizeOfCustomArray);
	findLongestLenghtSequenceOfIdenticalNumbers(s, sizeOfCustomArray);
	deleteArray(s);
	return 0;
}
void makeArray(int*& a, int sizeOfArray)
{
	a = new int[sizeOfArray];
}
int fillingArray(int*& a, int sizeOfArray)
{
	std::cout << "How do you want to inject the array?  1-from the keyboard,2-random" << std::endl;
	int number;
	std::cin >> number;
	switch (number)
	{
	case 1:
		for (int i = 0; i < sizeOfArray; i++)
			std::cin >> a[i];
		break;
	default:
	case 2 :
		for (int i = 0; i < sizeOfArray; i++)
		a[i] = rand() % 21 - 10;
		break;
	}
	return *a;
}
void deleteArray(int*& b)
{
	delete[]b;
}
void findLongestLenghtSequenceOfIdenticalNumbers(int*& a, int sizeofArray)
{
	int amount = 0, max = 0;;
	for (int i = 0; i < sizeofArray; i++)
	{
		if (a[i] == a[i + 1])
		{
			amount++;
			if (max < amount)
				max = amount;
		}
		else
			amount = 0;
	}
	std::cout << "Amount of identical elements:" << max+1;
}
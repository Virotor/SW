#include <iostream>

void makeArray(int*& a, int sizeOfArray);
int fillingArray(int*& a, int sizeOfArray);
void deleteArray(int*&a);
void printArray(int*& a, int sizeofArray);
void findIndexOfCustomNumber(int*& a, int sizeOfArray);
void makeArray2(char*& a, int sizeOfArray);
char fillingArray2(char*& a, int sizeOfArray);
void deleteArray2(char*& a);
void findIndexOfCustomPartOfWorld(char*& a, int sizeOfArray);

int main()
{
	srand(time(0));
	int enteredNumber,*nameOfArray;
	std::cout << "Input size of array:";
	std::cin >> enteredNumber;
	makeArray(nameOfArray, enteredNumber);
	int maxValue, minValue;
	fillingArray(nameOfArray, enteredNumber );
	printArray(nameOfArray, enteredNumber);
	findIndexOfCustomNumber(nameOfArray, enteredNumber);
	deleteArray(nameOfArray);
	std::cout << std::endl;
	std::cout << "Additional task:" << std::endl;
	std::cout << "Input size of text:" << std::endl;
	int u;
	char *p;
	std::cin >> u;
	makeArray2(p,u);
	fillingArray2(p,u);
	findIndexOfCustomPartOfWorld(p,u);
	deleteArray2(p);
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
void makeArray2(char*& a, int sizeOfArray)
{
	a = new char[sizeOfArray];
}
char fillingArray2(char*& a, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
	{
		scanf_s("%c", &a[i]);
	}
	return *a;
}
void deleteArray2(char*& a)
{
	delete[]a;
}
void findIndexOfCustomPartOfWorld(char*& a, int sizeOfArray)
{
	int letterNumber;
	char* y;
	std::cout << "Input number of letters"<<std::endl;
	std::cin >> letterNumber;
	makeArray2(y, letterNumber);
	fillingArray2(y, letterNumber);
	int ind = 0, s = 0,i;
		for ( i = 0; i < sizeOfArray - letterNumber; i++)
		{
			for (int g = 0; g < letterNumber; g++)
			{
				if (a[i+g] == y[g])
				{
					s++;
				}
				s = 0;
				if (s == letterNumber)
				{
					std::cout << "Index:" << ind << "-" << ind + letterNumber;
					break;
				}
			}
			ind++;
	    }
		if (i == sizeOfArray - letterNumber)
			std::cout << "There is'nt this part of word here";
}
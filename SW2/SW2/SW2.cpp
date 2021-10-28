#include <iostream>
#include <string>

//Функции выполнения заданий
void searchFirstSelectedElement();
void searchSubstringInString();


//Функции массива
int* initArray(int);
void printArray(int*, int);
void clearArrayMem(int*);


void main()
{
	searchFirstSelectedElement();
	searchSubstringInString();
}


//Функции выполнения заданий
void searchFirstSelectedElement()
{
	std::cout << "Enter array size: ";
	int arraySize = 0;
	std::cin >> arraySize;
	int* array = initArray(arraySize);
	printArray(array, arraySize);
	std::cout << "Enter element: ";
	int element = 0;
	std::cin >> element;
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == element)
		{
			std::cout << "Position of the selected element: " << i << std::endl;
			clearArrayMem(array);
			return;
		}
	}
	std::cout << "There is no selected element here!" << std::endl;
	clearArrayMem(array);
}

void searchSubstringInString()
{
	std::cout << "Enter string: ";
	std::string string;
	std::cin >> string;
	std::cout << "Enter substring: ";
	std::string subString;
	std::cin >> subString;
	int i = 0;
	bool flag = false;
	while (i < string.length())
	{
		int k = 0;
		while (string[i] == subString[k] && k < subString.length() && i < string.length())
		{
			i++;
			k++;
			flag = true;
		}
		if (k == subString.length())
		{
			std::cout << "Substring starts with " << i - k << " number" << std::endl;
			return;
		}
		else if (!flag)
			i++;
		flag = false;
	}
	std::cout << "There is no substring in string" << std::endl;
}


//Функции массива
int* initArray(int arraySize)
{
	srand(time(0));
	int* array = new int[arraySize];
	std::cout << "Enter range of random: ";
	int minValue = -20, maxValue = 40;
	std::cin >> minValue >> maxValue;
	for (int i = 0; i < arraySize; i++)
	{
		array[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
	return array;
}

void printArray(int* array, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void clearArrayMem(int* array)
{
	delete[]array;
}
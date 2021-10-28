#include <iostream>
#include <string>

//Функции выполнения заданий
void searchFirstSelectedElement();


//Функции массива
int* initArray(int);
void printArray(int*, int);
void clearArrayMem(int*);


void main()
{
	searchFirstSelectedElement();
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
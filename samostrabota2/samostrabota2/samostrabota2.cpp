#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

void fillTheArrayWithRandomNumbers(int* array, int);
void printTheArrayToTheScreen(int* array, int);
int findThePositionOfTheFirstElement(int* array, int, int, int);
int findSubstringInString(string, string);
void fillTheArrayWithNumbers(int* array, int);
void findTheLongestSequenceLength(int* array, int);
void findNumbers(int* array, int);

void fillTheArrayWithRandomNumbers(int* array, int size)
{
	srand(time(0));
	for (int i = 0;i < size;++i)
	{
		array[i] = rand() % 19 - 9;
	}
}

void printTheArrayToTheScreen(int* array, int size)
{
	cout << "\nArray:" << endl;

	for (int i = 0;i < size;++i)
	{
		cout << array[i] << "\t";
	}

	cout << "\n\n";
}

int findThePositionOfTheFirstElement(int* array, int size, int number, int d)
{
	for (int i = 0; i < size; ++i)
		if (array[i] == number)
		{
			d = i;
			break;
		}

	return d;
}

int findSubstringInString(string string1, string substring)
{
	int position = 0;

	if (substring == string1)
	{
		while (substring != string1)
		{
			position++;
		}
	}

	return position;
}

void fillTheArrayWithNumbers(int* array, int size)
{
	cout << "\nArray:" << "\n";

	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
	}
}

void findTheLongestSequenceLength(int* array, int size)
{
	int sequence1 = 0, sequence2 = 1;

	for (int i = 0; i < size - 1; ++i)
	{
		if (array[i] == array[i + 1])
			sequence2++;
		else
		{
			if (sequence1 < sequence2)
			{
				sequence1 = sequence2;
			}

			sequence2 = 1;
		}
	}

	cout << "\nThe longest sequence length of the array is " << sequence1 << endl;
}

void findNumbers(int* array, int size)
{
	cout << "\n\nNumbers:" << endl;

	for (int i = 2; i < size; ++i)
		if (array[i] < (array[i - 2] - array[i - 1]))
			cout << array[i] << "  ";

	cout << endl;
}

void printThePositionOfTheFirstElementOfArray()
{
	int sizeOfArray, number, position = 0;

	cout << "\nInput size of array:" << endl;
	cin >> sizeOfArray;

	int* array = new int[sizeOfArray];

	fillTheArrayWithRandomNumbers(array, sizeOfArray);

	printTheArrayToTheScreen(array, sizeOfArray);

	cout << "Input number:" << endl;
	cin >> number;

	position = findThePositionOfTheFirstElement(array, sizeOfArray, number, position);
	cout << "\nPosition is " << position << endl;

	delete[]array;
}

void toFindingSubstringInString()
{
	string string, substring;
	int position = 0;

	cout << "\nInput string:" << endl;
	getline(cin, string);

	cout << "\nInput substring:" << endl;
	getline(cin, substring);

	position = findSubstringInString(string, substring);
	cout << "\nPosition is " << position << endl;
}

void findAllNumbersInAnArrayThatAreLessThanTheDifferenceBetweenTheTwoPreviousOnes()
{
	int sizeOfArray, number;

	cout << "Input size of array:" << endl;
	cin >> sizeOfArray;

	int* array = new int[sizeOfArray];

	fillTheArrayWithRandomNumbers(array, sizeOfArray);

	printTheArrayToTheScreen(array, sizeOfArray);

	findNumbers(array, sizeOfArray);

	delete[]array;
}

void findTheLengthOfTheLongestSequenceOfIdenticalNumbersInARow()
{
	int sizeOfArray;

	cout << "\nInput size of array:" << endl;
	cin >> sizeOfArray;

	int* array = new int[sizeOfArray];

	fillTheArrayWithNumbers(array, sizeOfArray);

	findTheLongestSequenceLength(array, sizeOfArray);

	delete[]array;
}

void main()
{
	cout << "Task 1 - press 1, dopolnitelno - press 2, task 2 - press 3,\ntask 3 - press 4, task 4 - press 5, task 5 - press 6 ..." << endl;

	switch (_getch())
	{
	case'1': printThePositionOfTheFirstElementOfArray(); break;
	case'2': toFindingSubstringInString(); break;
	case'3':findAllNumbersInAnArrayThatAreLessThanTheDifferenceBetweenTheTwoPreviousOnes();
	case'4': findTheLengthOfTheLongestSequenceOfIdenticalNumbersInARow(); break;
	}
}
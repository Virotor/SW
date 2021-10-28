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
void fillTheArrayWithRandomNumbers(int** array, int, int);
void printTheArrayToTheScreen(int** array, int, int);
void transposeArrayRelativeToTheMainDiagonal(int** array, int, int);
void transposeArrayRelativeToTheSideDiagonal(int** array, int, int);
void printTheArrayToTheScreen(char** array, int, int);
double findMaxDistanceBetweenTwoPoints(char** array, int, int);

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

void fillTheArrayWithRandomNumbers(int** array, int numberOfLines, int numberOfColumns)
{
	srand(time(0));
	for (int i = 0;i < numberOfLines; i++)
		for (int j = 0; j < numberOfColumns; j++)
		{
			array[i][j] = rand() % 19 - 9;
		}
}

void printTheArrayToTheScreen(int** array, int numberOfLines, int numberOfColumns)
{
	for (int i = 0;i < numberOfLines; i++)
	{
		cout << endl;

		for (int j = 0; j < numberOfColumns; j++)
		{
			cout << array[i][j] << "\t";
		}

		cout << endl;
	}

	cout << endl;
}

void transposeArrayRelativeToTheMainDiagonal(int** array, int numberOfLines, int numberOfColumns)
{
	if (numberOfLines != numberOfColumns)
		cout << "This array doesn't have the main diagonal" << endl;

	for (int j = 0; j < numberOfColumns; j++)
	{
		int pr = 0;

		for (int i = 0; i < j; i++)
		{
			pr = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = pr;
		}
	}

	cout << endl;

	cout << "Array transposed relative to the main diagonal:" << "\n\n";
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int j = 0; j < numberOfColumns; j++)
			cout << array[i][j] << "\t";

		cout << "\n\n";
	}
}

void transposeArrayRelativeToTheSideDiagonal(int** array, int numberOfLines, int numberOfColumns)
{
	if (numberOfLines != numberOfColumns)
		cout << "This array doesn't have the side diagonal" << endl;

	for (int i = 0; i < numberOfLines;i++)
	{
		int pr = 0;

		for (int j = 0; j < numberOfColumns - 1 - i; j++)
		{
			pr = array[i][j];
			array[i][j] = array[numberOfColumns - 1 - j][numberOfLines - 1 - i];
			array[numberOfColumns - 1 - j][numberOfLines - 1 - i] = pr;
		}
	}

	cout << endl;

	cout << "Array transposed relative to the side diagonal:" << "\n\n";
	for (int i = 0; i < numberOfLines; i++)
	{
		for (int j = 0; j < numberOfColumns; j++)
			cout << array[i][j] << "\t";

		cout << "\n\n";
	}
}

void printTheArrayToTheScreen(char** array, int numberOfLines, int numberOfColumns)
{
	for (int i = 0;i < numberOfLines; i++)
	{
		cout << endl;

		for (int j = 0; j < numberOfColumns; j++)
		{
			cout << '.' << "\t";
		}

		cout << endl;
	}

	cout << endl;
}

double findMaxDistanceBetweenTwoPoints(char** array, int X, int Y)
{
	int x1, y1, x2, y2;
	double distance;

	cout << "\nInput coordinates of the first point:" << endl;
	cin >> x1 >> y1;

	cout << "\nInput coordinates of the second point:" << endl;
	cin >> x2 >> y2;

	distance = sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2)));

	return distance;
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

	cout << "\nInput size of array:" << endl;
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

void transposeArrayRelativeToTheSideAndMainDiagonals()
{
	int** array, n, k;
	cout << "\nInput number of lines and number of columns:" << endl;
	cin >> n >> k;
	cout << "\n";

	array = new int* [n];
	for (int i = 0; i < n; i++)
		array[i] = new int[k];

	fillTheArrayWithRandomNumbers(array, n, k);

	printTheArrayToTheScreen(array, n, k);

	transposeArrayRelativeToTheMainDiagonal(array, n, k);

	transposeArrayRelativeToTheSideDiagonal(array, n, k);

	for (int i = 0; i < n; i++)
		delete[n] array[i];
	delete[] array;
}

void findTheMaximumDistanceBetweenTwoPointsAmongASetOfPoints()
{
	char** array;
	int X, Y;
	double distance;

	cout << "\nInput number of lines and number of columns:" << endl;
	cin >> X >> Y;

	array = new char* [X];
	for (int i = 0; i < X; i++)
		array[i] = new char[Y];

	printTheArrayToTheScreen(array, X, Y);

	distance = findMaxDistanceBetweenTwoPoints(array, X, Y);

	cout << "\nDistance between two points is " << distance << endl;

	for (int i = 0; i < X; i++)
		delete[X] array[i];
	delete[] array;
}



void main()
{
	cout << "Task 1 - press 1, dopolnitelno - press 2, task 2 - press 3,\ntask 3 - press 4, task 4 - press 5, task 5 - press 6 ..." << endl;

	switch (_getch())
	{
	case'1': printThePositionOfTheFirstElementOfArray(); break;
	case'2': toFindingSubstringInString(); break;
	case'3': findAllNumbersInAnArrayThatAreLessThanTheDifferenceBetweenTheTwoPreviousOnes(); break;
	case'4': findTheLengthOfTheLongestSequenceOfIdenticalNumbersInARow(); break;
	case'5': transposeArrayRelativeToTheSideAndMainDiagonals(); break;
	case'6': findTheMaximumDistanceBetweenTwoPointsAmongASetOfPoints(); break;
	}
}
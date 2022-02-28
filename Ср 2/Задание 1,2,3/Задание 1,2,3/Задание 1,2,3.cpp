#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int* inputArray(int*, int);
void printArray(int*, int);
void findNum(int*, int);
int inputInt();
void findNumLessThanDifference(int*, int);
void findMaxLengthOfSequense(int*, int);
int menu();

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Enter the size of the array" << endl;
	int size = inputInt();
	int* myArray = new int[size];
	myArray = inputArray(myArray, size);
	printArray(myArray, size);
	while (true) {
		switch (menu())
		{
		case 1:
			findNum(myArray, size);
			break;
		case 2:
			findNumLessThanDifference(myArray, size);
			break;
		case 3:
			findMaxLengthOfSequense(myArray, size);
			break;
		case 4:
			return 0;
		default:
			break;
		}
	}
	return 0;
}

int* inputArray(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
	return arr;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]=" << arr[i] << endl;
	}
}

void findNum(int* arr, int size) {
	cout << "Enter a number to search in an array" << endl;
	int num = inputInt();
	int flag = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num) {
			flag = i;
			break;
		}
	}
	if (flag == -1) {
		cout << "There are no such numbers in the array" << endl;
	}
	else {
		cout << "The first occurrence of a number under a subscript:" << flag << endl;
	}
}

void findNumLessThanDifference(int* arr, int size) {
	cout << "Array elements that are less than the difference between the two previous elements" << endl;
	int flag = 0;
	for (int i = 2; i < size; i++)
	{
		if (arr[i] < (arr[i - 2] - arr[i - 1])) {
			cout << "a[" << i << "]=" << arr[i] << endl;
		}
	}
	if (flag == 0) {
		cout << "There are no such elements in the matrix" << endl;
	}
}

void findMaxLengthOfSequense(int* arr, int size) {
	int sequence = 0;
	int currentSequence = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] == arr[i - 1]) {
			currentSequence++;
		}
		else {
			sequence = currentSequence;
			currentSequence = 0;
		}
	}
	cout << "Length of the maximum sequence of identical numbers in an array: " << sequence << endl;
}

int inputInt() {
	cout << "Enter the number int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		rewind(stdin);
		cout << "Please enter an integer" << endl;
	}
	return num;
}

int menu() {
	cout << "1)Finding the first occurrence of a number (task 1)" << endl;
	cout << "2)Finding all numbers in an array that are less than the difference between the two previous ones (task 2)" << endl;
	cout << "3)Finding the length of the longest sequence of identical numbers in a row (task 3)" << endl;
	cout << "4)Exiting the program" << endl;
	int choice = inputInt();
	return choice;
}
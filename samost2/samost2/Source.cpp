#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int* CreateArr(int);
void SetArr(int, int*);
void WriteArr(int, int*);
void SearchElement(int, int, int*);
void SearchSpecialNumbers(int, int*);
void SearchTheLongestSequence(int, int*);
void FindPosition() {
	int size, element;
	cout << "Enter the size of array: ";
	cin >> size;
	int* arr = CreateArr(size);
	SetArr(size, arr);
	WriteArr(size, arr);
	cout << "Enter element: ";
	cin >> element;
	SearchElement(size, element, arr);
	delete[] arr;
}
void PrintSpecialNumbers() {
	int size, element;
	cout << "Enter the size of array: ";
	cin >> size;
	int* arr = CreateArr(size);
	SetArr(size, arr);
	WriteArr(size, arr);
	SearchSpecialNumbers(size, arr);
	delete[] arr;
}
void TheLongestSequence() {
	int size, element;
	cout << "Enter the size of array: ";
	cin >> size;
	size = abs(size);
	int* arr = CreateArr(size);
	SetArr(size, arr);
	WriteArr(size, arr);
	SearchTheLongestSequence(size, arr);
	delete[] arr;
}
int main() {
	srand(time(NULL));
	int taskNumber;
	cout << "Enter the task number: ";
	cin >> taskNumber;
	switch (taskNumber) {
	case 1:
		FindPosition(); break;
	case 2:
		PrintSpecialNumbers(); break;
	case 3:
		TheLongestSequence(); break;
	default: break;
	}
	return 0;
}
int* CreateArr(int size) {
	int* arr = new int[size];
	return arr;
}
void SetArr(int size, int* arr) {
	for (int counter = 0; counter < size; counter++) {
		arr[counter] = rand() % 21 - 10;
	}
}
void WriteArr(int size, int* arr) {
	for (int counter = 0; counter < size; counter++) {
		cout << arr[counter] << " ";
	}
	cout << endl;
}
void SearchElement(int size, int element, int* arr) {
	bool b = false;
	int counter;
	for (counter = 0; counter < size; counter++) {
		if (element == arr[counter]) {
			b = true;
			break;
		}
	}
	if (b) {
		cout << "Position of the element = " << counter;
	}
	else {
		cout << "There is no such an element in this array ";
	}
}
void SearchSpecialNumbers(int size, int* arr) {
	int counter2 = 2;
	for (counter2; counter2 < size; counter2++)
		if (arr[counter2] < arr[counter2 - 2] - arr[counter2 - 1]) {
			cout << arr[counter2] << " ";
		}
	cout << endl;
}
void SearchTheLongestSequence(int size, int* arr) {
	int counter = 0;
	int length = 0;
	int maxLength = 0;
	for (counter; counter < size; counter++) {
		length = 0;
		while (arr[counter] == arr[counter + 1]) {
			length += 1;
			arr[counter] += 1;
		}
		if (length > maxLength) {
			maxLength = length;
		}
	}
	cout << "The longest sequence is: " << maxLength + 1;
}
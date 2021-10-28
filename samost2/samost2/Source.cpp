#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int* CreateArr(int);
void SetArr(int, int*);
void WriteArr(int, int*);
void SearchElement(int, int, int*);
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
int main() {
	srand(time(NULL));
	int taskNumber;
	cout << "Enter the task number: ";
	cin >> taskNumber;
	switch (taskNumber) {
	case 1:
		FindPosition(); break;
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
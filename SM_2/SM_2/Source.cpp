#include<iostream>
#include<ctime>
using namespace std;

void duplicateArray(int* arr, int size, int interval, int min, int max);
void inputArray(int* arr, int size, int min, int interval);
void printArray(int* arr, int size);
void matrix();


int main() {
	cout << "Exercises 1:\n";
	srand(time(NULL));
	int size;
	cout << "Enter the size of the array "; cin >> size;
	if (size <= 0) {
		cout << "Invalid numeric input";
	}
	else {

		int* arr = new int[size];

		int interval, min, max;

		cout << "Enter minimum element : "; cin >> min;
		cout << "Enter the maximum element : "; cin >> max;

		if (min > max) {
			cout << "Invalid numeric input";
		}
		else {

			interval = (max - min + 1);

			inputArray(arr, size, min, interval);
			printArray(arr, size);
		}

		cout << endl;
		int s = 0, numberFind;
		cout << "Enter the item you want to find "; cin >> numberFind;
		for (int i = 0; i < size; i++) {
			if (arr[i] == numberFind) {
				s++;
				cout << "The index of the element to be searched for = " << i;
				break;
			}
		}
		if (s == 0) {
			cout << "There is no required element in the array";
		}
		cout << endl;
		system("pause");
		duplicateArray(arr, size, interval, min, max);
	}
}

void duplicateArray(int* arr, int size, int interval, int min, int max) {

	cout << "\n\nExercises 2:\n";

	inputArray(arr, size, min, interval);
	printArray(arr, size);

	int amount = 0;
	for (int i = 2; i < size; i++) {
		if (arr[i - 2] - arr[i - 1] > arr[i]) {
			amount++;
		}
	}

	if (amount > 0) {
		cout << endl << " Numbers that are less than the difference between the two previos: ";
		for (int i = 2; i < size; i++) {
			if (arr[i - 2] - arr[i - 1] > arr[i]) {
				cout << arr[i] << " ";
			}
		}
	}

	else {
		cout << " There is no number that is less than the previous two " << endl;
	}

	system("pause");
}

void inputArray(int* arr, int size, int min, int interval) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % interval + min;
	}
}

void printArray(int* arr, int size) {
	cout << "Your massive: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
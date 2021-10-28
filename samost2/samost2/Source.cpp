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
int** CreateMatrix(int, int);
void DeleteMatrix(int, int**);
void PrintMatrix(int, int, int**);
void TransposeMatrix(int, int, int**);
double DistanceSearch(int, int**);
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
void Transpositioning() {
	int line, column;
	cout << "Enter amount of columns: ";
	cin >> column;
	cout << "Enter amount of lines: ";
	cin >> line;
	cout << "Matrix:" << endl;
	int** arr = CreateMatrix(line, column);
	CreateMatrix(line, column);
	PrintMatrix(line, column, arr);
	cout << endl;
	TransposeMatrix(line, column, arr);
	DeleteMatrix(line, arr);
}
void Distance() {
	int colCoord, line = 2;

	do {
		cout << "Enter amount of dots: ";
		cin >> colCoord;
	} while (colCoord < 2);
	int** arr = CreateMatrix(line, colCoord);
	CreateMatrix(line, colCoord);
	PrintMatrix(line, colCoord, arr);
	double maxDistance = DistanceSearch(colCoord, arr);
	cout << "Distance is: " << maxDistance;
	DeleteMatrix(line, arr);
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
	case 4:
		Transpositioning(); break;
	case 5:
		Distance(); break;
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
int** CreateMatrix(int line, int column) {
	int** arr = new int* [line];
	for (int counter = 0; counter < line; counter++) {
		arr[counter] = new int[column];
	}
	for (int counter2 = 0; counter2 < line; counter2++) {
		for (int counter3 = 0; counter3 < column; counter3++) {
			arr[counter2][counter3] = rand() % 21 - 10;
		}
	}
	return arr;
}
void DeleteMatrix(int line, int** arr) {
	for (int counter = 0; counter < line; counter++) {
		delete[] arr[counter];
	}
	delete[]arr;
}
void PrintMatrix(int line, int column, int** arr) {
	for (int counter4 = 0; counter4 < line; counter4++) {
		for (int counter5 = 0; counter5 < column; counter5++) {
			cout << setw(5) << arr[counter4][counter5];
		}
		cout << endl;
	}
}
void TransposeMatrix(int line, int column, int** arr) {
	cout << "Main diagonal transposition: " << endl;
	int** arr1 = new int* [column];
	for (int counter6 = 0; counter6 < column; counter6++) {
		arr1[counter6] = new int[line];
	}
	for (int counter = 0; counter < column; counter++) {
		for (int counter2 = 0; counter2 < line; counter2++) {
			arr1[counter][counter2] = arr[counter2][counter];
			cout << setw(5) << arr1[counter][counter2];
		}
		cout << endl;
	}
	cout << "Side diagonal transposition: " << endl;
	int** arr2 = new int* [column];
	for (int counter7 = 0; counter7 < column; counter7++) {
		arr2[counter7] = new int[line];
	}
	for (int counter3 = 0; counter3 < column; counter3++) {
		for (int counter4 = 0; counter4 < line; counter4++) {
			arr2[counter3][counter4] = arr[line - 1 - counter4][column - 1 - counter3];
			cout << setw(5) << arr2[counter3][counter4];
		}
		cout << endl;
	}
	for (int counter8 = 0; counter8 < column; counter8++) {
		delete[] arr1[counter8];
	}
	delete[]arr1;
	for (int counter9 = 0; counter9 < column; counter9++) {
		delete[] arr2[counter9];
	}
	delete[]arr2;
}
double DistanceSearch(int column, int** arr) {

	double xDistance, yDistance, totalDistance, maxDist = 0;
	for (int index = 0; index < column - 1; index++) {
		int index2 = 1;
		while (index + index2 < column) {
			xDistance = (arr[0][index] - arr[0][index + index2]) * (arr[0][index] - arr[0][index + index2]);
			yDistance = (arr[1][index] - arr[1][index + index2]) * (arr[1][index] - arr[1][index + index2]);
			totalDistance = sqrt(xDistance + yDistance);
			if (totalDistance > maxDist) {
				maxDist = totalDistance;
			}
			index2++;
		}
	}
	return maxDist;
}
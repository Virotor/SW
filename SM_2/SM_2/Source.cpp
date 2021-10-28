#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;


void duplicateArray(int* arr, int size, int interval, int min, int max);
void translateArray(int* arr, int size, int interval, int min, int max);
void inputArray(int* arr, int size, int min, int interval);
void printArray(int* arr, int size);
void distanceBetweenTwoPoints();
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
	translateArray(arr, size, interval, min, max);
}


void translateArray(int* arr, int size, int interval, int min, int max) {

	cout << "\n\nExercises 3:\n";
	inputArray(arr, size, min, interval);
	printArray(arr, size);

	int s = 2;
	for (int i = 0; i < size; i++) {
		if (arr[i] == arr[i + 1] && arr[i - 1] == arr[i]) {
			s++;
			if (arr[i] != arr[i + 1] && arr[i - 1] != arr[i]) {
				break;
			}
		}

	}

	if (s == 2) {
		cout << "There is no maximum length of consecutively identical numbers in a row " << endl;
	}
	else {
		cout << endl << "Length of the longest sequence of identical numbers, in a row " << s << endl;
	}

	delete[]arr;
	system("pause");
	matrix();
}

void matrix() {
	int row, column, min, max, interval;
	cout << "\n\nExercises 4:" << endl;
	cout << "Enter the number of rows "; cin >> row;
	cout << "Enter the number of columns "; cin >> column;

	if (row <= 0 || column <= 0)
		cout << "Non-existent matrix ";
	else {

		cout << "Minimum element  ="; cin >> min;
		cout << "Maximum element  ="; cin >> max;
		if (max < min) cout << "Invalid input  \n";
		else {

			int** matrix = new int* [row];
			for (int i = 0; i < row; i++) {
				matrix[i] = new int[column];
			}

			interval = (max - min + 1);

			cout << "Matrix:\n";
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrix[i][j] = rand() % interval + min;
					cout << matrix[i][j] << "\t";
				}
				cout << endl;
			}

			cout << "\nTranspose a matrix along the main diagonal:\n";
			for (int i = 0; i < column; i++) {
				for (int j = 0; j < row; j++) {
					cout << matrix[j][i] << "\t";
				}
				cout << endl;
			}

			cout << "Transpose a matrix along the side diagonal:\n";
			for (int i = column - 1; i > -1; i--) {
				for (int j = row - 1; j > -1; j--) {
					cout << matrix[j][i] << "\t";
				}
				cout << endl;
			}
		}
	}
	distanceBetweenTwoPoints();
}

void distanceBetweenTwoPoints() {

	int row;
	cout << "\n\nExercises 5:" << endl;
	cout << "Enter the number of points: "; cin >> row;

	int** matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[2];
	}

	cout << "Matrix:\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 2; j++) {
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}

	bool checkX = false, checkY = false;
	double distPoints, distSavePoints = -1;
	int delX, delY;
	for (int i = 0; i < row; i++) {
		for (int k = 1; k < row; k++) {
			for (int j = 0; j < 2; j++) {
				if (j == 0) {
					delX = 0;
					delX = matrix[i][j] - matrix[k][j];
					checkX = true;
				}
				if (j == 1) {
					delY = 0;
					delY = matrix[i][j] - matrix[k][j];
					checkY = true;
				}
				if (checkY == true && checkX == true) {
					distPoints = sqrt(pow(delX, 2) + pow(delY, 2));
					if (distSavePoints < distPoints) distSavePoints = distPoints;
				}

			}
		}
	}

	cout << "Max distance two points: " << distSavePoints;
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


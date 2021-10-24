#include<iostream>
#include<ctime>
#include<algorithm>
#include <iomanip>
#include <cstdlib>
using namespace std;

void task1();
void task2();
void task3();
void task4();

int main() {
	task1();
	task2();
	task3();
	task4();
	system("pause");
	return 0;
}

void task1() {
	int row, column, min, max, interval;
	srand(time(NULL));
	cout << "Task number 1" << endl;
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

			for (int i = 0; i < row; i++) {
				delete[]matrix[i];
			}

			delete[]matrix;
			system("pause");
		}
	}
}

void task2() {
	int size, min, max, interval;
	double sum = 0, srednee;
	cout << endl << "Task number 2  " << endl;
	cout << "Enter the size of the array  "; cin >> size;
	if (size <= 0) cout << "Invalid input  \n";
	else {
		cout << "Enter minimum element : "; cin >> min;
		cout << "Enter the maximum element : "; cin >> max;

		if (max < min)cout << "Invalid input ";
		else {

			int* arr = new int[size];

			interval = (max - min + 1);
			for (int i = 0; i < size; i++) {
				arr[i] = rand() % interval + min;
				cout << arr[i] << " ";
				sum += arr[i];
			}

			srednee = sum / size;
			cout << "\nThe sum of the array elements is : " << sum;
			cout << "\nAverage value of array elements  = " << srednee << endl;

			delete[]arr;
			system("pause");
		}
	}
}

void task3() {
	int row_1, col_1, row_2, col_2, row_3 = 0, col_3 = 0, newI, i, j, min, max, multiply = 1;
	cout << "\n Task number 3 \n";
	cout << "Enter the number of rows of the first matrix  : "; cin >> row_1;
	cout << "Enter the number of columns of the first matrix : "; cin >> col_1;
	cout << "Enter the number of rows of the second matrix : "; cin >> row_2;
	cout << "Enter the number of columns of the second matrix : "; cin >> col_2;
	cout << "Minimum element : "; cin >> min;
	cout << "Maximum element : "; cin >> max;

	if (min > max) {
		cout << "Invalid input " << endl;
		system("pause");
	}

	if (row_1 <= 0 || col_1 <= 0 || row_2 <= 0 || col_2 <= 0) {
		cout << "Non-existent matrix   " << endl;
		system("pause");
	}
	else {
		row_3 = row_1;
		col_3 = col_2;

		int** firstMatrix = new int* [row_1];
		int** secondMatrix = new int* [row_2];
		int** newMatrix = new int* [row_3];

		cout << endl;
		cout << "First matrix : " << endl;
		for (i = 0; i < row_1; i++) {
			firstMatrix[i] = new int[col_1];
			for (j = 0; j < col_1; j++) {
				firstMatrix[i][j] = rand() % (max - min + 1) + min;
				cout << setw(3) << firstMatrix[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		cout << "Second matrix: " << endl;
		for (i = 0; i < row_2; i++) {
			secondMatrix[i] = new int[col_2];
			for (j = 0; j < col_2; j++) {
				secondMatrix[i][j] = rand() % (max - min + 1) + min;
				cout << setw(3) << secondMatrix[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		if (col_1 != row_2) {
			cout << "Matrices cannot be multiplied !" << endl;
		}
		else {
			cout << " Result matrix :\n";
			for (i = 0; i < row_3; i++) {
				newMatrix[i] = new int[col_3];
				for (j = 0; j < col_3; j++) {
					newMatrix[i][j] = 0;
					for (newI = 0; newI < row_3; newI++) {
						newMatrix[i][j] += firstMatrix[i][newI] * secondMatrix[newI][j];
					}
				}
			}
			for (i = 0; i < row_3; i++) {
				for (j = 0; j < col_3; j++) {
					cout << setw(3) << newMatrix[i][j] << " ";
				}
				cout << endl;

			}
			for (i = 0; i < row_3; i++) {
				delete[] newMatrix[i];
			}
			delete[] newMatrix;
		}

		for (i = 0; i < row_1; i++) {
			delete[] firstMatrix[i];
		}
		delete[] firstMatrix;

		for (i = 0; i < row_2; i++) {
			delete[] secondMatrix[i];
		}
		delete[] secondMatrix;
		system("pause");
	}
}

void task4() {
	int size, min, max, interval;
	double sum = 0, srednee;
	cout << endl << "\nTask number 4  " << endl;
	cout << "Enter the size of the array  "; cin >> size;
	if (size <= 0) cout << "Invalid input  ";
	else {
		cout << "Enter minimum element: "; cin >> min;
		cout << "Enter the maximum element : "; cin >> max;

		if (max < min) cout << "Invalid input \n";
		else {

			int* arr = new int[size];

			interval = (max - min + 1);
			for (int i = 0; i < size; i++) {
				arr[i] = rand() % interval + min;
			}

			cout << "Source array: " << endl;
			for (int i = 0; i < size; i++) {
				cout << arr[i] << " ";
			}
			cout << "\nArray without repeating elements : ";
			for (int i = 0; i < size; i++) {
				for (int j = i + 1; j < size; j++) {
					if (arr[i] == arr[j]) {
						for (int k = j; k < size - 1; k++) {
							arr[k] = arr[k + 1];
						}
						size--;
						j--;
					}
				}
				cout << arr[i] << " ";
			}
			cout << endl;

			sort(arr, arr + size);
			cout << "Sorted array : ";
			for (int i = 0; i < size; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
			cout << "Median of the array  = " << arr[size / 2];
			cout << endl;
		}
	}
}

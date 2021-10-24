#include<iostream>
#include<ctime>
#include<algorithm>
#include <iomanip>
#include <cstdlib>
using namespace std;

void task1();

int main() {
	task1();
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
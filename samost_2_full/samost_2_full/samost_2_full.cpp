#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int enterNumber() {
	int n; cout << "Enter number of elements="; cin >> n;
	if (n == 0 || n < 0) {
		cout << "Error" << endl;
		exit(0);
	}
	return n;
}

int* createArr(int n) {
	int min; cout << "Enter min element="; cin >> min;
	int max; cout << "Enter max element="; cin >> max;
	if (max < min) {
		cout << "Error" << endl;
		exit(0);
	}
	int* mass = new int[n];
	for (int i = 0; i < n; i++) {
		mass[i] = rand() % (max - min + 1) + min;
		cout << mass[i] << " ";
	}
	cout << endl;
	return mass;
}

void task1() {
	cout << "Task 1 start" << endl;
	int n = enterNumber();
	int* arr = createArr(n);
	int elem; cout << "Enter number, that you want find="; cin >> elem;
	for (int i = 0; i < n; i++) {
		if (arr[i] == elem) {
			cout << "Position of number " << elem << " is " << i << endl;
			break;
		}
		if (i == n - 1 && arr[i] != elem) {
			cout << "No elements" << endl;
		}
	}
	cout << "Task 1 completed" << endl << endl;
}

void task2() {
	cout << "Task 2 start" << endl;
	int n = enterNumber();
	int* arr = createArr(n);
	for (int i = 2; i < n; i++) {
		if (arr[i] < arr[i - 1] - arr[i - 2]) {
			cout << arr[i] << " ";
		}
		if (i == n - 1 && arr[i] >= arr[i - 1] - arr[i - 2]) {
			cout << "No that elements";
			break;
		}
	}
	cout << endl << "Task 2 completed" << endl << endl;
}

void task3() {
	cout << "Task 3 start" << endl;
	int n = enterNumber();
	int* mass = createArr(n);
	int length = 1;
	int maxLength = 1;
	for (int i = 0; i < n; i++) {
		if (mass[i] == mass[i - 1] && i == n - 1) {
			length++;
			maxLength = length;
			break;
		}
		if (mass[i] == mass[i - 1]) length++;
		else {
			if (length >= maxLength) {
				maxLength = length;
				length = 1;
			}
		}
	}
	cout << "Max length=" << maxLength << endl;
	cout << "Task 3 completed" << endl << endl;
}

void task4() {
	cout << "Task 4 start" << endl;
	int column; cout << "Enter number of columns="; cin >> column;
	int str; cout << "Enter number of strings="; cin >> str;
	if (column <= 0 || str <= 0) {
		cout << "Error" << endl;
		exit(0);
	}

	int min; cout << "Enter min element="; cin >> min;
	int max; cout << "Enter max element="; cin >> max;
	if (min > max) {
		cout << "Error" << endl;
		exit(0);
	}

	int** matrix = new int* [str];
	for (int i = 0; i < str; i++) {
		matrix[i] = new int[column];
		for (int j = 0; j < column; j++) {
			matrix[i][j] = rand() % (max - min + 1) + min;
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;

	cout << "Trans matrix along main diagonal:" << endl << endl;
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < str; j++) {
			cout << setw(4) << matrix[j][i];
		}
		cout << endl;
	}
	cout << endl;

	cout << "Trans matrix along side diagonal:" << endl << endl;
	for (int i = column - 1; i >= 0; i--) {
		for (int j = str - 1; j >= 0; j--) {
			cout << setw(4) << matrix[j][i];
		}
		cout << endl;
	}
	cout << endl << "Task 4 completed" << endl << endl;
}

void task5() {
	cout << "Task 5 start" << endl;
	int n = enterNumber();
	int xMin; cout << "Enter min coordinate x="; cin >> xMin;
	int xMax; cout << "Enter max coordinate x="; cin >> xMax;
	if (xMax < xMin) {
		cout << "Error" << endl;
		exit(0);
	}

	int yMin; cout << "Enter min coordinate y="; cin >> yMin;
	int yMax; cout << "Enter max coordinate y="; cin >> yMax;
	if (yMax < yMin) {
		cout << "Error" << endl;
		exit(0);
	}

	cout << endl;
	cout << setw(10) << "n" << setw(10) << "X" << setw(10) << "Y" << endl;
	double** coordinate = new double* [n];
	for (int i = 0; i < n; i++) {
		coordinate[i] = new double[2];
		coordinate[i][0] = (rand() % (xMax - xMin + 1) + xMin) / double(rand() % (xMax - xMin + 1) + xMin);
		cout << setw(10) << i << setw(10) << coordinate[i][0];
		coordinate[i][1] = (rand() % (yMax - yMin + 1) + yMin) / double(rand() % (yMax - yMin + 1) + yMin);
		cout << setw(10) << coordinate[i][0] << endl;
	}
	cout << endl;
	double minLength = sqrt(pow(coordinate[0][0] - coordinate[1][0], 2) + pow(coordinate[0][1] - coordinate[1][1], 2));
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			double length = sqrt(pow(coordinate[i][0] - coordinate[j][0], 2) + pow(coordinate[i][1] - coordinate[j][1], 2));
			if (length <= minLength) {
				minLength = length;
			}
		}
	}
	cout << endl << "Min length=" << minLength << endl;
	cout << "Task 5 completed" << endl;
}

int main() {
	srand(time(0));
	task1();
	task2();
	task3();
	task4();
	task5();

	system("pause");
	return 0;
}
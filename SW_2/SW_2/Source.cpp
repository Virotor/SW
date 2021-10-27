#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void inputArray(int* positionArray, int size, int max, int min) {
	for (int i = 0; i < size; i++) {
		positionArray[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* positionArray, int size) {
	cout << " Your massive: ";
	for (int i = 0; i < size; i++) {
		cout << positionArray[i] << " ";
	}
}

void positionWithdrawal(int* positionArray, int size, int max, int min) {
	int positionNumber, j = 0;
	cout << " \n Input number of which you want to know the position in the array: "; cin >> positionNumber;
	for (int i = 0; i < size; i++) {
		if (positionArray[i] == positionNumber) {
			j++;
			cout << " Your number " << positionNumber << " on the " << i << " position " << endl;
			break;
		}
	}
	if (j == 0) {
		cout << " Your number is not in your array" << endl;
	}
	cout << endl;
	delete[] positionArray;
}

void differenceBetweenTwoPrevios(int* previosArray, int size, int max, int min) {
	int j = 0;
	for (int i = 2; i < size; i++) {
		if (previosArray[i - 2] - previosArray[i - 1] > previosArray[i]) {
			j++;
		}
	}
	if (j > 0) {
		cout << endl << " Numbers that are less than the difference between the two previos: ";
		for (int i = 2; i < size; i++) {
			if (previosArray[i - 2] - previosArray[i - 1] > previosArray[i]) {
				cout << previosArray[i] << " ";
			}
		}
	}
	else {
		cout << endl << " There is no number that is less than the previous two " << endl;
	}
	cout << endl;
	delete[] previosArray;
}

int main() {
	srand(time(0));
	int size, min, max, rows, cols, minMatrix, maxMatrix;

	cout << " Task 1 " << endl;
	cout << " Input size of 'position' massive: "; cin >> size;
	cout << " Input minimum of your random range: "; cin >> min;
	cout << " Input maximum of your random range: "; cin >> max;
	if (size > 0) {
		int* positionArray = new int[size];
		inputArray(positionArray, size, max, min);
		printArray(positionArray, size);
		positionWithdrawal(positionArray, size, max, min);
	}
	else if (size < 0) {
		cout << " Size of massive must be natural number " << endl;
	}
	else if (min > max) {
		cout << " Minimum more than maximum " << endl;
	}

	cout << " Task 2 " << endl;
	cout << " Input size of 'previos' massive: "; cin >> size;
	cout << " Input minimum of your random range: "; cin >> min;
	cout << " Input maximum of your random range: "; cin >> max;
	if (size > 0) {
		int* previosArray = new int[size];
		inputArray(previosArray, size, max, min);
		printArray(previosArray, size);
		differenceBetweenTwoPrevios(previosArray, size, max, min);
	}
	else if (size < 0) {
		cout << " Size of massive must be natural number " << endl;
	}
	else if (min > max) {
		cout << " Minimum more than maximum " << endl;
	}
	system("pause");
	return 0;
}
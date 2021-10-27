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

void longestSequenceLength(int* sequenceArray, int size, int max, int min) {
	int amount = 1, proverkaAmount = 0;
	for (int i = 0; i < size; i++) {
		if (sequenceArray[i] == sequenceArray[i + 1]) {
			amount++;
		}
		else if (amount > proverkaAmount) {
			proverkaAmount = amount;
			amount = 0;
		}
	}
	cout << endl << " The length of the longest sequence of numbers: " << proverkaAmount << endl;
	cout << endl;
	delete[] sequenceArray;
}

int** creatureMatrix(int rows, int cols) {
	int** transMatrix;
	transMatrix = new int* [rows];
	for (int i = 0; i < rows; i++) {
		transMatrix[i] = new int[cols];
	}
	return transMatrix;
}

void inputMatrix(int** transMatrix, int rows, int cols, int minMatrix, int maxMatrix) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transMatrix[i][j] = rand() % (maxMatrix - minMatrix + 1) + minMatrix;
		}
	}
}

void printMatrix(int** transMatrix, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << setw(3) << transMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

void transposeMatrix(int** transMatrix, int rows, int cols) {
	cout << " Your transposed matrix along the main diagonal" << endl;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << setw(3) << transMatrix[j][i] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << " Your transposed matrix along the side diagonal" << endl;
	for (int i = cols - 1; i > -1; i--) {
		for (int j = rows - 1; j > -1; j--) {
			cout << setw(3) << transMatrix[j][i];
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < rows; i++) {
		delete[] transMatrix[i];
	}
	delete[] transMatrix;
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

	cout << " Task 3 " << endl;
	cout << " Input size of 'sequence' massive: "; cin >> size;
	cout << " Input minimum of your random range: "; cin >> min;
	cout << " Input maximum of your random range: "; cin >> max;
	if (size > 0) {
		int* sequenceArray = new int[size];
		inputArray(sequenceArray, size, max, min);
		printArray(sequenceArray, size);
		longestSequenceLength(sequenceArray, size, max, min);
	}
	else if (size < 0) {
		cout << " Size of massive must be natural number " << endl;
	}
	else if (min > max) {
		cout << " Minimum more than maximum " << endl;
	}

	cout << " Task 4 " << endl;
	cout << " Input height of your matrix: "; cin >> rows;
	cout << " Input length of your matrix: "; cin >> cols;
	cout << " Input minimum of your random range: "; cin >> minMatrix;
	cout << " Input maximum of your random range: "; cin >> maxMatrix;
	if (rows > 0 && cols > 0 && minMatrix <= maxMatrix) {
		int** transMatrix;
		transMatrix = creatureMatrix(rows, cols);
		inputMatrix(transMatrix, rows, cols, minMatrix, maxMatrix);
		printMatrix(transMatrix, rows, cols);
		transposeMatrix(transMatrix, rows, cols);
	}
	else if (minMatrix > maxMatrix) {
		cout << " Minimum more than maximum " << endl;
	}
	else if (rows <= 0 || cols <= 0) {
		cout << "Rows and columns must be natural numbers  " << endl;
	}
	system("pause");
	return 0;
}
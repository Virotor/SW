#include <string>
#include <iostream>
using namespace std;
void fillAndShowArray(int*, int);
void fillAndShowArray(int* arr, int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
	}
}
void searchingIndex(int* arr, int sizeOfArray, int number) {
	bool flag = true;
	for (int i = 0; i < sizeOfArray; i++) {
		if (arr[i] == number) {
			cout << "index = " << i << endl;
			flag = false;
			break;
		}
	}
	if (flag == true) {
		cout << "there is no such number" << endl;
	}
}
void lessThanDifferenceBetweenTwoPrevios(int* arr, int sizeOfArray) {
	bool flag = true;
	for (int i = 2; i < sizeOfArray; i++) {
		if (arr[i] < (arr[i - 2] - arr[i - 1])) {
			cout << arr[i] << "\t";
			flag = false;
		}
	}
	if (flag == true) {
		cout << "there is no such number" << endl;
	}
}
int lengthOfTheLongestSequenceOfIdenticalNumbers(int* arr, int sizeOfArray) {
	int n = 1;
	int max = 0;
	for (int i = 0; i < sizeOfArray - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			n++;
		} else {
			n = 1;
		}
		if (n > max) {
			max = n;
		}
	}
	return max;
}
void fillAndShowSquareMatrix(int** arr, int rowsAndCols) {
	for (int i = 0; i < rowsAndCols; i++) {
		for (int j = 0; j < rowsAndCols; j++) {
			arr[i][j] = rand() % 20 - 10;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void transpMain(int** arr, int rowsAndCols) {
	for (int i = 0; i < rowsAndCols; i++) {
		for (int j = 0; j < rowsAndCols; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}
void transpPoboch(int** arr, int rowsAndCols) {
	for (int i = 0; i < rowsAndCols; i++) {
		for (int j = 0; j < rowsAndCols; j++) {
			cout << arr[rowsAndCols - 1 - j][rowsAndCols - 1 - i] << " ";
		}
		cout << endl;
	}
}
int main() {
	srand(time(0));
	int sizeOfArray;
	cout << "Enter size of array" << endl;
	cin >> sizeOfArray;
	int number;
	cout << "Enter number to search the index" << endl;
	cin >> number;
	int* arr = new int[sizeOfArray];
	fillAndShowArray(arr, sizeOfArray);
	searchingIndex(arr, sizeOfArray, number);
	return 0;
}
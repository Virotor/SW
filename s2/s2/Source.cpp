#include <string>
#include <iostream>
using namespace std;
void randFillAndShowArray(int*, int);
void keyboardFillAndShowArray(int*, int);
void searchingIndex(int*, int, int);
void lessThanDifferenceBetweenTwoPrevios(int*, int);
int lengthOfTheLongestSequenceOfIdenticalNumbers(int*, int);
void fillAndShowSquareMatrix(int**, int);
void transpMain(int**, int);
void transpPoboch(int**, int);
int main() {
	srand(time(0));
	int sizeOfArray;
	cout << "Enter size of array" << endl;
	cin >> sizeOfArray;
	int element;
	cout << "Enter element to search the index" << endl;
	cin >> element; 
	cout << "The array:" << endl;
	int* arr = new int[sizeOfArray];
	randFillAndShowArray(arr, sizeOfArray);
	searchingIndex(arr, sizeOfArray, element);
	cout << endl << "Elements in this array that are less than the difference between the two previous ones:" << endl;
	lessThanDifferenceBetweenTwoPrevios(arr, sizeOfArray);
	int sizeOfArray2;
	cout << endl << "Enter size of array" << endl;
	cin >> sizeOfArray2;
	keyboardFillAndShowArray(arr, sizeOfArray2);
	cout << "The length of the longest sequence of identical numbers = " << lengthOfTheLongestSequenceOfIdenticalNumbers(arr, sizeOfArray2);
	return 0;
}
void randFillAndShowArray(int* arr, int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
	}
}
void keyboardFillAndShowArray(int* arr, int sizeOfArray) {
	cout << "Input the array" << endl;
	for (int i = 0; i < sizeOfArray; i++) {
		cin >> arr[i];
	}
}
void searchingIndex(int* arr, int sizeOfArray, int element) {
	bool flag = true;
	for (int i = 0; i < sizeOfArray; i++) {
		if (arr[i] == element) {
			cout << endl << "index = " << i;
			flag = false;
			break;
		}
	}
	if (flag == true) {
		cout << endl << "there is no such number";
	}
}
void lessThanDifferenceBetweenTwoPrevios(int* arr, int sizeOfArray) {
	bool flag = true;
	for (int i = 2; i < sizeOfArray; i++) {
		if (arr[i] < (arr[i - 2] - arr[i - 1])) {
			cout << arr[i] << " ";
			flag = false;
		}
	}
	if (flag == true) {
		cout << "there is no such number";
	}
}
int lengthOfTheLongestSequenceOfIdenticalNumbers(int* arr, int sizeOfArray) {
	int n = 1;
	int max = 0;
	for (int i = 0; i < sizeOfArray - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			n++;
		}
		else {
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
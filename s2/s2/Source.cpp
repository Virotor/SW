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
void transpSide(int**, int);
void substringInString(string, string);
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
	cout << endl << "Input rows = cols of square matrix" << endl;
	int rowsAndCols;
	cin >> rowsAndCols;
	int** arr2 = new int* [rowsAndCols];
	for (int i = 0; i < rowsAndCols; i++) {
		arr2[i] = new int[rowsAndCols];
	}
	cout << "The matrix:" << endl;
	fillAndShowSquareMatrix(arr2, rowsAndCols);
	cout << "The transpose matrix relative to the main diagonal:" << endl;
	transpMain(arr2, rowsAndCols);
	cout << "The transpose matrix relative to the side diagonal:" << endl;
	transpSide(arr2, rowsAndCols);
	/*int dots;
	cout << "Enter amount of points" << endl;
	cin >> dots;*/
	cout << "Input string:" << endl;
	string sstring;
	cin.ignore();
	getline(cin, sstring);
	cout << "Input substring:" << endl;
	string substring;
	cin.clear();
	getline(cin, substring);
	substringInString(sstring, substring);
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
	int max = 1;
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
void transpSide(int** arr, int rowsAndCols) {
	for (int i = 0; i < rowsAndCols; i++) {
		for (int j = 0; j < rowsAndCols; j++) {
			cout << arr[rowsAndCols - 1 - j][rowsAndCols - 1 - i] << " ";
		}
		cout << endl;
	}
}
void substringInString(string sstring, string substring) {
	int lengthOfSstring;
	lengthOfSstring = sstring.length();
	int lengthOfSubstring;
	lengthOfSubstring = substring.length();
	int i1, s1, s2;
	bool flag = false;
	for (i1 = 0; i1 < lengthOfSstring; i1++) {
		if (sstring[i1] == substring[0]) {
			for (s1 = i1, s2 = 0; s2 < lengthOfSubstring; s1++, s2++) {
				if (sstring[s1] != substring[s2]) {
					break;
				}
				if (s2 == lengthOfSubstring - 1) {
					cout << "The first or only position of the substring in the string = " << i1;
					flag = true;
					break;
				}
			}
		}
		if (flag == true) {
			break;
		}
	}
	if (flag == false)
	{
		cout << "This substring is not in the string";
	}
}
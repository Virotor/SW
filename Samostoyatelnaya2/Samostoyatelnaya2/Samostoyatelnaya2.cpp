#include <iostream> 

using namespace std;
int* creatArray(int size) {
	int* arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 3 + 1;
		cout << arr[i] << " ";
	}
	return arr;
}
void PositionOfElement() {
	int size;
	cout << "Enter size of array ";
	cin >> size;
	int* arr = creatArray(size);
	int element;
	cout << "Enter element ";
	cin >> element;
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			cout << "Position of the element is " << i << endl;
			break;
		}
	}
	delete[] arr;
}
void LessThanDiffPrevious() {
	int size;
	cout << "Enter size of array ";
	cin >> size;
	int* arr = creatArray(size);
	cout << "\nElements that less than the difference between the previous: ";
	int k = 0;
	for (int i = 2; i < size; i++) {
		if (arr[i] < (arr[i - 2] - arr[i - 1])) cout << arr[i] << " ";
		else k++;
	}
	if (k == size - 2) cout << "There are no such elements";
	delete[] arr;
}
void MaxSequenceOfConsecutive() {
	int size;
	cout << "Enter size of array ";
	cin >> size;
	int* arr = creatArray(size);
	int maxLength = 1, curentLength = 1;
	for (int i = 1; i < size; i++) {
		if (arr[i] == arr[i - 1] and arr[i] == arr[i + 1]) curentLength++;
		else if (arr[i] == arr[i - 1] and arr[i] != arr[i + 1]) {
			curentLength++;
			if (curentLength > maxLength) {
				maxLength = curentLength;
			}
			curentLength = 1;
		}
	}
	cout << "\nMaximum sequence of consecutive numbers = " << maxLength;
	delete[] arr;
}
void TransposeRelatMainAndSide() {
	int row, col, k = 0;

	cout << "Enter matrix parameters\n";
	cout << "Rows = "; cin >> row;
	cout << "Columns = "; cin >> col;

	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}

	cout << "Martix\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 61 - 30;
			if (arr[i][j] >= 0) cout << " ";
			cout << arr[i][j] << '\t';
			k++;
		}
		cout << endl << endl;
	}

	cout << "T-main Martix\n";
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			if (arr[j][i] >= 0) cout << " ";
			cout << arr[j][i] << '\t';
		}
		cout << endl << endl;
	}

	cout << "T-side Martix\n";
	for (int i = col - 1; i > -1; i--) {
		for (int j = row - 1; j > -1; j--) {
			if (arr[j][i] >= 0) cout << " ";
			cout << arr[j][i] << '\t';
		}
		cout << endl << endl;
	}
	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

int main() {
	int f;

	cout << " What do you order? \n";
	cout << " Position of the element - 1)\n Elements that less than the difference between the previous - 2)\n";
	cout << " Maximum sequence of consecutive numbers - 3)\n Transpose the matrix relative to the main and side diagonal - 4)\n";
	cout << " STOP - 0\n";
	cin >> f;
	while (f != 0) {
		switch (f) {
		case 1: PositionOfElement(); break;
		case 2: LessThanDiffPrevious(); break;
		case 3: MaxSequenceOfConsecutive(); break;
		case 4: TransposeRelatMainAndSide(); break;
		default: cout << "Error";
		}
		cout << "\n\n What do you order? \n";
		cin >> f; cout << endl;
	}

	return 0;
}
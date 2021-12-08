#include <iostream> 
#include <cmath>

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
	cout << "\nEnter elemet ";
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
int** createMatrixForTransposition(int row, int col) {
	
	// создание двумерного массива
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
	// вывод матрицы
	cout << "Martix\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 61 - 30;
			if (arr[i][j] >= 0) cout << " ";
			cout << arr[i][j] << '\t';
		}
		cout << endl << endl;
	}
	return arr;
}
void TransposeRelatMainAndSide() {
	int row, col;

	cout << "Enter matrix parameters\n";//ввод размеров матрицы
	cout << "Rows = "; cin >> row;
	cout << "Columns = "; cin >> col;
	int** arr = createMatrixForTransposition(row, col);
	// вывод матрицы, транспонированной относительно главной диагонали
	cout << "T-main Martix\n";
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			if (arr[j][i] >= 0) cout << " ";
			cout << arr[j][i] << '\t';
		}
		cout << endl << endl;
	}
	//вывод матрицы, транспонированной относительно побочной диагонали
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
int** creatMatrixWithCoordinates (int row) {
	int** arr = new int*[row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[2];
	}
	for (int k = 1; k <= row; k++) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < 2; j++) {
				if (j == 0) {
					cout << "x" << k << " = "; cin >> arr[i][j];
				}
				else {
					cout << "y" << k << " = "; cin >> arr[i][j];
				}
			}
			k++;
		}
	}
	return arr;
}
void MaxDistBetweenPoints() {
	int row;
	cout << "How many points do you want to enter? "; cin >> row;
	int** arr = creatMatrixWithCoordinates(row);
	
	//нахождение наибольшего расстояния
	double maxDistance = 0;
	for (int i = 0; i < row; i++) {
		for (int k = i + 1; k < row; k++) {
			double curentDistance = sqrt(pow(arr[i][0] - arr[k][0], 2) + pow(arr[i][1] - arr[k][1], 2));
			if (curentDistance > maxDistance) {
				maxDistance = curentDistance;
			}
		}
	}
	cout << "Max distance between points = " << maxDistance << endl;

	//удаление двумерного массива
	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

int main() {
	int f;
	
	cout << "   What should i do? \n";
	cout << " Position of the element - 1)\n Additional to the first - 2)\n Elements that less than the difference between the previous - 3)\n";
	cout << " Maximum sequence of consecutive numbers - 4)\n Transpose the matrix relative to the main and side diagonal - 5)\n";
	cout << " Max distance between points - 6)\n STOP - 0\n";
	cin >> f;
	while (f != 0) {
		switch (f) {
		case 1: PositionOfElement(); break;
		case 2: cout << "I have not done, sorry( "; break;
		case 3: LessThanDiffPrevious(); break;
		case 4: MaxSequenceOfConsecutive(); break;
		case 5: TransposeRelatMainAndSide(); break;
		case 6: MaxDistBetweenPoints(); break;
		default: cout << "Error";
		}
		cout << "\n\n   What should i do? \n";
		cin >> f; cout << endl;
	}
	
	return 0;
}
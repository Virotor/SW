#include <iostream>
#include <ctime>
#include<stdlib.h>
#include <iomanip>
#include <cmath>

// Выполнял совместно с Седельником Егором

using namespace std;

int* InitArray(int length) {
	int* array = new int[length];
	for (int i = 0; i < length; i++) {

		array[i] = rand() % 20 - 10;

	}

	return array;
}

void ElementSearch(int size_of_array) {

	srand(time(0));

	int* array = InitArray(size_of_array);

	for (int i = 0; i < size_of_array; i++) {

		cout << "array[" << i << "]: ";
		cout << array[i] << endl;

	}

	int value_of_element; cout << "Value of element: "; cin >> value_of_element;

	bool true_element = false;

	for (int i = 0; i < size_of_array; i++) {

		if (array[i] == value_of_element) {

			cout << "Number of this element: " << i << endl;
			true_element = true;
			break;

		}

	}
	if (true_element == false) {
		cout << " Haven't this element" << endl;
	}
	delete[] array;
}

void ElementByDeference(int size_of_array) {

	int* array = InitArray(size_of_array);

	for (int i = 0; i < size_of_array; i++) {

		array[i] = rand() % 20 - 10;

		cout << "array[" << i << "]: ";
		cout << array[i] << endl;

	}

	for (int i = 2; i < size_of_array; i++) {

		if (array[i] < (array[i - 1] - array[i - 2])) {
			cout << "Number of this element: " << i << endl;
		}

	}
	delete[] array;
}

void SequenceLength(int size_of_array) {

	int* array = InitArray(size_of_array);
	int sequence_search = 1;
	int max_sequence = 1;
	for (int i = 0; i < size_of_array; i++) {

		cout << "array[" << i << "]: ";
		cout << array[i] << endl;
	}

	for (int i = 0; i < size_of_array; i++) {

		if (array[i] == array[i + 1]) {
			sequence_search++;
		}
		else {
			sequence_search = 1;
		}

		if (sequence_search > max_sequence) {
			max_sequence = sequence_search;
		}
	}

	cout <<"Max length of sequence: " << max_sequence << endl;

	delete[] array;
}

void TranspositionOfMatrix(int number_of_lines, int number_of_columns) {

	int** matrix = new int*[number_of_lines];
	cout << "Matrix:" << endl;
	for (int i = 0; i < number_of_lines; i++) {

		matrix[i] = new int[number_of_columns];

		for (int j = 0; j < number_of_columns; j++) {

			matrix[i][j] = rand() % 20 - 10;
			cout << setw(3) << matrix[i][j];
		}

		cout << endl;
	}

	cout << endl << "Transposed matrix from the main diagonal: " << endl << endl;

	for (int i = 0; i < number_of_lines; i++) {

		for (int j = 0; j < number_of_columns; j++) {
			cout << setw(3) << matrix[j][i];
		}

		cout << endl;
	}

	cout << endl << "Transposed matrix from the side diagonal: " << endl << endl;

	for (int i = number_of_lines - 1; i > -1; i--) {

		for (int j = number_of_columns - 1; j > -1; j--) {
			cout << setw(3) << matrix[j][i];
		}

		cout << endl;
	}

	for (int i = 0; i < number_of_lines; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

}
double LengthByY(int y, int y1) {

	int lengthY;
	
	if (y > 0 && y1 > 0)
	{
		lengthY = fabs(y - y1);
	}

	else {
		if (y < 0 && y1 < 0)
		{
			lengthY = fabs(y - y1);
		}

		else {
			if (y < 0 && y1 > 0)
			{
				lengthY = y1 - y;
			}

			else { lengthY = y - y1; }
		}
	}
	return lengthY;
}
double LengthByX(int x, int x1) {

	int lengthX;

	if (x > 0 && x1 > 0)
	{
		lengthX = fabs(x - x1);
	}

	else {
		if (x < 0 && x1 < 0)
		{
			lengthX = fabs(x - x1);
		}

		else {
			if (x < 0 && x1 > 0)
			{
				lengthX = x1 - x;
			}

			else { lengthX = x - x1; }
		}
	}
	return lengthX;
}
void MatrixOfPoint(int number_of_points) {

	cout << endl;

	int** matrix = new int* [number_of_points];
	for (int i = 0; i < number_of_points; i++) {

		matrix[i] = new int[number_of_points];

		for (int j = 0; j < 2; j++) {

			matrix[i][j] = rand() % 20 - 10;
			cout << setw(5) << matrix[i][j];
		}

		cout << endl;
	}

	int x;
	int y;
	int x1;
	int y1;
	double length;
	double max = 0;
	for (int i = 0; i < number_of_points; i++) {

		x = matrix[i][0];
		y = matrix[i][1];

		for (int i1 = i + 1; i1 < number_of_points; i1++) {

			x1 = matrix[i1][0];
			y1 = matrix[i1][1];

			if (x == x1) 
			{
				length = LengthByY(y, y1);
			}

			if (y == y1)
			{
				length = LengthByX(x, x1);
			}

			if (x == x1 && y == y1) {
				length = 0;
			}

			if (x != x1 && y != y1) {
				length = sqrt(pow((LengthByX(x, x1)), 2) + pow((LengthByY(y, y1)), 2));
			}

			if (length > max) {
				max = length;
			}

		}

	}

	cout << endl << "Max length: " << max << endl;

	for (int i = 0; i < number_of_points; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

}
int main() {

	int size_of_array; cout << "Size of array: "; cin >> size_of_array;

	ElementSearch(size_of_array);

	cout << "________________________________________________" << endl << endl;

	system("pause");

	ElementByDeference(size_of_array);

	cout << "________________________________________________" << endl << endl;

	system("pause");

	SequenceLength(size_of_array);

	cout << "________________________________________________" << endl << endl;

	system("pause");

	cout << "Enter size of matrix." << endl;
	int number_of_lines;   cout << "Number of lines: ";   cin >> number_of_lines;
	int number_of_columns; cout << "Number of columns: "; cin >> number_of_columns;

	if (number_of_lines == number_of_columns) {

		TranspositionOfMatrix(number_of_lines, number_of_columns);
	}
	else {

		cout << endl << "Error" << endl;
	}

	cout << "________________________________________________" << endl << endl;

	system("pause");

	int number_of_points; cout << "Number of points: "; cin >> number_of_points;

	MatrixOfPoint(number_of_points);

	cout << "________________________________________________" << endl << endl;

	return 0;
}

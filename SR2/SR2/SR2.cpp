#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
using namespace std;

void printPosOfElemInArray() {
	int sizeOfArr;
	cout << "Введите длину массива: "; cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];
	for (int i = 0; i < sizeOfArr; i++)
	{
		arr[i] = rand() % 200 - 100;
		cout << arr[i] << ", ";
	}
	int contentOfElement;
	cout << "\nВведите значение элемента массива: "; cin >> contentOfElement;
	int examination = 0;
	for (int j = 0; j <= sizeOfArr; j++) {
		if (arr[j] == contentOfElement) {
			examination++;
			cout << "\nЭтот элемент встречается в массиве под номером " << j << endl;
		}
	}
	if (examination == 0) { cout << "Такого элемента нет в массиве! " << endl; }


	delete[] arr;
}

void diffOfPrevNum() {
	int sizeOfArr;
	cout << "Введите длину массива: "; cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];

	for (int j = 0; j < sizeOfArr; j++)
	{
		arr[j] = rand() % 20;
		cout << arr[j] << ", ";
	}

	int examination = 0;
	for (int i = 0; i <= sizeOfArr - 3; i++) {
		if ((arr[i] - arr[i + 1]) > arr[i + 2]) {
			cout << "\n —> " << arr[i + 2] << endl;
			examination++;
		}
	}

	delete[] arr;

}

void greatConsistensy() {
	int sizeOfArr;
	cout << "Введите длину массива: "; cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++) {
		cin >> arr[i];
	}
	int counter1 = 0;
	int counter2 = 0;

	for (int j = 0; j <= sizeOfArr; j++) {
		if (arr[j + 1] == arr[j])
		{
			counter1++;
		}
		else { counter2++; }
	}
	int compare = max(counter1, counter2);
	cout << "\nЭлемент максимальной длины последовательности равен: " << compare << endl;
	delete[] arr;

}
void matrixTransposition() {

	int sizeRow, sizeCol;
	cout << "Размер строки = ";        cin >> sizeRow;
	cout << "Размер столбца = ";     cin >> sizeCol;
	int** mtrx = new int* [sizeRow];
	for (int i = 0; i < sizeRow; i++)
	{
		mtrx[i] = new int[sizeCol];
		for (int j = 0; j < sizeCol; j++)
		{
			mtrx[i][j] = rand() % 200 - 100;
			cout << mtrx[i][j] << " ";
		}
		cout << "\n";
	}
	int** transMtrx = new int* [sizeCol];

	for (int i = 0; i < sizeCol; i++) {
		transMtrx[i] = new int[sizeRow];

		for (int i = 0; i < sizeCol; i++) {
			for (int j = 0; j < sizeRow; j++) {
				transMtrx[i][j] = mtrx[j][i];
			}
		}

	}
	for (int i = 0; i < sizeCol; i++) {
		for (int j = 0; j < sizeRow; j++) {
			cout << transMtrx[i][j] << " ";
		}
	}



	for (int i = 0; i < sizeRow; i++)
		delete[] mtrx[i];
	delete[] mtrx;

	for (int i = 0; i < sizeCol; i++)
		delete[] transMtrx[i];
	delete[] transMtrx;

}


void distanceBetweenPoints() {
	const int col = 2;
	int row;
	double maximum = 0, minimum = 0;
	cout << "Размер строки: ";   cin >> row;
	int** mtrx = new int* [row];
	for (int i = 0; i < row; i++)
	{
		mtrx[i] = new int[col];
		for (int j = 0; j < col; j++)
		{
			mtrx[i][j] = rand() % 200 - 100;
			cout << mtrx[i][j] << " ";
		}
		cout << "\n";
	}
	int max_range = 0, range;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			range = sqrt(abs(mtrx[0][i] - mtrx[0][j]) * abs(mtrx[0][i] - mtrx[0][j]) + abs(mtrx[1][i] - mtrx[1][j]) * abs(mtrx[1][i] - mtrx[1][j]));
			if (range > max_range)
			{
				max_range = range;
			}

		}

	}

	cout << max_range << endl;
	for (int i = 0; i < row; i++)
		delete[] mtrx[i];
	delete[] mtrx;
}


int main() {
	setlocale(LC_ALL, "Russian");

	//printPosOfElemInArray();
	//diffOfPrevNum();
	//greatConsistensy();

	system("pause");
	return 0;
}
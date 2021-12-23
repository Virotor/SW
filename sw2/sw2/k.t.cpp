#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int* createArray(int);
void setArray(int, int*);
void printArray(int, int*);
void deleteArray(int*);
void findElement(int, int, int*);
int PositionOfTheFirstElement();
int NumbersLessThanTheDifference();
int TransposedMatrix();
int LengthOfTheLargestSequence();
int MaximumDistance();
int** createMatrix(int, int);
void setMatrix(int, int, int**);
void printMatrix(int, int, int**);
void deleteMatrix(int, int**);
int transMatrixMain(int, int, int**);
int transMatrixSaid(int, int, int**);
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "1 - Написать функцию, которая будет выводить позицию первого элемента массива, равного введённому числу." << endl;
	cout << "2 - Написать функцию, которая будет находить все числа в массиве, которые меньше разности двух предыдущих." << endl;
	cout << "3 - Написать функцию, которая находит длину наибольшей последовательности одинаковых чисел, идущих подряд." << endl;
	cout << "4 - Транспонировать матрицу относительно побочной и главной диагоналей." << endl;
	cout << "5 - Найти максимальное расстояние между двумя точками среди набора точек." << endl;
	cout << "Введите номер задания: ";
	int task;
	cin >> task;
	switch (task)
	{
	case 1:
		PositionOfTheFirstElement();
		break;
	case 2:
		NumbersLessThanTheDifference();
		break;
	case 3:
		LengthOfTheLargestSequence();
		break;
	case 4:
		TransposedMatrix();

		break;
	case 5:
		MaximumDistance();
	default:
		cout << "Такого задания нет :(";
	}
	return 0;
}
int* createArray(int size){
	int* Array = new int[size];
	return Array;
}
void SetArray(int size, int*Array){
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		Array[i] = rand() % 21 - 10;
	}
}
void printArray(int size, int* Array)
{
	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << " "<<endl;
	}

}
void deleteArray(int* Array){
	delete[] Array;
}
void findElement(int size, int num, int* Array) {
	for (int i = 0; i < size; i++) {
		if (Array[i] == num)cout << "Номер элемента: " << i << endl;
		if (Array[i] == num) break;
	}
}


int PositionOfTheFirstElement() {
	int size, num;
	cout << "введите размер массива: ";
	cin >> size;
	int* Array = createArray(size);
	setArray(size, Array);
	printArray(size, Array);
	cout << endl;
	cout << "Введите элемент: " << endl;
	cin >> num;
	findElement(size, num, Array);
	deleteArray(Array);
	system("pause");
	return size, num;
}
			
	

void NumbersLessThanTheDifference(int size, int* Array) {

	for (int i = 2; i < size; i++) {
		if ((Array[i - 2] - Array[i - 1]) > Array[i]) {
			cout << "Число меньше разности двух предыдущих" << Array[i] << endl;
		}
	}
}

int LengthOfTheLargestSequence(int size, int*Array){

	for (int i = 0; i < size; i++){
		cin >> Array[i];
	}
	int Counter = 1, max = 0;
	for (int i = 0; i < size; i++)
	{
		if (Array[i] == Array[i + 1])
		{
			Counter++;
		}
		else
		{
			if (max < Counter) max = Counter;
			Counter = 1;
		}
	}
	cout << "Длина наибольшей последовательности: " << max << endl;
	return Counter, max;
}
int TransposedMatrix(){
	int line, column;
	cout << "Введите размер матрицы:";
	cin >> line >> column;
	int** matrix = createMatrix(line,column);
	setMatrix(line, column, matrix);
	printMatrix(line, column, matrix);
	cout << "Транспонирование относительно главной диагонали: " << endl;
	transMatrixMain(line, column, matrix);
	cout << "Транспонирование относительно побочной диагонали:" << endl;
	transMatrixSaid(line, column, matrix);
	printMatrix(line, column, matrix);
	deleteMatrix(line, matrix);
	system("pause");
	return line, column;
}
int** createMatrix(int line, int column) {
	int** matrix = new int* [line];
	for (int i = 0; i < line; i++) {
		matrix[i] = new int[column];
	}
	return matrix;
}
		
	

void SetMatrix(int line, int column, int**matrix){
	srand(time(0));
	for (int i = 0; i < line; i++){
		for (int j = 0; j < column; j++){
			matrix[i][j] = rand() % 21 - 10;
		}
	}
}
void printMatrix(int n, int k, int** a){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < k; j++){
			cout << " " << a[i][j] << endl;
		}
		cout << endl;
	}

}
void deleteMatrix(int line, int**matrix){
	for (int i = 0; i < line; i++){
		delete[] matrix[i];
	}
	delete[] matrix;
}

int transMatrixMain(int line, int column, int**matrix){
	int trMatrix;
	for (int i = 0; i < line - 1; i++){
		for (int j = i + 1; j < column; j++){
			trMatrix = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = trMatrix;
		}
	}
	return trMatrix;
}
int transMatrixSaid(int line, int column, int** matrix) {

	int trMatrix;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < line - i - 1; j++) {

			trMatrix = matrix[i][j];
			matrix[i][j] = matrix[line - j - 1][line - i - 1];
			matrix[line - j - 1][line - i - 1] = trMatrix;
		}
		return trMatrix;
	}
}
int MaximumDistance() {
	double distance;
	double MaxDistance = 0;
	int dots;

	int* coord_x = new int[dots];
	int* coord_y = new int[dots];

	for (int i = 0; i < dots; i++) {
		coord_x[i] = rand() % 21 - 10;
		coord_y[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < dots; i++) {
		cout << "(" << coord_x[i] << "," << coord_y[i] << ")" << endl;
	}
	for (int i = 0; i < dots; i++) {
		for (int j = 0; j < dots - 1; j++) {
			distance = sqrt((coord_x[i] - coord_x[j]) * (coord_x[i] - coord_x[j]) + (coord_y[i] - coord_y[j]) * (coord_y[i] - coord_y[j]));
			if (distance > MaxDistance) {
				MaxDistance = distance;
			}
		}
	}
	cout << "Максимальное расстояние между двумя точками: " << MaxDistance << endl;
	return 0;
}



#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	do {
		int column, line = 2;
		do {
			cout << "Enter the amount of points (more than 1): ";
			cin >> column;
		} while (column < 2);
		int** array = new int* [line];
		for (int index = 0; index < line; index++)
			array[index] = new int[column];
		cout << "Line x è Line y respectively: " << endl;
		for (int index = 0; index < line; index++) {
			for (int index2 = 0; index2 < column; index2++) {
				array[index][index2] = rand() % 21 - 10;
				cout << setw(5) << array[index][index2];
			}
			cout << endl;
		}
		cout << endl;
		double xDistance, yDistance, totalDistance, maxDistance = 0;
		for (int index = 0; index < column - 1; index++) {
			int index2 = 1;
			while (index + index2 < column) {
				xDistance = (array[0][index] - array[0][index + index2]) * (array[0][index] - array[0][index + index2]);
				yDistance = (array[1][index] - array[1][index + index2]) * (array[1][index] - array[1][index + index2]);
				totalDistance = sqrt(xDistance + yDistance);
				if (totalDistance > maxDistance) {
					maxDistance = totalDistance;
				}
				index2++;
			}
		}
		cout << "Max distance: " << maxDistance;
		for (int index = 0; index < line; index++)
			delete[]array[index];
		delete[]array;
		cout << endl;
	return 0;
}

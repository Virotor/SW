#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(0));
	do {
		int** array;
		int line, column;
		do {
			cout << "Enter the size of the square matrix: ";
			cin >> line >> column;
		} while (line < 1 || column < 1 || line != column);
		cout << "Matrix size " << line << " x " << column << endl;
		array = new int* [line];
		int index1, index2;
		for (index1 = 0; index1 < line; index1++)
			array[index1] = new int[line];
		for (index1 = 0; index1 < line; index1++) {
			for (index2 = 0; index2 < column; index2++) {
				array[index1][index2] = rand() % 21 - 10;
				cout << setw(5) << array[index1][index2];
			}
			cout << endl;
		}
		cout << endl;
		cout << "Side-diagonal transpoted matrix" << endl;
		for (index1 = 0; index1 < line; index1++) {
			for (index2 = 0; index2 < column; index2++) {
				cout << setw(5) << array[line - index2 - 1][column - index1 - 1];
			}
			cout << endl;
		}
		cout << endl;
		cout << "Main-diagonal transpoted matrix" << endl;
		for (index1 = 0; index1 < line; index1++) {
			for (index2 = 0; index2 < column; index2++) {
				cout << setw(5) << array[index2][index1];
			}
			cout << endl;
		}
		cout << endl;
		for (index1 = 0; index1 < line; index1++)
			delete[]array[index1];
		delete[]array;
		cout << "Enter '1', if you want to continue the program. " << endl;
		cout << endl;
	} while (_getch() == '1');
	return 0;
}

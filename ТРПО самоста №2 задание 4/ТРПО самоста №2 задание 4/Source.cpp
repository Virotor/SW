#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));
		int** a;
		int line, column;
		do {
			cout << "¬ведите размеры квадратной матрицы: ";
			cin >> line >> column;
		} while (line < 1 || column < 1 || line != column);
		cout << "ћатрица размером " << line << " x " << column << endl;
		a = new int* [line];
		int i1, i2;
		for (i1 = 0; i1 < line; i1++)
			a[i1] = new int[line];
		for (i1 = 0; i1 < line; i1++) {
			for (i2 = 0; i2 < column; i2++) {
				a[i1][i2] = rand() % 35 - 9;
				cout << setw(5) << a[i1][i2];
			}
			cout << endl;
		}
		cout << endl;
		cout << "ћатрица, транспонированна€ относительно побочной диагонали." << endl;
		for (i1 = 0; i1 < line; i1++) {
			for (i2 = 0; i2 < column; i2++) {
				cout << setw(5) << a[line - i2 - 1][column - i1 - 1];
			}
			cout << endl;
		}
		cout << endl;
		cout << "ћатрица, транспонированна€ относительно главной диагонали." << endl;
		for (i1 = 0; i1 < line; i1++) {
			for (i2 = 0; i2 < column; i2++) {
				cout << setw(5) << a[i2][i1];
			}
			cout << endl;
		}
		cout << endl;
		for (i1 = 0; i1 < line; i1++)
			delete[]a[i1];
		delete[]a;
	return 0;
}
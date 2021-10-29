#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
		int** array;
		int stroka, stolb;
		do {
			cout << "¬ведите размер квадратной матрицы: ";
			cin >> stroka >> stolb;
		} while (stroka < 1 || stolb < 1 || stroka != stolb);
		cout << "ћатрица " << stroka << " на " << stolb << endl;
		array = new int* [stroka];
		int index1, index2;
		for (index1 = 0; index1 < stroka; index1++)
			array[index1] = new int[stroka];
		for (index1 = 0; index1 < stroka; index1++) {
			for (index2 = 0; index2 < stolb; index2++) {
				array[index1][index2] = rand() % 21 - 10;
				cout << setw(5) << array[index1][index2];
			}
			cout << endl;
		}
		cout << endl;
		cout << "ћатрица, транспонированна€ относительно побочной оси" << endl;
		for (index1 = 0; index1 < stroka; index1++) {
			for (index2 = 0; index2 < stolb; index2++) {
				cout << setw(5) << array[stroka - index2 - 1][stolb - index1 - 1];
			}
			cout << endl;
		}
		cout << endl;
		cout << "ћатрица, транспонированна€ относительно главной оси" << endl;
		for (index1 = 0; index1 < stroka; index1++) {
			for (index2 = 0; index2 < stolb; index2++) {
				cout << setw(5) << array[index2][index1];
			}
			cout << endl;
		}
		cout << endl;
		for (index1 = 0; index1 < stroka; index1++)
			delete[]array[index1];
		delete[]array;
	return 0;
}
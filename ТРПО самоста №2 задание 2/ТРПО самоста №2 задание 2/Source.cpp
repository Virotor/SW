#include <iostream>
#include <ctime>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
		setlocale(LC_ALL, "RUS");
		srand(time(0));
		int size;
		do {
			cout << "¬ведите размер массива: ";
			cin >> size;
		} while (size < 1);
		int* array = new int[size];
		int index;
		for (index = 0; index < size; index++) {
			array[index] = rand() % 35 - 9;
			cout << setw(4) << array[index];
		}
		cout << endl;
		cout << "„исла массива, которые меньше разности двух предыдущих: " << endl;
		for (index = 2; index < size; index++) {
			if (array[index] < array[index - 1] - array[index - 2]) {
				cout << array[index] << setw(4);
			}
		}
		cout << endl;
		delete[]array;
	system("pause");
	return 0;
}
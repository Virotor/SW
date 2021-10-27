#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
		setlocale(LC_ALL, "RUS");
		srand(time(0));
		int size;
		do {
			cout << "Введите размер массива: ";
			cin >> size;
		} while (size < 1);
		int* a = new int[size];
		int i;
		for (i = 0; i < size; i++) {
			a[i] = rand() % 35 - 9;
			cout << setw(4) << a[i];
		}
		cout << endl;
		int number;
		cout << "Введите число: " << endl;
		cin >> number;
		int i1 = 0, counter = 0;
		for (i = 0; i < size; i++) {
			if (number == a[i]) {
				i1 = i;
				counter++;
				break;
			}
		}
		if (counter != 0)
			cout << "Позиция первого элемента массива, равного введённому числу: " << i1 << endl;
		else
			cout << "Данного числа в массиве не существует." << endl;
		delete[]a;
	system("pause");
}
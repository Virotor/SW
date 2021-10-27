#include <iostream>
#include <math.h>
using namespace std;

void greatConsistensy() {
	setlocale(LC_ALL, "rus");
	int sizeOfArr;
	cout << "Введите длину массива: "; 
	cin >> sizeOfArr;
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
	cout << endl << "Элемент максимальной длины последовательности равен: " << compare << endl;

	delete[] arr;
}
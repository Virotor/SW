#include <iostream>
#include <math.h>
using namespace std;

void printPosOfElemInArray() {
	int sizeOfArr;
	cout << "Введите длину массива: "; 
	cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];
	for (int i = 0; i < sizeOfArr; i++)
	{
		arr[i] = rand() % 200 - 100;
		cout << arr[i] << ", ";
	}cout << endl;

	int contentOfElement;
	cout << "Введите значение элемента массива: "; 
	cin >> contentOfElement;
	int examination = 0;
	for (int j = 0; j <= sizeOfArr; j++) {
		if (arr[j] == contentOfElement) {
			examination++;
			cout << endl << "Этот элемент встречается в массиве под номером " << j << endl;
		}
	}
	if (examination == 0) { cout << "Такого элемента нет в массиве! " << endl; }

}


#include <iostream>
#include <math.h>
using namespace std;

void printPosOfElemInArray() {
	setlocale(LC_ALL, "rus");
	int sizeOfArr;
	cout << "������� ����� �������: "; 
	cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];
	for (int i = 0; i < sizeOfArr; i++)
	{
		arr[i] = rand() % 200 - 100;
		cout << arr[i] << ", ";
	}
	int contentOfElement;
	cout << endl << "������� �������� ������� : "; 
	cin >> contentOfElement;
	int examination = 0;
	for (int j = 0; j <= sizeOfArr; j++) {
		if (arr[j] == contentOfElement) {
			examination++;
			cout << endl << "���� ������� ����� � ������� ��� ������� " << j << endl;
		}
	}
	if (examination == 0) { cout << "������ �������� ��� � �������! " << endl; }


	delete[] arr;
}
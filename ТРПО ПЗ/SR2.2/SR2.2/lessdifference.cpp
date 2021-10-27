#include <iostream>
#include <math.h>
using namespace std;

void diffOfPrevNum() {
	setlocale(LC_ALL, "rus");
	int sizeOfArr;
	cout << "¬ведите длину массива: "; 
	cin >> sizeOfArr;
	int* arr = new int[sizeOfArr];

	for (int j = 0; j < sizeOfArr; j++)
	{
		arr[j] = rand() % 20;
		cout << arr[j] << ", ";
	}
	cout << endl;

	int examination = 0;
	for (int i = 0; i <= sizeOfArr - 3; i++) {
		if ((arr[i] - arr[i + 1]) > arr[i + 2]) {
			cout << " Ч> " << arr[i + 2] << endl;
			examination++;
		}
	}

	delete[] arr;

}
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

void inputMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 4;
	}

}

void outputMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(5) << arr[i];
	}
}

void taskBiggestLength() {
	srand(time(NULL));
	int size;

	cout << "Enter size of massive "; cin >> size;
	int* arr = new int[size];
	inputMassive(arr, size);
	outputMassive(arr, size);
	cout << endl;

	int length = 1, big_length = 1, number;
	number = arr[0];
	for (int i = 1; i < size; i++) {
		if (number == arr[i]) length++;
		else {
			big_length = max(length, big_length);
			length = 1;
			number = arr[i];
		}
	}
	cout << big_length;
	delete[]arr;
}

int main()
{
	taskBiggestLength();
}
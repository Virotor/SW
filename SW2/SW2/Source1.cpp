#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

void inputMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21 - 10;
	}

}

void outputMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(5) << arr[i];
	}
}

void DifferenceNumber() {
	srand(time(NULL));
	int size;

	cout << "Enter size of massive:  ";
	cin >> size;
	int* arr = new int[size];
	inputMassive(arr, size);

	outputMassive(arr, size);
	cout << endl;
	for (int i = 2; i < size; i++) {
		if (arr[i] < arr[i - 2] - arr[i - 1]) cout << setw(6) << arr[i];
	}
	delete[]arr;
}

int one ()
{
	DifferenceNumber();
		return 0;
}

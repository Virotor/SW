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

void taskIndexFirstElement() {
	srand(time(NULL));
	int size;

	cout << "Enter size of massive "; cin >> size;
	int* arr = new int[size];
	inputMassive(arr, size);

	int number;
	cout << "Enter number "; cin >> number; cout << endl;
	outputMassive(arr, size);
	for (int i = 0; i < size; i++) {
		if (arr[i] == number) cout << endl << i; exit;
	}
	delete[]arr;
}

int main()
{
	taskIndexFirstElement();
}
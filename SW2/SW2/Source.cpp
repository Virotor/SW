#include <iostream>
using namespace std;
int* initArray(int length);
void printArray(int* array, int length);
int foundnumberposition(int* array, int length, int number);
int main () {
	int length, number;
	cout << "Enter lenght of array:\n ";
	cin >> length;
	srand(time(nullptr));
	int* array = initArray(length);
	cout << " Enter number:\n ";
	cin >> number;
	printArray(array, length);
	cout << foundnumberposition(array, length, number);
}
int* initArray(int length)
{

	int* array = new int[length];
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % 20 - 10;
	}
	return array;
}

void printArray(int* array, int length) {
	for (int j = 0; j < length; j++) {
		cout << array[j] << " ";
	}
	cout << endl;
}
int foundnumberposition(int* array, int length, int number) {
	for (int i = 0; i < length; i++) {
		if (number == array[i]) {
			return 1;
		}
	}
}

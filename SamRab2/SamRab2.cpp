#include <iostream>
#include <ctime>
using namespace std;

int* createArray(int& size) {
	cout << "enter size of the array: ";
	cin >> size;
	int* array = new int[size];
	cout << "enter generation range: ";
	int first, last;
	cin >> first >> last;
	for (int index = 0; index < size; index++)
	{
		array[index] = rand() % (last - first) + first;
	}
	cout << "array: ";
	for (int index = 0; index < size; index++)
	{
		cout << array[index] << " ";
	}
	cout << endl;
	return array;
}

void position()
{
	cout << "Task 1:" << endl;
	int size;
	int* array = createArray(size);
	cout << "enter element: ";
	int element;
	cin >> element;
	int elementIndex = -1;
	for (int index = 0; index < size; index++)
	{
		if (array[index] == element) {
			elementIndex = index;
			break;
		}
	}
	if (elementIndex == -1)
	{
		cout << "element not found";
	}
	else {
		cout << "index of element: " << elementIndex << endl << endl;
	}
	delete[] array;
}

void numbersLessThenTheDifference() {
	cout << "Task 2:" << endl;
	int size;
	int* array = createArray(size);
	cout << " elements which lower then the difference between the two previous elements: ";
	for (int index = 2; index < size; index++)
	{
		if (array[index] < array[index - 2] - array[index - 1])
		{
			cout << array[index] << " ";
		}
	}
	cout << endl << endl;
	delete[] array;
}

void maxSubsequence() {
	cout << "Task 3:" << endl;
	int size;
	int* array = createArray(size);
	int max_lenght = 1;
	int current_length = 1;
	for (int index = 1; index < size; index++)
	{
		if (array[index] == array[index - 1]) {
			current_length++;
		}
		else {
			if (current_length > max_lenght) {
				max_lenght = current_length;
			}
			current_length = 1;
		}
	}
	if (current_length > max_lenght) {
		max_lenght = current_length;
	}
	cout << "max lenght: " << max_lenght << endl << endl;
	delete[] array;
}

int main()
{
	position();
	numbersLessThenTheDifference();
	maxSubsequence();
	srand(time(NULL));
	return 0;
}
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

int main()
{
	position();
	srand(time(NULL));
	return 0;
}
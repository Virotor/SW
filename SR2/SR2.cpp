#include <iostream>
using namespace std;

int* Array_create(int _size)
{
	int* a = new int[_size];
	srand(time(0));
	for (int i = 0;i < _size;i++)
		a[i] = rand() % 201 - 100;
	return(a);
}

void Array_print(int* a, int _size)
{
	for (int i = 0;i < _size;i++)
		cout << a[i] << ' ';
	cout << endl;
}

int Element_number(int* a, int _size, int el)
{
	int i = 0, num = -1;
	while (i < _size)
	{
		if (el == a[i])
		{
			num = i;
			i = _size;
		}
		else i++;
	}
	return(num);
}

void Element_position()
{
	int size, *array, element;
	cout << "Enter size of array" << endl;
	cin >> size;
	array = Array_create(size);
	Array_print(array,size);
	cout << "Enter the element" << endl;
	cin >> element;
	cout << Element_number(array, size, element)<<endl;
	delete []array;
}

int main()
{
	int task_number;
	cout << "Enter task number" << endl;
	cin >> task_number;
	switch (task_number)
	{
	case 1:
		Element_position();
		break;
	}
}
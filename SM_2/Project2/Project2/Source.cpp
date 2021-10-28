#include <iostream>
using namespace std;

int* filling_and_show_arr(int size)
{
	cout << "Массив: ";
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 15 - 5;
		cout << arr[i] << " ";
	}
	return arr;
}

void show_found_values(int* arr, int n)
{
	cout << "Найденые числа: ";
	for (int i = 2; i < n; i++)
		if ((arr[i - 2] - arr[i - 1]) > arr[i])
		{
			cout << arr[i] << " ";
		}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива: ";
	int n;
	cin >> n;
	int* arr = filling_and_show_arr(n);
	cout << endl;
	show_found_values(arr, n);
	delete[] arr;
	return 0;
}
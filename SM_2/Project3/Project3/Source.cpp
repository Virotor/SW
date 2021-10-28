#include <iostream>
using namespace std;
int* filling_and_show_arr(int size)
{
	cout << "Массив: ";
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 3 + 1;
		cout << arr[i] << " ";
	}
	return arr;
}
void max_long_values(int* arr, int n)
{
	cout << "Длина наибольшей последовательности одинаковых чисел, идущих подряд: ";
	int k = 0, max = 0;
	for (int i = 0; i < n; i++)
	{
		int j = i;
		while (arr[i] == arr[j])
		{
			k++;
			if (k > max) { max = k; };
			j++;

		}
		k = 0;
	}
	cout << max << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер массива: ";
	int n;
	cin >> n;
	int* arr = filling_and_show_arr(n);
	cout << endl;
	max_long_values(arr, n);
	delete[] arr;
	return 0;
}
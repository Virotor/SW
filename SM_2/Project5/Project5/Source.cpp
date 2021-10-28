#include <iostream>
using namespace std;
int* filling_and_show_arr(int size)
{
	cout << "Координаты точек: " << endl;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 6 + 2;
		cout << arr[i] << " ";
		if (i % 2 == 1)
		{
			cout << endl;
		}
	}
	return arr;
}
void max_length_between(int* arr, int n)
{
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j += 2)
		{
			if (pow(pow(arr[i] - arr[j], 2) + pow(arr[i + 1] - arr[j + 1], 2), 1 / 2) > max)
			{
				max = pow(pow(arr[i] - arr[j], 2) + pow(arr[i + 1] - arr[j + 1], 2), 1 / 2);
			}
		}
	}
	cout << "Максимальное расстояние между точками = " << max;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	cout << "Введите количество точек: ";
	int n;
	cin >> n;
	n = 2 * n;
	int* arr = filling_and_show_arr(n);
	cout << endl;
	max_length_between(arr, n);
	delete[] arr;
	return 0;
}
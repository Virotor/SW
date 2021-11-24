#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	size_t size;

	cout << "Введите размер Массива ";

	cin >> size;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;

		cout << array[i] << " ";
		
		cout << endl;
	}

	cout << " Массив в порядке ввода: ";
	cout << " ";

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " - позиция числа равна " << i << endl;
	}
	system("pause");
}
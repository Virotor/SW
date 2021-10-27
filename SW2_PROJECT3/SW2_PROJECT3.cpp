// SW2_PROJECT3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 2 + 0;
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}


int main()
{
	srand(time(NULL));
	int size, line, largest = 1;
	cout << "The number of elements="; cin >> size; cout << endl;

	int* arr = new int[size];

	FillArray(arr, size);
	PrintArray(arr, size);
	cout << endl;
	for (int i = 0; i < size - 1; i++) {
		line = 1;
		while (arr[i] == arr[i + 1]) {
			i++;
			line++;
		}
		if (line > largest)
			largest = line;
		i += line - 1;
	}
	cout << endl << endl << largest;


	delete[] arr;
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

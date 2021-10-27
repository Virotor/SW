// SW2_PROJECT5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "iostream"
#include "ctime"
using namespace std;

int** FillArray(int** arr, int rows)
{

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[2];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			arr[i][j] = rand() % 21 - 10;
		}
	}
	return arr;
}

void PrintArray(int** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}



int main()
{
	srand(time(NULL));
	int rows; float biggest = -1;
	cout << "Rows="; cin >> rows; cout << endl;
	int** arr = new int* [rows];

	arr = FillArray(arr, rows);

	PrintArray(arr, rows);

	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		if (i != rows - 1) {
			if (sqrt(pow((arr[i + 1][0] - arr[i][0]), 2) + pow((arr[i + 1][1] - arr[i][1]), 2)) > biggest) {
				biggest = sqrt(pow((arr[i + 1][0] - arr[i][0]), 2) + pow((arr[i + 1][1] - arr[i][1]), 2));
			}
		}
		else {
			if (sqrt(pow((arr[0][0] - arr[i][0]), 2) + pow((arr[0][1] - arr[i][1]), 2)) > biggest) {
				biggest = sqrt(pow((arr[0][0] - arr[i][0]), 2) + pow((arr[0][1] - arr[i][1]), 2));
			}
		}

	}

	cout << endl;

	cout << biggest;

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
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

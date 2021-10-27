// SW2_PROJECT4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "iostream"
#include "ctime"
using namespace std;

int** FillArray(int** arr, int rows, int cols)
{

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 21 - 10;
		}
	}
	return arr;
}

void PrintArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}



int main()
{
	srand(time(NULL));
	int rows, cols;
	cout << "Rows="; cin >> rows; cout << endl;
	cout << "Cols="; cin >> cols; cout << endl;
	int** arr = new int* [rows];

	arr = FillArray(arr, rows, cols);

	PrintArray(arr, rows, cols);

	cout << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			cout << arr[rows - 1 - j][cols - 1 - i] << "\t";
		}
		cout << endl;
	}
	cout << endl;


	cout << endl;



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

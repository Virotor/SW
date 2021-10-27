#include<iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int* CreateArray(int);
void SetArray(int, int*);
void printArray(int, int*);
void deleteArray(int*);
int createarrayandfindnumb();
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите номер задане: ";
	int Number;
	cin >> Number;
	switch (Number)
	{
	case 1:
		cout << "ЗАДАНИЕ №1" << endl;
		createarrayandfindnumb();
		break;
	}
	return 0;
}
int* CreateArray(int n)
{
	int* a = new int[n];
	return a;
}
void SetArray(int n, int* a)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 21 - 10;
	}
}
void printArray(int n, int* a)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);

	}

}
void deleteArray(int* a)
{
	delete[] a;
}
void findNumber(int n, int N, int* a)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == N)cout << "Номер элемента:" << i << endl;
		if (a[i] == N)break;
	}
}
int createarrayandfindnumb()
{
	int a, N;
	cout << "Введите размер массива ";
	cin >> a;
	int* save = CreateArray(a);
	SetArray(a, save);
	printArray(a, save);
	cout << endl;
	cout << "Введите элемент номер позиции которого хотите вывести ";
	cin >> N;
	findNumber(a, N, save);
	deleteArray(save);
	system("pause");
	return a, N;
}

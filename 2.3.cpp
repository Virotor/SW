#include <iostream>
#include <ctime>

using namespace std;

void LongestLineOfSameNumbers(int* array, int size)
{
	int a = 1;
	int b = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == array[i - 1])
		{
			a++;
		}
		else
		{
			if (b < a)
			{
				b = a;
			}
			a = 1;
		}
	}
	cout << "Длина максимальной последовательности одинаковых чисел равна: " << b << endl;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	size_t size;

	cout << "Введите размер Массива ";

	cin >> size;

	int* array = new int[size];

	cout << " Массив в порядке ввода: ";
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;

		cout << array[i] << " ";

		cout << endl;
	}


	cout << " ";
	LongestLineOfSameNumbers(array, size);
	system("pause");
}
// Данный вариант решения не может полностью доказать правильность кода. поэтому предлагаю посмотреть как это работает, есди вводить все значения с клавиатуры
//#include <iostream>
//#include <ctime>

//using namespace std;

//void LongestLineOfSameNumbers(int* array, int size)
//{
//	int a = 1;
//	int b = 0;
//   for (int i = 0; i < size; i++)
//   {
//     if (array[i] == array[i - 1])
//    {
//a++;
//		}
//		else
//		{
//		if (b < a)
//			{
//				b = a;
//			}
//			a = 1;
//		}
//	}
//	cout << "Длина максимальной последовательности одинаковых чисел равна: " << b << endl;
//}
//
//int main()
//
//{
//
//	setlocale(LC_ALL, "RUS");
//	size_t size;
//
//	cout << "Введите размер Массива ";
//
//	cin >> size;
//
//	int* array = new int[size];
//
//	cout << " Введите значения массива: ";
//
//	for (int i = 0; i < size; i++)
//	{
//		cin >> array[i];
//	}
//
// cout << " Массив : " << " ";
//
// for (int i = 0; i < size; i++)
//	{
//		cout << array[i] << " " << endl;
//	}
//
//	LongestLineOfSameNumbers(array, size);
//
//	system("pause");
//	return 0;
//}
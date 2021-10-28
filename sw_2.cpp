



#include <iostream>
#include <locale>
#include <conio.h>
#include <cstdlib>
#include<string>

using namespace std;

int serching_index();

int definition_element_that_less_than_diff();

int the_longest_sequence_of_numbers();

int transposition();

int maximum_distance_beetwen_two_points();


int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	do
	{

		cout << "Какое задание хотите (0 - чтобы покинуть программу): ";
		cin >> choice;
		switch (choice)
		{

		case 0:
			cout << "До скорых встреч!" << endl;
			break;

		case 1:
			serching_index();
			cout << endl;

			break;
		case 2:
			definition_element_that_less_than_diff();
			cout << endl;
			break;

		case 3:
			the_longest_sequence_of_numbers();
			cout << endl;
			break;

		case 4:
			transposition();
			cout << endl;
			break;

		case 5:
			maximum_distance_beetwen_two_points();
			cout << endl;
			break;

		default:
			cout << "Такого задания нет" << endl;
			break;

		}
	} while (choice != 0);

	return 0;
}


int* creating_a_one_dimensional_array(int& size_of_array)
{

	cout << "Размер вашего массива: ";
	cin >> size_of_array;
	int* arr = new int[size_of_array];
	srand(time(0));
	for (int i = 0; i < size_of_array; i++)
	{
		arr[i] = rand() % 7 + (-3);
		cout << "[" << i + 1 << "]= " << arr[i] << "\t";
	}
	cout << endl;
	return arr;
}

int serching_index()
{
	int size_of_array;
	int* arr = creating_a_one_dimensional_array(size_of_array);

	cout << "Введите число: " << endl;
	int index;
	cin >> index;

	for (int i = 0; i < size_of_array + 1; i++)
	{
		if (arr[i] == index)
		{
			cout << "Индекс вашего числа : [" << i << "]" << endl;
			break;
		}
		if (i == size_of_array)
			cout << "Такого числа не наблюдается!" << endl;
	}
	return 0;
}


int definition_element_that_less_than_diff()
{
	int size_of_array;
	int* arr = creating_a_one_dimensional_array(size_of_array);

	for (int i = 3; i < size_of_array - 2; i++)
	{
		if (arr[i] < (arr[i - 2] - arr[i - 1]))
		{
			cout << "Нашлось такое число:  " << "[" << i + 1 << "]";
			cout << arr[i] << "\n";
		}
		else 
		{
			cout << "Такого числа нет!" << endl;
		}
	}

	return 0;
}

int the_longest_sequence_of_numbers()
{
	int size_of_array;
	int* arr = creating_a_one_dimensional_array(size_of_array);
	int i = 0, just_k = 0, max_value = 0, number_of_order, numb;

	while (i < size_of_array)
	{
		int just_y = 0;
		numb = arr[i];
		while (arr[i] == numb && i < size_of_array)
		{
			just_y++;
			i++;
		}
		if (just_y >= max_value)
			if (just_y > max_value) {
				max_value = just_y;
				number_of_order = numb;
			}
			else  just_k = just_y;
	}

	if (max_value != just_k)
		cout << "Наибольшее количесвто чисел в последовательности, состоящей из " << number_of_order << ": " << max_value;
	else
		cout << "Есть несколько последовательностей, длиной: " << max_value;

	cout << endl;

	return 0;
}


int** creating_a_two_dimensional_array(int& rows, int& columns)
{
	srand(time(NULL));
	cout << "Введите количество строк матрицы ";
	cin >> rows;
	cout << "Ведите количество столбцов матрицы ";
	cin >> columns;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
		arr[i] = new int[columns];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() % 100 - 50;
			cout << arr[i][j] << "\t ";
		}
		cout << endl;
	}

	return arr;
}

int transposition()
{
	int columns, rows;
	
	int** arr = creating_a_two_dimensional_array(rows, columns);
	int** arr_trans = new int* [columns];

	*arr_trans = new int[columns * rows];

	for (int i = 1; i < columns; ++i)
		arr_trans[i] = arr_trans[i - 1] + rows;
	cout << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			arr_trans[j][i] = arr[i][j];
		}
	}

	cout << "Матрица, транспонированная по главной диагонали имеет вид:" << endl;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{

			cout << arr_trans[i][j] << "\t ";
		}
		cout << endl;
	}

	cout << "Матрица, транспонированная уже по побочной диагонали имеет вид" << endl;

	for (int i = 0; i < columns; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[rows - 1 - j][columns - 1 - i] << "\t";
		}
		cout << endl;
	}

	return 0;
}

int maximum_distance_beetwen_two_points()
{
	double distance;
	double maximum_distance = 0;
	int dots;
	cout << "Введите количество точек ";
	cin >> dots;
	int* coordinates_X = new int[dots];
	int* coordinates_Y = new int[dots];

	for (int i = 0; i < dots; i++)
	{

		coordinates_X[i] = rand() % 21 - 10;

		coordinates_Y[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < dots; i++)
	{
		cout << "(" << coordinates_X[i] << "," << coordinates_Y[i] << ")" << endl;

	}

	for (int i = 0; i < dots; i++)
	{

		for (int k = 0; k < dots - 1; k++)
		{
			distance = sqrt((coordinates_X[i] - coordinates_X[k]) * (coordinates_X[i] - coordinates_X[k]) + (coordinates_Y[i] - coordinates_Y[k]) * (coordinates_Y[i] - coordinates_Y[k]));
			if (distance > maximum_distance)
			{
				maximum_distance = distance;
			}
		}
	}
	cout << "Максимальное расстояние = " << maximum_distance << endl;
	return 0;

}
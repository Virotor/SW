#include <iostream>
#include <math.h>
#include <ctime>
#include <stdio.h>
#include <string>

using namespace std;

int** FillTheMtrx(int len)
{
	srand(time(NULL));
	double MaxSize = 9.00, MinSize = -9.00;
	int** array = new int* [len];
	for (int i = 0; i < len; i++)
	{
		array[i] = new int[len];
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			array[i][j] = (double)rand() / RAND_MAX * (MaxSize - MinSize) + MinSize;
		}
	}
	return array;
}

void TranspTheMtrx(int** array, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "********************" << endl;
	for (int i = 1; i <= len; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int p = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = p;
		}
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1; j++)
		{
			int p = array[i][j];
			array[i][j] = array[len - j - 1][len - i - 1];
			array[len - j - 1][len - i - 1] = p;
		}
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}

void FillAndCoutTheArray(int size, int* array)
{
	srand(time(NULL));
	double Max_Size = 9.00, Min_Size = -9.00;
	cout << "Массив : ";
	for (int i0 = 0; i0 <= (size - 1); i0++)
	{
		array[i0] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
		cout << array[i0] << " ";
	}
	cout << endl;
}

int* CreateTheArray(int size)
{
	return new int[size];
}

void PlaceOfTheNumb(int size, int* array)
{
	int numb;
	cout << "Введите цифру, позицию которой хотите узнать : ";
	cin >> numb;
	int flag = 0;
	for (int i0 = 0; i0 < size; i0++)
	{
		if (array[i0] == numb)
		{
			cout << "Позиция числа " << numb << " : " << i0 << endl;
			flag = 1;
			break;
		}
		else continue;
	}
	if (flag == 0)
	{
		cout << "Такого числа нет в массиве." << endl;
	}
}

void NumbSmallerThanDifference(int* array, int size)
{
	int i = 2;
	cout << "Элементы, которые меньше разности двух предыдущих : ";
	for (i; i < size; i++)
	{
		if (array[i] < array[i - 2] - array[i - 1])
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;
}


void WordInString()
{
	cout << "Введите строку : " << endl;
	string mainstring, Word;
	cin.ignore();
	getline(cin, mainstring);
	int LengthOfMainstring, LengthOfWord;
	LengthOfMainstring = mainstring.length();
	cout << "Введите подстроку : " << endl;
	cin.ignore();
	getline(cin, Word);
	LengthOfWord = Word.length();
	bool Flag = false;
	int LengthWordMinusOne = LengthOfWord - 1;
	for (int i1 = 0; i1 < LengthOfMainstring; i1++)
	{
		if (mainstring[i1] == Word[0])
		{
			int j1 = i1, j2 = 0;
			for (j1, j2; j2 < LengthOfWord; j1++, j2++)
			{
				if (mainstring[j1] != Word[j2])
				{
					break;
				}
				if (j2 == LengthWordMinusOne)
				{
					cout << "Совпадения начинаются с символа под номером : " << i1 - 1 << endl;
					Flag = true;
				}
			}
			if (Flag)
			{
				break;
			}
			else if (Flag == false)
			{
				cout << "Такой подстроки нет." << endl;
			}
		}
	}
}


void MaxLengthOfOrder(int* array, int size)
{
	int len1 = 1, len2 = 1;
	for (int i0 = 0; i0 < size; i0++)
	{
		if (array[i0] == array[i0 + 1])
		{
			len2++;
		}
		else if (len1 < len2)
		{
			len1 = len2;
			len2 = 1;
		}
		else
		{
			len2 = 1;
		}
	}
	cout << "Максимальная длина идущих подряд элементов : " << len1 << endl;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	char NumberOfTheTask;
	cout << "Введите номер задания ( 1-5 ) : ";
	cin >> NumberOfTheTask;
	switch (NumberOfTheTask)
	{
	case '1':
	{
		int size;
		cout << "Введите размерность массива : ";
		cin >> size;
		int* array = CreateTheArray(size);
		FillAndCoutTheArray(size, array);
		PlaceOfTheNumb(size, array);
		WordInString();
		break;
	}
	case '2':
	{
		int size;
		cout << "Введите размерность массива : ";
		cin >> size;
		int* array = CreateTheArray(size);
		FillAndCoutTheArray(size, array);
		NumbSmallerThanDifference(array, size);
		break;
	}
	case '3':
	{
		int size;
		cout << "Введите размерность массива : ";
		cin >> size;
		int* array = CreateTheArray(size);
		FillAndCoutTheArray(size, array);
		MaxLengthOfOrder(array, size);
		break;
	}
	case '4':
	{
		int len, wid;
		cout << "Введите размерность квадратной матрицы : ";
		cin >> len;
		FillTheMtrx(len);
		TranspTheMtrx(FillTheMtrx(len), len);
	}
	case '5':
	{
		cout << "Полное ауе...";
	}
	}
}
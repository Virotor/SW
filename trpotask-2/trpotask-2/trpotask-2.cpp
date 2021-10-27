#include <iostream>
#include <math.h>
#include <ctime>
#include <stdio.h>
#include <string>

using namespace std;

int** FillMatrix(int len)
{
	srand(time(NULL));
	double Max_Size = 9.00, Min_Size = -9.00;
	int** array = new int* [len];
	for (int i = 0; i < len; i++)
	{
		array[i] = new int[len];
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			array[i][j] = (double)rand() / RAND_MAX * (Max_Size - Min_Size) + Min_Size;
		}
	}
	return array;
}

void transpositionMatrix(int** array, int len)
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
				array[len - j - 1][len - i- 1] = p;
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

void FillAndShowArray(int size, int *array)
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

int* CreateArray(int size)
{
	return new int[size];
}

void PositionOfNumb(int size, int* array)
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

void numbThanDifferOfTwoPast(int* array, int size)
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


void SubstringInString()
{
	cout << "Введите строку : " << endl;
	string mainstring,substring;
	cin.ignore();
	getline(cin, mainstring);
	int LengthOfMainstring,LengthOfSubstring;
	LengthOfMainstring = mainstring.length();
	cout << "Введите подстроку : " << endl;
	cin.ignore();
	getline(cin, substring);
	LengthOfSubstring = substring.length();
	bool FlagOfFindingElem = false;
	int LengthSubstringMinusOne = LengthOfSubstring - 1;
	for (int i1 = 0; i1 < LengthOfMainstring; i1++)
	{
			if (mainstring[i1] == substring[0])
			{
				int j1 = i1, j2 = 0;
				for (j1, j2; j2 < LengthOfSubstring; j1++, j2++)
				{
					if (mainstring[j1] != substring[j2])
					{
						break;
					}
					if (j2 == LengthSubstringMinusOne)
					{
						cout << "Совпадения начинаются с символа под номером : " << i1-1 << endl;
						FlagOfFindingElem = true;
					}
				}
				if (FlagOfFindingElem)
				{
					break;
				}
				else if (FlagOfFindingElem == false)
				{
					cout << "Такой подстроки нет." << endl;
				}
			}
	}
}


void MaxLengthOfEqual(int* array, int size)
{
	int len1=1, len2=1;
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

/*void MaxDistanceBetweenTwoPoints(int* array, int* array2, int size)
{
	int Distance = 0 , MAX_DISTANCE = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int i1 = 0; i < size; i1++)
			{
				for (int j1 = 0; j1 < size; j1++)
				{
					Distance = (sqrt(pow((array[i] - array[i1]), 2)) + (pow((array2[j] - array2[j1]), 2)));
					if (Distance > MAX_DISTANCE)
					{
						MAX_DISTANCE = Distance;
						continue;
					}
					else Distance = 0;

				}
			}
		}
	}
	cout << "Максимальное расстояние между точками : " << MAX_DISTANCE << endl;
}*/

int main()
{
	setlocale(LC_ALL, "RUS");
	char number_of_task;
	cout << "Введите номер задания ( 1-5 ) : ";
	cin >> number_of_task;
	switch (number_of_task)
	{
	        case '1': 
			{
				int size;
				cout << "Введите размерность массива : ";
				cin >> size;
				int* array = CreateArray(size);
				FillAndShowArray(size,array);
				PositionOfNumb(size,array);
				SubstringInString();
				break;
	        }
			case '2':
			{
				int size;
				cout << "Введите размерность массива : ";
				cin >> size;
				int* array = CreateArray(size);
				FillAndShowArray(size, array);
				numbThanDifferOfTwoPast(array, size);
				break;
			}
			case '3':
			{
				int size;
				cout << "Введите размерность массива : ";
				cin >> size;
				int* array = CreateArray(size);
				FillAndShowArray(size, array);
				MaxLengthOfEqual(array, size);
				break;
			}
			case '4':
			{
				int len, wid;
				cout << "Введите размерность квадратной матрицы : ";
				cin >> len;
				FillMatrix(len);
				transpositionMatrix(FillMatrix(len), len);
			}
			case '5':
			{
				/*int size;
				cout << "Введите кол-во точек : ";
				cin >> size;
				int* array = CreateArray(size);
				int* array2 = CreateArray(size);
				FillAndShowArray(size, array);
				FillAndShowArray(size, array2);
				MaxDistanceBetweenTwoPoints(array, array2, size);
				break;*/
				cout << "Автор был в шоке и не сделал до конца.";
			}
	}
}
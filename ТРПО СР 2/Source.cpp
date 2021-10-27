#include<iostream>
#include<windows.h>
#include<string>
#include<iomanip>
#include<math.h>

using namespace std;

void init1dArray(int*array, int size)
{
	int range;

	cout << "Enter the range of the array: ";
	cin >> range;
	
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % range - (range-1)/2;
	}
}

void print1dArray(int* array, int size)
{
	cout << "Array:  ";
	for (int i = 0; i < size; ++i)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
}

void findPosition(int* array, int size, int pos)
{
	int flag=0;

	for (int i = 0; i < size; ++i)
	{
		if (pos == array[i])
		{
			cout << "The position of first number " << pos << " is " << i <<"\n\n\n";
			flag++;
			break;
		}
	}
	if (flag == 0)
		cout << "There is no such element in this array\n\n\n";
}

void findString(string main_string, string sub_string)
{
	int k, sub_string_length, main_string_length;

	main_string_length = main_string.length();
	sub_string_length = sub_string.length();

	if (main_string_length < sub_string_length)
	{	
		cout << "Short string is longer then long string *~*\n\n\n";
		return;
	}
	
	for (int i = 0; i < main_string_length; ++i)
	{		
		k = 0;
		for (int j = 0; j < sub_string_length; ++j)
		{
			if (main_string[i + j] == sub_string[j])
			{
				k++;
			}
		}
				
		if (k == sub_string_length)
		{
			cout << "The position of short string in long string is " << i << "\n\n\n";
			return;
		}
	}

	if (k != sub_string_length)
		cout << "There is no such short string in the long string\n\n\n";
	
}

void findNumbers(int* array, int size)
{
	int counter = 0;
	cout << "Numbers which fit the Task#2: ";
	for (int i = 2; i < size; ++i)
	{
		if (array[i - 2] - array[i - 1] > array[i])
		{
			cout << array[i] << "  ";
			counter++;
		}
	}
	if (counter == 0)
		cout << "there are no numbers which fit the Task#2 :(";
	cout << "\n\n\n";
}

void delete1dArray(int* array)
{
	delete[]array;
}


int main()
{
	srand(time(NULL));

	//------------Task#1----------------------------------

	int size, number;

	cout << "Enter the size of array: ";
	cin >> size;

	int* array = new int[size];

	init1dArray(array, size);

	print1dArray(array, size);

	cout << "Enter the number from array: ";
	cin >> number;
	cin.ignore(32767, '\n');
	findPosition(array, size, number);


	//--------------Task#1(additional)--------------------------

	string m_s, s_s;

	cout << "Enter long string: ";
	getline(cin, m_s);


	cout << "Enter short string: ";
	getline(cin, s_s);

	findString(m_s, s_s);

	//------------Task#2----------------------------------

	print1dArray(array, size);

	findNumbers(array, size);

	delete1dArray(array);


	return 0;
}
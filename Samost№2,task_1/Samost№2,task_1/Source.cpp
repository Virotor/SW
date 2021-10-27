#include <iostream>
#include <conio.h>
#include <time.h>
#include <string>


using namespace std;
int max_element, min_element, i, j;

int* createArray(int);

void FillArray(int*, int);

void outArray(int*, int);

void posElement(int*, int, int);

void findStr(string main, string sub);

void deleteArray(int*);

int main()
{
	srand(time(NULL));
	cout << "Enter a range of values " << endl
		<< "From ";
	cin >> min_element;
	cout << "Before ";
	cin >> max_element;
	cout << "Enter the job number" << endl;
	switch (_getch())
	{
	case '1':
	{
		cout << "Enter the dimensions of the array ";
		int size;
		cin >> size;
		cout << "Enter the number ";
		int num;
		cin >> num;
		posElement(createArray(size), size, num);
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Additional task " << endl;
		string main, sub;
		cout << "Enter the main line ";
		getline(cin, main);
		cout << "Enter the sub line ";
		getline(cin, sub);
		findStr(main, sub);
		break;
	}
	case '2':
	{
	}
	default:
	{
		cout << "There is no assignment under this number" << endl;
	}
	}
}


int* createArray(int size)
{
	int* array = new int[size];
	FillArray(array, size);
	return  array;
}

void FillArray(int* array, int size)
{
	for (i = 0;i < size;i++)
	{
		array[i] = rand() % (max_element - min_element + 1) + min_element;
	}
}

void outArray(int* array, int size)
{
	cout << "Array" << endl;
	for (i = 0;i < size;i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

void posElement(int* array, int size, int num)
{

	outArray(array, size);
	j = -1;
	for (i = 0;i < size;i++)
	{
		if (array[i] == num)
		{
			j = i;
			break;
		}
		else
		{
			continue;
		}
	}
	cout << "Number position " << num << " is equal to " << j << endl;
	deleteArray(array);
}

void findStr(string main, string sub)
{
	bool flag1 = false;
	int check;
	for (i = 0;i < main.length();i++)
	{
		if (sub[0] == main[i])
		{
			for (j = 0, check = 0;j < sub.length();j++)
			{
				if (sub[j] == main[i])
				{
					check++;

				}
				else
				{
					break;
				}
				if (j == (sub.length() - 1))
				{
					cout << i - check + 1 << endl;
					flag1 = true;
				}
				i++;
			}
		}
		if (flag1 == true)
		{
			break;
		}
	}
	if (flag1 == false)
	{
		cout << "The string does not contain the given substring " << endl;
	}
}

void deleteArray(int* array)
{
	delete[]array;
}


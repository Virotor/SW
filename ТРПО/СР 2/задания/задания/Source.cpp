#include<iostream>
#include<string>
using namespace std;

void fillingArray(int* arr, int size)
{
	int k;
	cout << "������� �������� �������� �������� �������(����� ����������� � ������������� �������): ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand() % (2 * k + 1) - k;
	}
}


void fillingMatrix(int** arr, int cols, int rows)
{
	int k;
	cout << "������� �������� �������� �������� �������(����� ����������� � ������������� �������): ";
	cin >> k;
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (2*k + 1) - k;
		}
	}
}


void matrixOutput(int** arr, int cols, int rows)
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


void arrayOutput(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}


void findNumb(int* arr, int size, int numb)
{
	for (int i = 0; i <= (size - 1); i++)
	{
		if (numb == arr[i])
		{
			cout << i << endl;
			delete[] arr;
			break;
		}
		else continue;
	}
}


void SubstringInString()
{
	cout << "������� ������ : " << endl;
	string mainstring, substring;
	cin.ignore();
	getline(cin, mainstring);
	int LengthOfMainstring, LengthOfSubstring;
	LengthOfMainstring = mainstring.length();
	cout << "������� ��������� : " << endl;
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
					cout << "���������� ���������� � ������� ��� ������� : " << i1 - 1 << endl;
					FlagOfFindingElem = true;
				}
			}
			if (FlagOfFindingElem)
			{
				break;
			}
			else if (FlagOfFindingElem == false)
			{
				cout << "����� ��������� ���." << endl;
			}
		}
	}
}


void raznNumb(int* arr, int size)
{
	for (int i = 2; i < size; i++)
	{
		if ((arr[i - 2] - arr[i - 1]) > arr[i])
		{
			cout << arr[i] << " ";
		}
	}
	delete[] arr;
}


void lengthChainNumber(int* arr, int size)
{
	int max = 0;
	int* k = new int[size];
	for (int i = 0; i < size; i++)
	{
		k[i] = 0;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				k[i]++;
			}
			else break;
		}
		
	}
	for (int i = 0; i < size; i++)
		if (max < k[i]) max = k[i];
	cout<<"����� ������� ����� �����: " << max+1;
}


void matrixMainDiagonal(int** arr, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}


void matrixSideDiagonal(int** arr, int cols, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows-1; j++)
		{
			int tmp = arr[i][j];
			arr[i][j] = arr[rows - j - 1][rows - i - 1];
			arr[rows - j - 1 ][rows - i - 1] = tmp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}


int main() {
	setlocale(LC_ALL, "rus");
	int number;
	cout << "������� ����� ������� �� 1 �� 5 (Default - 5): ";
	cin >> number;
	switch (number) {
	case 1:
	{
		int size, numb;
		cout << "������� ����������� �������: ";
		cin >> size;
		int* arr = new int[size];
		fillingArray(arr, size);
		arrayOutput(arr, size);
		cout << "\n������� �����, ����� �������� ������ �����: ";
		cin >> numb;
		findNumb(arr, size, numb);
		SubstringInString();
		break;
	}
	case 2:
	{
		int size;
		cout << "������� ����������� �������: ";
		cin >> size;
		int* arr = new int[size];
		fillingArray(arr, size);
		arrayOutput(arr, size);
		cout << endl;
		raznNumb(arr, size);
		break;
	}
	case 3:
	{
		int size;
		cout << "������� ����������� �������: ";
		cin >> size;
		int* arr = new int[size];
		fillingArray(arr, size);
		arrayOutput(arr, size);
		cout << endl;
		lengthChainNumber(arr, size);
		break;
	}
	case 4: 
	{   int rows, cols;
		cout << "������� ���������� �����: ";
		cin >> rows;
		cout << "������� ���������� ��������: ";
		cin >> cols;
		int** arr = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			arr[i] = new int[cols];
		}
		fillingMatrix(arr, cols, rows);
		matrixOutput(arr, cols, rows);
		cout << endl;
		cout << "����������������� ������� ������������ ������� ���������: \n";
		matrixMainDiagonal(arr, cols, rows);
		cout << endl;
		cout << "����������������� ������� ������������ �������� ���������: \n";
		matrixSideDiagonal(arr, cols, rows);
		for (int i = 0; i < rows; i++)
		{
			delete[] arr[i];
		}

		delete[] arr;
		break;
	}
	default:
	{
		cout << endl;
		cout << "���� � ���� ������� ����, ��� � �� �����.\n\n� ������ ��� ��� �����, �� �� ���� ��� ������ �� ������))0)";
		cout << endl;
	}
	}
}
/*P.S. 5 ������� ��� ����������� �����, � ����� ������� � �������� ����� � ������������ - �� ������ ������, ������� �A ��������*/
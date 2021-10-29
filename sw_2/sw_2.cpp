#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	void fillMassive(int*, int);
	void fillMatr(int**, int, int);
	void out_Matr(int**, int, int);
	void out_mass(int*, int);
	int sq(int, int, int, int);
	void transp(int**, int**, int, int);
	void transpV(int**, int**, int, int);

	int* a;
	int** mat;
	int** mat2;

	int** cord;
	int choice, len, row, col, max_row = 0, z = 0;
	cout << "Choose a task 1-5 : \n";
	cin >> choice;

	switch (choice)
	{

	default:
	case 1:
		cout << "Input massive length :\n";
		cin >> len;
		a = new int[len];
		fillMassive(a, len);
		out_mass(a, len);
		cout << "\nWhat number do you want to find pos : \n";
		int buff;
		cin >> buff;
		for (int i = 0; i < len; i++)
		{
			if (a[i] == buff)
			{
				cout << "Position : " << i;
				i = len;
			}
		}
		delete[]a;
		break;
	case 2:
		cout << "Input massive size :\n";

		cin >> len;
		a = new int[len];
		fillMassive(a, len);
		out_mass(a, len);
		cout << "\n\nNumbers : ";
		for (int i = 0; i < len - 2; i++)
		{
			if (a[i + 2] < a[i] - a[i + 1])
			{
				cout << a[i + 2] << " ";
			}
		}
		delete[]a;
		break;
	case 3:
		cout << "Input massive length :\n";
		cin >> len;
		a = new int[len];
		fillMassive(a, len);
		out_mass(a, len);


		for (int i = 0; i < len - 1; i++)
		{
			z++;
			if (a[i] != a[i + 1])
			{
				if (max_row < z)
					max_row = z;
				z = 0;
			}
		}
		cout << "\nMax row lenth : " << max_row;
		break;
	}
	return 0;
}


void fillMassive(int* a, int len)
{
	for (int i = 0; i < len; i++)
		a[i] = rand() % 20 - 10;
}

void fillMatr(int** a, int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			a[i][j] = rand() % 20 - 10;
}


void out_mass(int* a, int len)
{
	cout << "Massive : ";
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";

}
void out_Matr(int** a, int row, int col)
{
	cout << "Matrix : \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << setw(3) << a[i][j] << "";
		cout << "\n";
	}
}
int sq(int x1, int x2, int y1, int y2)
{
	int ans = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	return ans;
}

void transp(int** a, int** b, int row, int col)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			b[j][i] = a[i][j];

		}

}


void transpV(int** a, int** b, int col, int row)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			b[j][i] = a[row - 1 - i][col - 1 - j];
		}
}
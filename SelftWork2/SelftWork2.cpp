﻿#include <iostream>
#include <locale>
#include <random>
using namespace std;

class Array
{
private:
    int Size;
    int* Arr;
    void Clear()
    {
        if (Arr != nullptr)
        {
            delete[] Arr;
        }
    }
    const int R_MAX = 40;
    const int R_MIN = -20;
public:
    void Enter()
    {
        Clear();

        cout << "Enter count of elements: ";
        cin >> Size;
        cout << "Fill massive: ";
        Arr = new int[Size];
        for (int i = 0; i < Size; i++)
        {
            cin >> Arr[i];
        }
    }
    void RandEnter()
    {
        Clear();

        cout << "Enter count of elements: ";
        cin >> Size;
        Arr = new int[Size];
        for (int i = 0; i < Size; i++)
        {
            Arr[i] = R_MIN + rand() % (R_MAX);
        }

    }
    void Print()
    {
        for (int i = 0; i < Size; i++)
        {
            cout << Arr[i] << " ";
        }
    }

    void SearchFor()
    {
        int num = 0;
        cout << "Enter number to find: ";
        cin >> num;

        for (int i = 0; i < Size; i++)
        {
            if (Arr[i] == num)
            {
                cout << "Position of first " << num << " is " << i;
                return;
            }
        }
        cout << "There is no " << num << " in array";
    }
    void SearchForDiff()
    {
        cout << "Number, that less than sum of two previos: ";
        int k = 0;
        for (int i = 2; i < Size; i++)
        {
            if (Arr[i] < Arr[i - 1] + Arr[i - 2])
            {
                k++;
                cout << Arr[i] << " ";
            }
        }
        if (k == 0)
        {
            cout << "There are no such elements.";
        }
    }
    void CountConsistency()
    {
        cout << "The bigger co sistency of equal numbers is: ";
        if (Size > 0)
        {
            int max = 1;
            int prevmax = 1;
            int prev = Arr[0];
            for (int i = 1; i < Size; i++)
            {
                if (Arr[i] == prev)
                {
                    prevmax++;
                    max++;
                }
                else
                {
                    if (prevmax > max)
                    {
                        max = prevmax;
                    }
                    prevmax = 1;
                    prev = Arr[i];
                }
            }
            cout << max;
        }
        else
        {
            cout << "Error: Array empty!";
        }
    }

    Array()
    {
        this->Size = 0;
        Arr = new int[Size];
    }
    Array(int size)
    {
        this->Size = size;
        Arr = new int[Size];
    }
    ~Array()
    {
        Clear();
    }
};
class Matrix
{
private:int** Array;
	   int SizeX, SizeY;

public:
	int** GetArray()
	{
		return Array;
	}
	void SetArray(int x, int y, int* value)
	{
		Array[x, y] = value;
	}
	int Sum()
	{
		if (SizeX > 0 && SizeY > 0)
		{
			int sum = 0;
			for (int y = 0; y < SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					sum += Array[x][y];
				}
			}
			return sum;
		}
		else
		{
			return 0;
			cout << "\nНевозможно найти сумму элементов: матрица пустая\n";
		}
	}
	int Median()
	{
		int result = 0;
		if (SizeX * SizeY > 0)
		{
			int size = SizeX * SizeY;
			int* arr = new int[size];
			for (int i = 0, y = 0; y < SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					arr[i] = Array[x][y];
					i++;
				}
			}
			for (int i = 0; i < size - 1; i++)
			{
				for (int a = 0; a < size - i - 1; a++)
				{
					if (arr[a] > arr[a + 1])
					{
						int temp = arr[a];
						arr[a] = arr[a + 1];
						arr[a + 1] = temp;
					}
				}
			}
			cout << "\n";
			int da = ceil((double)(size - 1) / 2);
			result = arr[da];
			delete[] arr;
		}
		else
		{
			cout << "\nНевозможно найти медиану матрицы: матрица пустая\n";
		}

		return result;
	}
	double Average()
	{
		if (SizeX > 0 && SizeY > 0)
		{
			int sum = 0;
			for (int y = 0; y < SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					sum += Array[x][y];
				}
			}
			return (double)sum / (double)(SizeX * SizeY);
		}
		else
		{
			return 0;
			cout << "\nНевозможно среднее арифметическое элементов матрицы: матрица пустая\n";
		}
	}
	int Min()
	{
		if (SizeX > 0 && SizeY > 0)
		{
			int tempMin = Array[0][0];
			for (int y = 0; y < SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					if (Array[x][y] < tempMin)
					{
						tempMin = Array[x][y];
					}
				}
			}
			return tempMin;
		}
		else
		{
			return 0;
			cout << "\nНевозможно найти минимальный элемент: матрица пустая\n";
		}
	}
	int Max()
	{
		if (SizeX > 0 && SizeY > 0)
		{
			int tempMax = Array[0][0];
			for (int y = 0; y < SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					if (Array[x][y] > tempMax)
					{
						tempMax = Array[x][y];
					}
				}
			}
			return tempMax;
		}
		else
		{
			return 0;
			cout << "\nНевозможно найти максимальный элемент: матрица пустая\n";
		}
	}
	int GetSizeX()
	{
		return SizeX;
	}
	int GetSizeY()
	{
		return SizeY;
	}

	void EnterMatrix(bool ClearPrev = false)
	{
		if (ClearPrev)
		{
			Clear();
		}

		cout << "\nВведите размерность матрицы: ";
		cin >> SizeX;
		cin >> SizeY;

		InitMatrix(SizeX, SizeY);

		for (int y = 0; y < SizeY; y++)
		{
			for (int x = 0; x < SizeX; x++)
			{
				cin >> Array[x][y];
			}
		}
	}
	void EnterRandomMatrix(bool ClearPrev = false)
	{
		if (ClearPrev)
		{
			Clear();
		}

		cout << "\nВведите размерность матрицы: ";
		cin >> SizeX;
		cin >> SizeY;

		InitMatrix(SizeX, SizeY);

		int from = 0;
		int to = 0;

		for (int y = 0; y < SizeY; y++)
		{
			for (int x = 0; x < SizeX; x++)
			{
				Array[x][y] = rand() % 20 - 10;
			}
		}
	}
	void PrintMatrix(bool ClearMatrix = false)
	{
		cout << "\n-------------------\n";
		for (int y = 0; y < SizeY; y++)
		{
			for (int x = 0; x < SizeX; x++)
			{
				cout << Array[x][y] << ' ';
			}
			cout << '\n';
		}
		cout << "--------------------\n";
		if (ClearMatrix)
		{
			Clear();
		}
	}

	void InitMatrix(int x, int y)
	{
		SizeX = x;
		SizeY = y;

		Array = new int* [SizeX];
		for (int x = 0; x < SizeX; x++)
		{
			Array[x] = new int[SizeY];
		}
	}
	void Clear()
	{
		if (Array != nullptr)
		{
			for (int x = 0; x < SizeX; x++)
			{
				delete[] Array[x];
			}
		}
	};

	void Transpanate(bool maindiagonale)
	{
		if (SizeX == 0 || SizeY == 0)
		{
			cout << "\nCan't transpanate matrix: matrix empty!\n";
			return;
		}
		int tempX = SizeX;
		int tempY = SizeY;

		int** arr = new int* [tempX];
		for (int x = 0; x < tempX; x++)
		{
			arr[x] = new int[tempY];
		}
		for (int x = 0; x < tempX; x++)
		{
			for (int y = 0; y < tempY; y++)
			{
				arr[x][y] = Array[x][y];
			}
		}
		delete[] Array;
		SizeX = tempY;
		SizeY = tempX;

		Array = new int* [SizeX];
		for (int x = 0; x < SizeX; x++)
		{
			Array[x] = new int[SizeY];
		}
		
		if (maindiagonale)
		{
			for (int x = 0; x < SizeX; x++)
			{
				for (int y = 0; y < SizeY; y++)
				{
					Array[x][y] = arr[y][x];
				}
			}
		}
		else
		{
			for (int x = 0; x < SizeX; x++)
			{
				for (int y = 0; y < SizeY; y++)
				{
					Array[x][SizeY - 1 - y] = arr[y][SizeX - 1 - x];
				}
			}
		}
	}

	bool operator == (const Matrix& other)
	{
		if (SizeX == other.SizeY)
		{
			for (int y = 0; y < other.SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					if (Array[x][y] != other.Array[x][y])
						return false;
				}
			}
			return true;
		}
		return false;
	}
	bool operator != (const Matrix& other)
	{
		if (SizeX == other.SizeY)
		{
			for (int y = 0; y < other.SizeY; y++)
			{
				for (int x = 0; x < SizeX; x++)
				{
					if (Array[x][y] != other.Array[x][y])
						return true;
				}
			}
			return false;
		}
		return true;
	}
	Matrix& operator = (const Matrix& other)
	{
		this->SizeX = other.SizeX;
		this->SizeY = other.SizeY;

		Clear();
		this->Array = new int* [SizeX];
		for (int y = 0; y < SizeY; y++)
		{
			this->Array[y] = new int[SizeY];
		}
		for (int y = 0; y < SizeY; y++)
		{
			for (int x = 0; x < SizeX; x++)
			{
				this->Array[x][y] = other.Array[x][y];
			}
		}

		return *this;
	}
	Matrix& operator * (const Matrix& other)
	{
		int resultX = other.SizeX;
		int resultY = SizeY;

		Matrix* result = new Matrix(0, 0);
		if (SizeX == other.SizeY)
		{
			result->InitMatrix(resultX, resultY);
			for (int y = 0; y < resultY; y++)
			{
				for (int x = 0; x < resultX; x++)
				{
					int sum = 0;
					for (int i = 0; i < SizeX; i++)
					{
						sum += this->Array[i][y] * other.Array[x][i];
					}
					result->Array[x][y] = sum;
				}
			}
		}
		else
		{
			cout << "\n" << "Матрица неопределена" << "\n";
		}

		return *result;
	}
	Matrix& operator * (const int& other)
	{
		int resultX = SizeX;
		int resultY = SizeY;
		Matrix* result = new Matrix(resultX, resultY);

		for (int y = 0; y < resultY; y++)
		{
			for (int x = 0; x < resultX; x++)
			{
				int sum = Array[x][y] * other;
				result->Array[x][y] = sum;
			}
		}

		return *result;
	}
	Matrix& operator + (const Matrix& other)
	{
		int resultX = other.SizeX;
		int resultY = SizeY;

		Matrix* result = new Matrix(0, 0);
		if (SizeX == other.SizeX && SizeY == other.SizeY)
		{
			result->InitMatrix(resultX, resultY);
			for (int y = 0; y < resultY; y++)
			{
				for (int x = 0; x < resultX; x++)
				{
					int sum = this->Array[x][y] + other.Array[x][y];
					result->Array[x][y] = sum;
				}
			}
		}
		else
		{
			cout << "\n" << "Матрица неопределена" << "\n";
		}

		return *result;
	}

	Matrix(const Matrix& other)
	{
		this->InitMatrix(other.SizeX, other.SizeY);
		for (int y = 0; y < SizeY; y++)
		{
			for (int x = 0; x < SizeX; x++)
			{
				this->Array[x][y] = other.Array[x][y];
			}
		}
	}
	Matrix(int x, int y)
	{
		InitMatrix(x, y);
	};
	Matrix()
	{
		InitMatrix(0, 0);
	};
	~Matrix()
	{
		//Clear();
	};
};
class Vector2
{
private:
	int x;
	int y;
public:
	static double Distance(Vector2 p1, Vector2 p2)
	{
		return sqrt((p1.x - p2.x) * (p1.x - p2.x) * (p1.y - p2.y) * (p1.y - p2.y));
	}
	void EnterPoint()
	{
		cout << "Enter x, y: ";
		cin >> x >> y;
	}
};

void CheckTask1()
{
    Array arr1(0);
    arr1.RandEnter();
    arr1.Print();
    cout << "\n";
    arr1.SearchFor();
}
void CheckTask2()
{
    Array arr1(0);
    arr1.RandEnter();
    arr1.Print();
    cout << "\n";
    arr1.SearchForDiff();
}
void CheckTask3()
{
    Array arr1(0);
    arr1.Enter();
    arr1.Print();
    cout << "\n";
    arr1.CountConsistency();
}
void CheckTask4()
{
	Matrix matrix(0, 0);
	matrix.EnterRandomMatrix();
	Matrix matrixclone = matrix;
	matrix.PrintMatrix();
	cout << "\nTranspanate right\n";
	matrix.Transpanate(true);
	matrix.PrintMatrix();
	cout << "\nTranspanate left\n";
	matrixclone.Transpanate(false);
	matrixclone.PrintMatrix();
}
void CheckTask5()
{
	int Count = 0;
	cout << "Enter count of point: ";
	cin >> Count;
	if (Count < 2)
	{
		cout << "Enter at least 2 point\n";
		return;
	}
	Vector2* Points = new Vector2[Count];
	for (int i = 0; i < Count; i++)
	{
		Points[i].EnterPoint();
		cout << "\n";
	}
	
	int Max = 0;
	for (int i = 0; i < Count; i++)
	{
		for (int a = 0; a < Count; a++)
		{
			if (a == i)
				continue;
			double Dst = Points->Distance(Points[i], Points[a]);
			if (Dst > Max)
			{
				Max = Dst;
			}
		}
	}
	cout << "Max distance between points is: " << Max;
}

int main()
{
    setlocale(LC_ALL, "rus");

    CheckTask5();
}

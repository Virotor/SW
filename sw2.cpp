#include <iostream>
#include <time.h>

using namespace std;

int ArrTwo(int*, int);
void ArrThree(int*, int);
void numfinder(int, int*, int);
void LessNumber(int*, int);
int Length(int*, int);


void ArrOne(int*& x, int size)
{
	x = new int[size];
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int size, num;
	cout << "������� ������ �������: "; cin >> size;

	int* a;
	ArrOne(a, size);
	ArrTwo(a, size);
	ArrThree(a, size);


	cout << "/ / / / / ������� 1 / / / / /" << endl;
	cout << endl << "������� �����: ";
	cin >> num;
	numfinder(num, a, size);

	cout << "/ / / / / ������� 2 / / / / /" << endl;
	LessNumber(a, size);

	cout << "/ / / / / ������� 3 / / / / /" << endl;
	cout << "����� ���������� ������������������ ���������� �����: " << Length(a, size) << endl;
	
	return 0;
}



int ArrTwo(int* a, int size)
{
	for (int i = 0; i < size; i++)
	
		a[i] = rand() % 20 - 10;
	
	return *a;
}

void ArrThree(int* a, int size)
{
	for (int i = 0; i < size; i++)
	
		cout << a[i] << "  ";
	
	cout << endl;
}



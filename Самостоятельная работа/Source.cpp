#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "������� �����,����� ������ ���� �������������";
	

	cin >> n;
	if (n <= 0)
	{
		cout << "����� ������ ���� �������������" << endl;
		return;
	}
	const int SIZE = 100;
	int arr[SIZE];
	int d, i = 0;
	
	for (; n > 0;)
	{
		d = n % 10;
		arr[i] = d;
		n = n / 10;
		i++;
	}
	i--;
	for (int c = i; c>=0 ; c--)
	{
		cout << arr[c] << endl;
	}

	
}
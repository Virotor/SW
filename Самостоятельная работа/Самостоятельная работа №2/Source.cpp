#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int n, k;
	const int SIZE = 100;
	int arr[SIZE];
	int d, i = 0;
	cout << "������� �����,����� ������ ���� �������������";


	cin >> n;
	if (n <= 0)
	{
		cout << "����� ������ ���� �������������" << endl;
		return;
	}
	cout << "������� ������ ����� " << endl;
	cin >> k;
	
	
	
	while (n > 0)
	{

		d = n % 10;
		arr[i] = d;
		n = n / 10;
		i++;

	}
	i--;
	for (int c = i; c > i-k; c--)
	{
		cout << arr[c];
	}


}
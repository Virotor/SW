﻿#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int arr[4];
	for (size_t i = 0; i < 4; i++)
	{
		arr[i] = rand() % 10;
	}
	int find[4];
	while (1)
	{
		for (size_t i = 0; i < 4; i++)
		{
			find[i] = rand() % 10;
		}
		if ((arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3]) != (find[0] * 1000 + find[1] * 100 + find[2] * 10 + find[3])) continue;
		else break;
	}
	cout << "Пароль: ";
	cout << find[0] << find[1] << find[2] << find[3] << std::endl;
	system("pause");
}
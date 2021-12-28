#include<iostream>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	string num;
	cout << "Число="; cin >> num;
	for (int i = 0; i < num.length(); i++)
	{
		cout << num[i] << endl;
	}
	system("pause");
	return 0;
}
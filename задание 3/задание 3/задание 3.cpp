#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, k, count = 0;                                           
	cout << "Введите n и k" << endl;
	cin >> n >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;
	system("pause");
	return 0;
}
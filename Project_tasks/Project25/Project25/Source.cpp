#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, e, f;
	cout << " Введите длину, ширину и высоту отверстия: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << " Введите длину, ширину и высоту параллелепипеда: " << endl;
	cin >> d;
	cin >> e;
	cin >> f;
	if ((a >= f && b >= e) || (a >= f && b >= d) || (a >= d && b >= e) || (b >= f && a >= e) || (b >= f && a >= d) || (b >= d && a >= e))
	{
		cout << " Можно " << endl;
	}
	else
	{
		cout << " Нельзя " << endl;
	}
	return 0;
}
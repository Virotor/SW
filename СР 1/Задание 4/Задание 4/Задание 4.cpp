#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double w, h, l, z, x;
	cout << "ВВедите длину параллелепипеда" << endl;
	cin >> l;
	cout << "ВВедите высоту параллелепипеда" << endl;
	cin >> h;
	cout << "ВВедите ширину параллелепипеда" << endl;
	cin >> w;
	cout << "ВВедите ширину отверстия" << endl;
	cin >> z;
	cout << "ВВедите высоту отверстия" << endl;
	cin >> x;
	if (w > 0 && h > 0 && l > 0 && z > 0 && x > 0)
	{
		if (l <= x and w <= z or h <= z)
			cout << "Можно";
		else if (l <= z and w <= x or h <= x) cout << "можно";
		else if (w <= x and w <= z or h <= z) cout << "можно";
		else if (w <= z and w <= x or h <= x) cout << "можно";
		else if (h <= x and w <= z or h <= z) cout << "можно";
		else if (h <= z and w <= x or h <= x) cout << "можно";
		else cout << "нельзя";
	}
	else cout << "Ошибка";
	return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, h, a1, b1, k, d, d1, d2, d3;
	cout << "Input base length: ";
	cin >> a;
	cout << "Input base width: ";
	cin >> b;
	cout << "Input height: ";
	cin >> h;
	cout << "Input lengths of hole: ";
	cin >> a1;
	cout << "Input width of hole: ";
	cin >> b1;
	d = sqrt(pow(a, 2) + pow(b, 2));
	d1 = sqrt(pow(a, 2) + pow(h, 2));
	d2 = sqrt(pow(b, 2) + pow(h, 2));
	d3 = sqrt(pow(a1, 2) + pow(b1, 2));
	if (a <= a1 && b <= b1)
		cout << "\n " << "The parallelepiped goes into the hole ";

	else {
		if (a <= a1 && b <= b1)
			cout << "\n " << "The parallelepiped goes into the hole ";
		else {
			if (h <= a1 && b <= b1)
				cout << "\n " << "The parallelepiped goes into the hole ";
			else {
				if (b <= b1 && h <= b1)
					cout << "\n " << "The parallelepiped goes into the hole ";
				else {
					if (h <= a1 && b <= b1)
						cout << "\n " << "The parallelepiped goes into the hole ";
					else {
						if (a <= b1 && h <= a1)

							cout << "\n " << "The parallelepiped goes into the hole ";
						else {
							if (a <= a1 && h <= b1)

								cout << "\n " << "The parallelepiped goes into the hole throught";
							else
							{

								if (d <= d3)
									cout << "\n " << "The parallelepiped goes into the hole ";
								else {
									cout << "\n " << "The parallelepiped not fit intothe hole";
								}
							}
						}
					}
				}
			}
		}
	}




	return 0;
}

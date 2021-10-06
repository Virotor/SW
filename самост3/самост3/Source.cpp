#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double a, b, h, c, s;
	cout << "Введите длину = ";
	cin >> a;
	cout << "Введите ширину = ";
	cin >> b;
	cout << "Введите высоту = ";
	cin >> h;
	cout << "Введите длину отверстия = ";
	cin >> c;
	cout << "Введите ширину отверстия = ";
	cin >> s;
	if ((a <= c) && (b <= s)) {


		cout << "Пройдет через основание " << endl;
	}
	else {
		if ((a <= s) && (b <= c)) {
			cout << "Пройдет через основание " << endl;
		}
		else {
			if (((h <= s) || (h <= c)) && ((a <= s) || (a <= c))) {
				cout << "Пройдет через отверстие " << endl;
			}
			else {
				if ((h <= s) || (h <= c) && ((b <= s) || (b <= c))) {
					cout << "Пройдет в отверстие " << endl;
				}
				else {
					cout << "Не пройдет в отверстие " << endl;
				}
			}
		}
	}

}
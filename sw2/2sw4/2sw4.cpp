#include <math.h>
using namespace std;
int main() {
	// 4 çàäàíèå
	setlocale(LC_ALL, "RUS");
	double length, width, height, r;
	int ñ;
	cout << "âåäèòå ðàä - "; cin >> r;
	cout << "âåäèòå èïåäà - "; cin >> length;
	cout << "âåäèòå ðàëëåëåïèïåäà - "; cin >> width;
	cout << "âåäèòå- "; cin >> height;
	if (((pow(length * length + width * width, 0.5)) <= r * 2) || ((pow(height * height + width * width, 0.5)) <= r * 2) || ((pow(length * length + height * height, 0.5)) <= r * 2)) {
		ñ = 0;
	}
	else {
		ñ = 1;
	}
	switch (ñ) {
	case 0:
		cout << "" << endl;
		break;
	case 1:
		cout << " îòâåðñòèå" << endl;
		break;
	}
	return 0;
}
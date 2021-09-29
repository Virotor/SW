#include <iostream>
using namespace std;

int main() {
	cout << "Задание 5" << endl;
	int Arr[4];
	for (int i = 0; i < 4; i++) {
		Arr[i] = rand() % 9;
	}
	cout << "Пароль генерируется...\nПароль сгенерирован..." << endl;

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				for (int k = 0; k < 10; k++) {
					if (Arr[0] == x && Arr[1] == y && Arr[2] == z && Arr[3] == k) {
						cout << "Пароль подобран: " << x << y << z << k;
						break;
					}

				}
			}
		}
	}
	return 0;
}
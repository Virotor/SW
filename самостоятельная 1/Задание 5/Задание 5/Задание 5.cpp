#include<iostream>
#include<string>
#include <random>
using namespace std;
int main()
{
	int a = rand() % 10, b = rand() % 10, c = rand() % 10, d = rand() % 10, num;
	string secret_num, quess = "0000";

	secret_num = to_string(a) + to_string(b) + to_string(c) + to_string(d);

	for (int i = 0; i <= 9; i++) {
		quess.replace(3, 1, to_string(i));
		if (quess == secret_num) {
			cout << "password: " << quess << endl;
		}
		for (int j = 0; j <= 9; j++) {
			quess.replace(2, 1, to_string(j));
			if (quess == secret_num) {
				cout << "password: " << quess << endl;
			}
			for (int l = 0; l <= 9; l++) {
				quess.replace(1, 1, to_string(l));
				if (quess == secret_num) {
					cout << "Password: " << quess << endl;
				}
				for (int f = 0; f <= 9; f++) {
					quess.replace(0, 1, to_string(f));
					if (quess == secret_num) {
						cout << "password: " << quess << endl;
					}
				}
			}
		}
	}
	return 0;
}
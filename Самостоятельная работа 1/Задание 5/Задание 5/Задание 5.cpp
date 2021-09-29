
#include <string>
#include <random>
#include <iostream>
using namespace std;
int main()
{
//5 задание
	setlocale(LC_ALL, "rus");
int a1 = rand() % 10, a2 = rand() % 10, a3 = rand() % 10, a4 = rand() % 10, num;
string hidden_num, password = "0000";

hidden_num = to_string(a1) + to_string(a2) + to_string(a3) + to_string(a4);

for (int i = 0; i <= 9; i++) {
	password.replace(3, 1, to_string(i));
	if (password == hidden_num) {
		cout << "Подобранный пароль: " << password << endl;
	}
	for (int j = 0; j <= 9; j++) {
		password.replace(2, 1, to_string(j));
		if (password == hidden_num) {
			cout << "Подобранный пароль:  " << password << endl;
		}
		for (int l = 0; l <= 9; l++) {
			password.replace(1, 1, to_string(l));
			if (password == hidden_num) {
				cout << "Подобранный пароль:  " << password << endl;
			}
			for (int f = 0; f <= 9; f++) {
				password.replace(0, 1, to_string(f));
				if (password == hidden_num) {
					cout << "Подобранный пароль: " << password << endl;
				}
			}
		}
	}
}
system("pause");
return 0;
}


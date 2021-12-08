#include<iostream>
#include<string>
#include <random>
using namespace std;
int main()                                       
{
	setlocale(LC_ALL, "ru");
	int num1 = rand() % 10, num2 = rand() % 10, num3 = rand() % 10, num4 = rand() % 10, num;        
	string hidden_num, quess = "0000";

	hidden_num = to_string(num1) + to_string(num2) + to_string(num3) + to_string(num4);

	for (int i = 0; i <= 9; i++) {
		quess.replace(3, 1, to_string(i));
		if (quess == hidden_num) {
			cout << "Пароль: " << quess << endl;
		}
		for (int j = 0; j <= 9; j++) {
			quess.replace(2, 1, to_string(j));
			if (quess == hidden_num) {
				cout << "Пароль: " << quess << endl;
			}
			for (int l = 0; l <= 9; l++) {
				quess.replace(1, 1, to_string(l));
				if (quess == hidden_num) {
					cout << "Пароль: " << quess << endl;
				}
				for (int f = 0; f <= 9; f++) {
					quess.replace(0, 1, to_string(f));
					if (quess == hidden_num) {
						cout << "Пароль: " << quess << endl;
					}
				}
			}
		}
	}

	system("pause");


	return 0;
}

#include<string>
#include<iostream>
#include <random>
using namespace std;
int main() {
int num1 = rand() % 10, num2 = rand() % 10, num3 = rand() % 10, num4 = rand() % 10, num;         //5 задание
string hid_num, ans = "0000";

hid_num = to_string(num1) + to_string(num2) + to_string(num3) + to_string(num4);

for (int i = 0; i <= 9; i++) {
	ans.replace(3, 1, to_string(i));
	if (ans == hid_num) {
		cout << "password: " << ans << endl;
	}
	for (int j = 0; j <= 9; j++) {
		ans.replace(2, 1, to_string(j));
		if (ans == hid_num) {
			cout << "password: " << ans << endl;
		}
		for (int l = 0; l <= 9; l++) {
			ans.replace(1, 1, to_string(l));
			if (ans == hid_num) {
				cout << "password: " << ans << endl;
			}
			for (int f = 0; f <= 9; f++) {
				ans.replace(0, 1, to_string(f));
				if (ans == hid_num) {
					cout << "password: " << ans << endl;
				}
			}
		}
	}
}

system("pause");


return 0;


}
#include <iostream>
#include <ctime>
#include <cstdlib>


int random() {
	
	int r = rand() % 10;
	return r;
}
using namespace std;
int main() {
	srand(time(NULL));
	int num1 = random(), num2 = random(), num3 = random(), num4 = random(), select1 = 0, select2 = 0, select3 = 0, select4 = 0;
	
	while (num1 != select1) {
		select1++;
	}
	while (num2 != select2) {
		select2++;
	}
	while (num3 != select3) {
		select3++;
	}
	while (num4 != select4) {
		select4++;
	}
	cout << "пороль: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
	cout << "результат подбора: " << select1 << " " << select2 << " " << select3 << " " << select4;
}
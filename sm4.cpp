#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b,h,ao,bo;
	cout << "Введите длину параллелепипеда" << endl;
	cin >> a;
	cout << "Введите высота параллелепипеда" << endl;
	cin >>h ;
	cout << "Введите ширина параллелепипеда" << endl;
	cin >>b ;
	cout << "Введите длину отверстия" << endl;
	cin >> ao;
	cout << "Введите ширина отверстия" << endl;
	cin >> bo;
	if( (a < ao, b < bo)|| (b < ao, a < bo)|| (b < bo, h < ao)|| (b < ao, h < bo) || (a < ao, h < bo)|| (h < ao, a < bo) ){
		cout << "Проходит" << endl;;
	}
	else {
		cout << "Не проходит" << endl;
	}
	return 0;
}

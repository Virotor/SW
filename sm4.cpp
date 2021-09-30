#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int length, width,hight,lengtho,widtho;
	cout << "Введите длину параллелепипеда" << endl;
	cin >> length;
	cout << "Введите высота параллелепипеда" << endl;
	cin >>hight ;
	cout << "Введите ширина параллелепипеда" << endl;
	cin >>width ;
	cout << "Введите длину отверстия" << endl;
	cin >> lengtho;
	cout << "Введите ширина отверстия" << endl;
	cin >> widtho;
	if( (length < lengtho, width < widtho)|| (width < lengtho, length < widtho)|| (width < widtho, hight < lengtho)|| (width < lengtho, hight < widtho) || (length < lengtho, hight < widtho)|| (hight < lengtho, length < widtho) ){
		cout << "Проходит" << endl;;
	}
	else {
		cout << "Не проходит" << endl;
	}
	return 0;
}

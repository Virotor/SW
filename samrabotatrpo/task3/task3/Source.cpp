#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	string n;
	int k;
	cout<<"Введите n:"; cin>>n;
	cout<<"Введите k:"; cin>>k;
	cout<<"К чисел из числа n= "<<n.substr(0, k);
}
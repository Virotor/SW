#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	string n;
	int k;
	cout<<"������� n:"; cin>>n;
	cout<<"������� k:"; cin>>k;
	cout<<"� ����� �� ����� n= "<<n.substr(0, k);
}
#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int vis_P, sh_P, vis, sh;
	cout << "введите ширину отверстия "; cin >> sh;
	cout << "введите высоту отверстия "; cin >> vis;
	cout << "введите ширину параллелипипеда "; cin >> sh_P;
	cout << "введите высоту параллелипипеда "; cin >> vis_P;
	if ((vis>=vis_P) || (sh>=sh_P)) 
	{
		cout << "уходим уходим ухооодим";
	}
		else cout << "давай по новой Миша всё не так";
	return 0;
}
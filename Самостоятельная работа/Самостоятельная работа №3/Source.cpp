#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int length_Holes, width_Holses, height_Holses, length_Par, width_Par, height_Par, V_Par, V_Holses;
	cout << "Введите длину отверстия" << endl;
	cin >>length_Holes ;
	cout << "Введите ширину отверстия" << endl;
	cin >> width_Holses;
	cout << "Введите высоту отверстия" << endl;
	cin >>height_Holses ;
	cout << "Введите длину параллепипеда " << endl;
	cin >>length_Par ;
	cout << "Введите ширину параллепипеда " << endl;
	cin >> width_Par;
	cout << "Введите высоту параллепипеда " << endl;
	cin >>height_Par ;
	V_Par = length_Par * width_Par * height_Par;//обЪем параллепипеда
	V_Holses= length_Holes * width_Holses * height_Holses;//объем отверстия
	if (V_Holses < V_Par)
	{
		cout << "Не поместится" << endl;
	}
	else
	{
		
		if ((length_Par < length_Holes && width_Par < width_Holses && height_Par < height_Holses) || (length_Par < width_Holses && width_Par < length_Holes && height_Par < height_Holses) || (length_Par < height_Holses && width_Par < width_Holses && height_Par < length_Holes) || (width_Par < height_Holses && length_Par < width_Holses && height_Par < length_Holes) || (height_Par < width_Holses && length_Par < length_Holes && width_Par < height_Holses) || (height_Par < width_Holses && length_Par < height_Holses && width_Par < height_Holses))
		{
			cout << "Параллепипед пройдет в отверстие " << endl;
		}
		else
		{
			cout << "Параллепипед  не пройдет в отверстие " << endl;
		}
	}
}
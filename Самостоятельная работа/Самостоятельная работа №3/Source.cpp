#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int length_Holes, width_Holses, height_Holses, length_Par, width_Par, height_Par, V_Par, V_Holses;
	cout << "������� ����� ���������" << endl;
	cin >>length_Holes ;
	cout << "������� ������ ���������" << endl;
	cin >> width_Holses;
	cout << "������� ������ ���������" << endl;
	cin >>height_Holses ;
	cout << "������� ����� ������������� " << endl;
	cin >>length_Par ;
	cout << "������� ������ ������������� " << endl;
	cin >> width_Par;
	cout << "������� ������ ������������� " << endl;
	cin >>height_Par ;
	V_Par = length_Par * width_Par * height_Par;//����� �������������
	V_Holses= length_Holes * width_Holses * height_Holses;//����� ���������
	if (V_Holses < V_Par)
	{
		cout << "�� ����������" << endl;
	}
	else
	{
		
		if ((length_Par < length_Holes && width_Par < width_Holses && height_Par < height_Holses) || (length_Par < width_Holses && width_Par < length_Holes && height_Par < height_Holses) || (length_Par < height_Holses && width_Par < width_Holses && height_Par < length_Holes) || (width_Par < height_Holses && length_Par < width_Holses && height_Par < length_Holes) || (height_Par < width_Holses && length_Par < length_Holes && width_Par < height_Holses) || (height_Par < width_Holses && length_Par < height_Holses && width_Par < height_Holses))
		{
			cout << "������������ ������� � ��������� " << endl;
		}
		else
		{
			cout << "������������  �� ������� � ��������� " << endl;
		}
	}
}
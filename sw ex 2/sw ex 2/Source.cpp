

#include<stdio.h>
#include <iostream>
int main ()
{
setlocale(LC_ALL, "Russian");
printf("������� ���� �����(�� 1 �� 7) � � ����� ��� ���� ������:\n");
int vasheChislo;
scanf_s("%d", &vasheChislo);
switch (vasheChislo)
{
case 1:
	printf("��� ��� �����������");
	break;
case 2:
	printf("������ �� ����� ��� �������");
	break;
case 3:
	printf("��� ������ �������� ������,�� ���� �����");
	break;
case 4:
	printf("������� �������");
	break;
case 5:
	printf("����� �������");
	break;
case 6:
	printf("����������");
	break;
case 7:
	printf("� ����������� ��� � �������");
	break;

default:
	printf("����� ���� �����");
}



return 0;
}
#include "pch.h"
#include <iostream>
#include <ctime>
#include<stdlib.h>
#include <iomanip>

using namespace std;

void Element_search(int array_size) //������� ��� ������� �������
{
	srand(time(NULL));

	int* array = new int[array_size];//����� ���������� ������

	for (int i = 0; i < array_size; i++) //����� �������� ����������� �������
	{
		array[i] =(rand() % 20)-10;
		cout << "array[" << i << "]: ";
		cout << array[i] << endl;
	}
	int value_of_element; cout << "Value of element: "; cin >> value_of_element;
	bool check = false;//�������� �� �������� ��������
	for (int i = 0; i < array_size; i++)
	{
		if (array[i] == value_of_element)//����� ���������� ��������
		{
			cout << "Number of this element: " << i << endl;
			array_size = i;//�����, ����� �������� �������� ��������
			check = true;
		}
	}
	if (check == false) //���� ��� �������� ������� ������
	{
		cout << "ERROR";
	}
	delete[] array;
}

void Element_by_deference(int array_size)//������� ��� ������� �������
{
	srand(time(NULL));

	int* array = new int[array_size];//����� ���������� ������

	for (int i = 0; i < array_size; i++)//����� �������� ����������� �������
	{
		array[i] = (rand() % 20) - 10;
		cout << "array[" << i << "]: ";
		cout << array[i] << endl;
	}
	
	for (int i = 2; i < array_size; i++)/*���� �������� ��������;
										i=2 ��� ���� ����� ���������� ������ ��� �������� �������, 
										��� ��� ��� �� �������� �� �������*/
	{
			if (array[i + 1] < array[i - 1] - array[i])
			{
				cout << "Number of this element: " << i << endl;
			}
	}
	delete[] array;
}
void Sequence(int array_size) 
{
	srand(time(NULL));

	int* array = new int[array_size];//����� ���������� ������

	for (int i = 0; i < array_size; i++)//����� �������� ����������� �������
	{
		array[i] = (rand() % 20)-10;
		cout << "array[" << i << "]: ";
		cout << array[i] << endl;
	}

	
		int k = 1;
		int max_sequence = 1;
		for (int i = 0; i < array_size - 1; i++) //���� ��� �������� ��������� ��������� �������
		{
			if (array[i] == array[i + 1]) {
				k++;

			}
			else //���� � ����� ������������������ ������������, ������ ����� � ������
			{
				k = 1;
			}
			if (k > max_sequence)//���� ������������������ ������ ���������� �� ������ �������� �������� � ���� ��������
				max_sequence = k;
		}
		cout <<"max lenght of sequence "<< max_sequence << endl;//����������� �� �������
		
	
	delete[] array;
}
void trasposition_of_matrix(int number_of_lines, int number_of_columns)
{
	int** matrix = new int* [number_of_lines];//����� �������
	for (int i = 0; i < number_of_lines; i++) 
	{
		matrix[i] = new int[number_of_columns];
		for (int j = 0; j < number_of_columns; j++) //������� �������� �������
		{
			matrix[i][j] = (rand() % 20) - 10;
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}
	
	cout << "after transposition from the main diagonal\n";//�������������� �� ������� ���������

	for (int i = 0; i < number_of_lines; i++)
	{

		for (int j = 0; j < number_of_columns; j++)
		{
			cout << setw(3) << matrix[j][i];//������ ������� �������� ������������ ������� ���������
		}
		cout << endl;
	}
	
	cout << "after transposition from the side diagonal\n";// �������������� �� �������� ���������

	for (int i = number_of_lines - 1; i > -1; i--)
	{

		for (int j = number_of_columns - 1; j > -1; j--)
		{
			cout << setw(3) << matrix[j][i];//������ ������� �������� ������������ �������� ���������
		}
		cout << endl;
	}

	for (int i = 0; i < number_of_lines; i++)//�������� ���������� �������
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
double Length_By_Y(int y, int y1) {

	int length_at_Y;

	if (y > 0 && y1 > 0)
	{
		length_at_Y = fabs(y - y1);
	}

	else {
		if (y < 0 && y1 < 0)
		{
			length_at_Y = fabs(y - y1);
		}

		else {
			if (y < 0 && y1 > 0)
			{
				length_at_Y = y1 - y;
			}

			else { length_at_Y = y - y1; }
		}
	}
	return length_at_Y;
}
double Length_By_X(int x, int x1) {

	int length_at_X;

	if (x > 0 && x1 > 0)
	{
		length_at_X = fabs(x - x1);
	}

	else {
		if (x < 0 && x1 < 0)
		{
			length_at_X = fabs(x - x1);
		}

		else {
			if (x < 0 && x1 > 0)
			{
				length_at_X = x1 - x;
			}

			else { length_at_X = x - x1; }
		}
	}
	return length_at_X;
}
void MatrixOfPoint(int number_of_points) {

	cout << endl;

	int** matrix = new int* [number_of_points];
	for (int i = 0; i < number_of_points; i++) {

		matrix[i] = new int[number_of_points];

		for (int j = 0; j < 2; j++) {

			matrix[i][j] = rand() % 20 - 10;
			cout << setw(5) << matrix[i][j];
		}

		cout << endl;
	}

	int x;
	int y;
	int x1;
	int y1;
	double length;
	double max = 0;
	for (int i = 0; i < number_of_points; i++) {

		x = matrix[i][0];
		y = matrix[i][1];

		for (int i1 = i + 1; i1 < number_of_points; i1++) {

			x1 = matrix[i1][0];
			y1 = matrix[i1][1];

			if (x == x1)
			{
				length = Length_By_Y(y, y1);
			}

			if (y == y1)
			{
				length = Length_By_X(x, x1);
			}

			if (x == x1 && y == y1) {
				length = 0;
			}

			if (x != x1 && y != y1) {
				length = sqrt(pow((Length_By_X(x, x1)), 2) + pow((Length_By_Y(y, y1)), 2));
			}

			if (length > max) {
				max = length;
			}

		}

	}

	cout << endl << "Max length: " << max << endl;

	for (int i = 0; i < number_of_points; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

}
int main() 
{
	int array_size; cout << "Size of array: "; cin >> array_size;// ����� ������ ��������
	Element_search(array_size);// �������� ������� ������� �������
	cout << endl << " _______________________________________________\n\n";
	system("pause");
	
	Element_by_deference(array_size);// �������� ������� ������� �������
	cout << endl << " _______________________________________________\n\n";
	system("pause");

	Sequence(array_size);// �������� ������� �������� �������
	cout << endl << " _______________________________________________\n\n";
	system("pause");

	int number_of_lines, number_of_columns; 
	cout << "enter size of matrix\n";// ����� ������ �������
	cout << "lines = "; cin >> number_of_lines;
	cout << "columns = "; cin >> number_of_columns;
	
	if (number_of_lines == number_of_columns) {

		trasposition_of_matrix(number_of_lines, number_of_columns);// �������� ������� ��������� �������
		
	}
	else {

		cout << "Error"; 
	}

	cout << endl << " _______________________________________________\n\n";
	system("pause");
	
	int number_of_points; cout << "Number of points: "; cin >> number_of_points;

	MatrixOfPoint(number_of_points);

	cout << "________________________________________________" << endl << endl;

	return 0;
}

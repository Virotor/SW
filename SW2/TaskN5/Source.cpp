#include <iostream>
#include <ctime>
#include <math.h>
#include <algorithm>

using namespace std;

void fillingMatrix(int** Matrix, int unsigned rows, int unsigned columns)
{
	srand(time(NULL));
	unsigned int i = 0;
	for (i; i < rows; i++)
	{
		for (unsigned int ii = 0; ii < columns; ii++)
			Matrix[i][ii] = 100 - rand() % 201;
	}
};
void outputtingMatrix(int** Matrix, int unsigned rows, int unsigned columns)
{
	unsigned int i = 0;
	for (i; i < rows; i++)
	{
		for (unsigned int ii = 0; ii < columns; ii++)
			printf(" %-3i ", Matrix[i][ii]);
		cout << endl;
	}
};


int main()
{
	unsigned int numberOfPoints;
	cout << "Enter number of points:\n > "; cin >> numberOfPoints;
	if (numberOfPoints < 2)
	{
		cout << "There are not enought of points";
		return 0;
	};
	int** points = new int* [numberOfPoints];
	for (unsigned int i = 0; i < numberOfPoints; i++)
	{
		points[i] = new int[2];
	};
	fillingMatrix(points, numberOfPoints, 2);
	cout << "Generated points is:\n\
 X     Y\n";
	outputtingMatrix(points, numberOfPoints, 2);
	unsigned int numberofVariations = numberOfPoints * (numberOfPoints - 1.) / 2.;
	unsigned int* sqrOfDistances = new unsigned int [numberofVariations];
	unsigned int counter = 0;
	for (unsigned int i = 0; i < numberOfPoints; i++)
	{
		for (unsigned int ii = i+1; ii < numberOfPoints; ii++)
		{
			sqrOfDistances[counter] = pow(points[i][0] - points[ii][0],2) + pow(points[i][1]-points[ii][1],2);
			counter++;
		};
	};
	sort(sqrOfDistances, sqrOfDistances + numberofVariations);
	cout << "\nMaximum distance between two points is: " << pow(sqrOfDistances[numberofVariations - 1], 1/2.);
	return 0;
}
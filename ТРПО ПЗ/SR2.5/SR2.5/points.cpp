#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int volum_points;
	cout << "Введите количество точек: ";
	cin >> volum_points;
	int** Coor_points = new int* [volum_points];
	for (int i = 0; i < volum_points; i++) {
		Coor_points[i] = new int[2];
	}
}

void Enter_find_distPoints(int** Coor_Points, int volum_points) {
	for (int i = 0; i < volum_points; i++) {
		for (int j = 0; j < 2; j++) {
			Coor_Points[i][j] = -5 + rand() % 15;
		}
	}
	bool Check_X = false, Check_Y = false;
	double dist_Points, dist_save_Points = -1;
	int delX, delY;
	for (int i = 0; i < volum_points; i++) {
		for (int k = 1; k < volum_points; k++) {
			for (int j = 0; j < 2; j++) {
				if (j == 0) {
					delX = 0;
					delX = Coor_Points[i][j] - Coor_Points[k][j];
					Check_X = true;
				}
				if (j == 1) {
					delY = 0;
					delY = Coor_Points[i][j] - Coor_Points[k][j];
					Check_Y = true;
				}
				if (Check_Y == true && Check_X == true) {
					dist_Points = sqrt(pow(delX, 2) + pow(delY, 2));
					if (dist_save_Points < dist_Points) dist_save_Points = dist_Points;
				}

			}
		}
	}

	cout << "Наибольшее расстояние между точками равно: " << dist_save_Points;

	delete[] arr;
}

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void findMaxDistance(int** arr, int n) {
    double maxDistance = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n && j != i; j++) {
            double distance = sqrt(pow(arr[i][0] - arr[j][0], 2) + pow(arr[i][1] - arr[j][1], 2));
            if (distance > maxDistance) maxDistance = distance;
        }
    }
    cout << "Максимальное расстояние между двумя точками равно: " << maxDistance;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    cout << "Введите количество точек: ";
    int n;
    cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) arr[i] = new int[2];
    cout << "Итоговые точки: " << endl;
    for (int i = 0; i < n; i++) {
        arr[i][0] = 50 - rand() % 101;
        arr[i][1] = 50 - rand() % 101;
        cout << "Точка №" << i << ": X = " << arr[i][0] << " Y = " << arr[i][1] << endl;
    }
    findMaxDistance(arr, n);
    for (int i = 0; i < n; i++) delete[] arr[i];
    delete[]arr;
    return 0;
}
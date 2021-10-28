#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <math.h>
using namespace std;

int SIZE = 10;
double calcDistance(int x1, int y1, int x2, int y2) {
    double res = 0;
    res = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return res;

}

int main() {
    double max_dst = 0;
    double dst = 0;
    int i = 0, j = 0;
    cout << "Enter array size: ";
    cin >> SIZE;
    auto arr = new int[SIZE][2];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < 2; j++) {
            arr[i][j] = 10-rand()%20;
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            dst = calcDistance(arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            if (dst > max_dst)
                max_dst = dst;
        }
    }
    cout << "Max distance is ";
    cout << max_dst;

    _getch();
}
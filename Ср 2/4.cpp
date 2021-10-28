/*
Задание 4. Транспонирование матрицы
*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <math.h>
#include<iomanip>
using namespace std;

int main()
{
    int n = 0, a = 0, b = 0, i = 0, j = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    int** MAS = new int* [n];
    for (int i = 0; i < n; i++)
        MAS[i] = new int[n];

    cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            MAS[i][j] = 10 - rand() % 20;
            cout << setw(3) << MAS[i][j];
        }
        cout << endl;
    }
    cout << endl << "Main diagonal transposed matrix:" << endl;
    for (j = 0; j < n; j++)
        for (i = 0; i < j; i++)
        {
            a = MAS[j][i];
            MAS[j][i] = MAS[i][j];
            MAS[i][j] = a;
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(3) << MAS[i][j];
        cout << endl;
    }
    cout << endl << "Side diagonal transposed matrix:" << endl;

    for (j = 0; j < n; j++) {
        for (i = 0; i < j; i++) {
            float temp = MAS[0][n - 1];
            MAS[0][n - 1] = MAS[n - 1][0];
            MAS[n - 1][0] = temp; a;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(3) << MAS[i][j];
        cout << endl;
    }
    _getch();
    return 0;
}
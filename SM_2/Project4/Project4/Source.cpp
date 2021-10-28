#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int** arr, n, i, j;
    cout << "¬ведите размер матрицы: ";
    cin >> n;
    arr = new int* [n];
    for (i = 0; i < n; i++)
        arr[i] = new int[n];
    cout << "¬ведите элементы матрицы: " << endl;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    cout << "ѕолученна€ матрица: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << "ѕолученна€ матрица, транспонированна€ относительно главной диагонали: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[j][i] << " ";
        cout << endl;
    }
    cout << "ѕолученна€ матрица, транспонированна€ относительно побочной диагонали: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[n - 1 - j][n - 1 - i] << " ";
        cout << endl;
    }
    return 0;
}
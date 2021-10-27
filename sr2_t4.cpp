#include <iostream>
#include <ctime>
using namespace std;

void showMatrix(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void TransByMainDiag(int** arr, int n, int m) {
    cout << "Транспонированная относительно главной диагонали матрица: " << endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void TransBySideDiag(int** arr, int n, int m) {
    cout << "Транспонированная относительно побочной диагонали матрица: " << endl;
    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < (n - 1) - i; j++) swap(arr[i][j], arr[n - 1 - j][n - 1 - i]);
    showMatrix(arr, n, m);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int n, m;
    cout << "Введите количество строк матрицы: ";
    cin >> n;
    cout << "Введите количество столбцы матрицы: ";
    cin >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) arr[i] = new int[m];
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) arr[i][j] = 50 - rand() % 101;
    cout << "Итоговая матрица: " << endl;
    showMatrix(arr, n, m);
    TransByMainDiag(arr, n, m);
    TransBySideDiag(arr, n, m);
    for (int i = 0; i < n; i++) delete[] arr[i];
    delete[]arr;
    return 0;
}
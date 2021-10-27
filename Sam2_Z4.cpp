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
    cout << "Транспонированная относительно главной диагонали матрица : " << endl;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void TransByPobDiag(int** arr, int n, int m) {
    cout << "Транспонированная относительно побочной диагонали матрица : " << endl;
    for (int i = 0; i < n - 1; i++) for (int j = 0; j < (n - 1) - i; j++) swap(arr[i][j], arr[n - 1 - j][ n - 1 - i]);
    showMatrix(arr, n, m);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int n, m;
    cout << "Введите количество строк : ";
    cin >> n;
    cout << "Введите количество столбцы : ";
    cin >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) arr[i] = new int[m];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) arr[i][j] = rand() % 100 - 20;
    cout << "Итоговый массив : " << endl;
    showMatrix(arr, n, m);
    TransByMainDiag(arr, n, m);
    TransByPobDiag(arr, n, m);
    return 0;
}
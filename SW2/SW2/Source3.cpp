#include <iostream>
#include <ctime>
using namespace std;

void Matrix(int** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void MainDiag(int** arr, int n, int m) {
    cout << "Matrix transposed with respect to the main diagonal:  ";
    cout << endl;
    for (int j = 0; j < m; j++)

    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void SideDiag(int** arr, int n, int m) {
    cout << "Matrix transposed with respect to the side diagonal: ";
    cout << endl;
    for (int i = 0; i < n - 1; i++)

        for (int j = 0; j < (n - 1) - i; j++) swap(arr[i][j], arr[n - 1 - j][n - 1 - i]);
    Matrix(arr, n, m);
}

int three()
{
    srand(time(0));
    int n, m;
    cout << "Enter the number of rows of the matrix: ";
    cin >> n;
    cout << " Enter the number of columns of the matrix: ";
    cin >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) arr[i] = new int[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) arr[i][j] = rand() % 101 - 10;
    cout << "Final matrix: " << endl;
    Matrix(arr, n, m);
    MainDiag(arr, n, m);
    SideDiag(arr, n, m);
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[]arr;
    return 0;
}
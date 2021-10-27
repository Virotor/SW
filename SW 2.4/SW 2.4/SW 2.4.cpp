#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

int** createMatrix(int row, int column)
{
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++)
        matrix[i] = new int[column];
    return matrix;
}

void inputMatrix(int** matrix, int row, int column)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            matrix[i][j] = rand() % 21 - 10;
}

void outputMatrix(int** matrix, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << setw(5) << matrix[i][j];
        cout << "\n";
    }
}

void inputMassive(int* arr, int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 21 - 10;
    }

}

void outputMassive(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(5) << arr[i];
    }
}

void taskTranspose() {
    srand(time(NULL));
    int row, column, **matrix;

    cout << "Enter number of rows "; cin >> row;
    cout << "Enter number of columns "; cin >> column;
    matrix = createMatrix(row, column);
    inputMatrix(matrix, row, column);
    outputMatrix(matrix, row, column);
    cout << endl;

    int t;
    for (int i = 0; i < row; ++i)
    {
        for (int j = i; j < column; ++j)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }

    outputMatrix(matrix, row, column);
    cout << endl;

    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < (row - 1) - i; j++) {
            swap(matrix[i][j], matrix[row - 1 - j][row - 1 - i]);
        }
    }

    outputMatrix(matrix, row, column);

    for (int i = 0; i < row; i++)
        delete[]matrix[i];

    delete[]matrix;
}


int main()
{
    taskTranspose();
}
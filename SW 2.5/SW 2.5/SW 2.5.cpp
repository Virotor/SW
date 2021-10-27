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

void taskDistance() {
    srand(time(NULL));
    int row, column = 2, ** matrix;

    cout << "Enter number of points "; cin >> row;
    matrix = createMatrix(row, column);
    inputMatrix(matrix, row, column);
    outputMatrix(matrix, row, column);
    cout << endl;
    
    double largest_distance = 0, h;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            for (int a = 0; a < row; a++) {
                for (int d = 0; d < column; d++) {
                    h = pow(fabs(matrix[i][j] * matrix[i][j] - matrix[a][d] * matrix[a][d]), 0.5);
                    largest_distance = max(largest_distance, h);
                }
            }
        }
    }

    cout << largest_distance;

    for (int i = 0; i < row; i++)
        delete[]matrix[i];

    delete[]matrix;
}


int main()
{
    taskDistance();
}
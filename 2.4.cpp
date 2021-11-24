#include <iostream>
#include <ctime>

using namespace std;

void print(int** array, size_t n, size_t m)
{

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl << endl;
    }
}

int** alloc_matrix(size_t n, size_t m)
{
    int** array = new int* [n];
    for (size_t i = 0; i < n; ++i)
    {
        array[i] = new int[m];
    }
    return array;
}
void free_matrix(int** array, size_t n, size_t m)
{
    for (size_t i = 0; i < n; ++i)
    {
        delete[] array[i];
    }
    delete[] array;
}
int main(size_t n, size_t m)
{
    setlocale(LC_ALL, "RUS");
    cout << " Введите высоту и ширину матрицы: " << endl;
    cin >> n;
    cin >> m;

    int** matrix = alloc_matrix(n, m);
    int** transposedMatrix = alloc_matrix(m, n);

    for (size_t i = 0; i < n; ++i)
    {
        for (size_t j = 0; j < m; ++j)
        {
            matrix[i][j] = i * n + j;
        }
    }
    cout << " Начальная матрица: " << endl;
    print(matrix, n, m);
    cout << endl;

    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < m; j++)
            transposedMatrix[j][i] = matrix[i][j];

    cout << "Транспонированная матрица: " << endl;
    print(transposedMatrix, m, n);

    cout << endl;

    free_matrix(matrix, n, m);
    free_matrix(transposedMatrix, m, n);
    system("pause");
    return 0;
}
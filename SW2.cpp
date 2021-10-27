#include <iostream>

using namespace std;

int* initArray(int length);
void printArray(int* array, int length);
int foundNumberIndex(int* array, int length, int number);
void printLessThenPreviousTwo(int* array, int length);
int largestSequence(int* array, int length);
int** second_transpose(int** matrix, int row, int column);
int** transpose(int** matrix, int row, int column);
void printMatrix(int** matrix, int row, int column);
int** initMatrix(int row, int column);

int main()
{
    int length, number;
    cout << "Enter length of array\n";
    cin >> length;
    srand(time(nullptr));

    int* array = initArray(length);

    cout << "\n\t --Array--\n";
    printArray(array, length);

    cout << "\n\t --Task 1--\n";
    cout << "Enter number\n";
    cin >> number;
    cout << "Position of the first element of the array equal to the entered number is " << foundNumberIndex(array, length, number) << endl;

    cout << "\n\t --Task 2--\n";
    cout << "Result array is ";
    printLessThenPreviousTwo(array, length);
    cout << endl;

    cout << "\n\t --Task 3--\n";
    cout << "Length of largest sequence " << largestSequence(array, length) << endl;

    cout << "\n\t --Task 4--\n";
    int row, column;
    cout << "Enter the number of rows\n";
    cin >> row;
    cout << "Enter the number of columns\n";
    cin >> column;
    int** matrix = initMatrix(row, column);
    cout << "\n\t --Matrix--\n";
    printMatrix(matrix, row, column);
    int** result_matrix = transpose(matrix, row, column);
    cout << endl;
    cout << "\t --Transposed matrix one--\n";
    printMatrix(result_matrix, column, row);
    cout << endl;
    int** second_result_matrix = second_transpose(matrix, row, column);
    cout << "\t --Transposed matrix two--\n";
    printMatrix(second_result_matrix, column, row);

}

int* initArray(int length)
{
    int* array = new int[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % 20 - 10;
    }

    return array;
}

void printArray(int* array, int length)
{
    for (int j = 0; j < length; j++)
    {
        cout << array[j] << " ";
    }
    cout << endl;
}

int foundNumberIndex(int* array, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (number == array[i] && i != length)
        {
            return i;
        }
    }
    return -1;
}

void printLessThenPreviousTwo(int* array, int length)
{
    int resoult_length = 0;
    int* resoult_array = new int[length];
    for (int i = 2; i < length; i++)
    {
        if (array[i] < array[i - 2] - array[i - 1])
        {
            cout << array[i] << " ";
        }
    }
}

int largestSequence(int* array, int length)
{
    int count = 1, max_count = 1;
    for (int i = 0; i < length - 1; i++)
    {
        if (array[i] == array[i + 1])
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    return max_count;
}

int** transpose(int** matrix, int row, int column)
{
    int** result_matrix = initMatrix(column, row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result_matrix[j][i] = matrix[i][j];
        }
    }

    return result_matrix;
}

int** second_transpose(int** matrix, int row, int column)
{
    int** result_matrix = initMatrix(column, row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            result_matrix[column - j - 1][i] = matrix[row - i - 1][j];
        }
    }

    return result_matrix;
}

void printMatrix(int** matrix, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int** initMatrix(int row, int column)
{
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[column];
        for (int j = 0; j < column; j++)
        {
            matrix[i][j] = rand() % 20 - 10;
        }
    }
    return matrix;
}

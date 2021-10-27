#include <iostream>
#include <string>

using namespace std;

int* initArray(int length);
void printArray(int* array, int length);
int numberIndex(int* array, int length, int number);
void printLessThenPreviousTwo(int* array, int length);
int largestSequence(int* array, int length);
int** second_transpose(int** matrix, int row, int column);
int** transpose(int** matrix, int row, int column);
void printMatrix(int** matrix, int row, int column);
int** initMatrix(int row, int column);
int maxRange(int** matrix, int number_of_points);
int indexOfSubstring(string text, string substring);

const string ERROR = "Error";

int main()
{
    int length, number;
    cout << "Enter length of array\n";
    cin >> length;
    if (length < 1)
    {
        cout << ERROR;
        return 0;
    }
    srand(time(nullptr));
    int* array = initArray(length);

    cout << "\n\t --Array--\n";
    printArray(array, length);

    cout << "\n\t --Task 1--\n";
    cout << "Enter number\n";
    cin >> number;
    cout << "Position of the first element of the array equal to the entered number is " << numberIndex(array, length, number) << endl;

    cout << "\n\t --Additional task--\n";
    string text, substring;
    cout << "Enter string\n";
    cin >> text;
    cout << "Enter substring\n";
    cin >> substring;
    cout << "Index of substring in string is " << indexOfSubstring(text, substring) << endl;

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
    if (row < 1)
    {
        cout << ERROR;
        return 0;
    }

    cout << "Enter the number of columns\n";
    cin >> column;
    if (column < 1)
    {
        cout << ERROR;
        return 0;
    }

    int** matrix = initMatrix(row, column);
    cout << "\n\t --Matrix--\n";
    printMatrix(matrix, row, column);
    int** result_matrix = transpose(matrix, row, column);
    cout << "\t --Transposed matrix one--\n";
    printMatrix(result_matrix, column, row);
    int** second_result_matrix = second_transpose(matrix, row, column);
    cout << "\t --Transposed matrix two--\n";
    printMatrix(second_result_matrix, column, row);

    cout << "\t --Task 5--\n";
    int number_of_points;
    cout << "Enter number of point\n";
    cin >> number_of_points;
    if (number_of_points < 1)
    {
        cout << ERROR;
        return 0;
    }

    int** points = initMatrix(2, number_of_points);
    printMatrix(points, 2, number_of_points);
    cout << "Maximum distance between two points is " << maxRange(points, number_of_points) << endl;
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

int numberIndex(int* array, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (number == array[i])
        {
            return i;
        }
    }
    return -1;
}

void printLessThenPreviousTwo(int* array, int length)
{
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
    cout << endl;
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

int maxRange(int** matrix, int number_of_points)
{
    int max_range = 0, range;
    for (int i = 0; i < number_of_points; i++)
    {
        for (int j = 0; j < number_of_points; j++)
        {
            range = sqrt(abs(matrix[0][i] - matrix[0][j]) * abs(matrix[0][i] - matrix[0][j]) + abs(matrix[1][i] - matrix[1][j]) * abs(matrix[1][i] - matrix[1][j]));
            if (range > max_range)
            {
                max_range = range;
            }
        }
    }

    return max_range;
}

int indexOfSubstring(string text, string substring)
{
    for (int i = 0; i < text.length(); i++)
    {
        int j = 0;
        while (j < substring.length() && i + j < text.length() && substring[j] == text[i + j])
        {
            j++;
        }
        if (j == substring.length())
        {
            return i;
        }
    }
    return -1;
}

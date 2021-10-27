#include<iostream>
using namespace std;
int* initArray(int length);
void printArray(int* array, int length);
int** initMatrix(int row, int column);
void printMatrix(int** matrix, int row, int column);
void positionOfTheNumber(int* array, int length, int number);
void lessThanPrevious(int*array,int length);
void theLargestSequance(int* array, int length);
int** firstTranspose(int** matrix, int row, int column);
int** secondTranspose(int** matrix, int row, int column);
int maxDistance(int** matrix, int number_of_points);

int main()
{
    int length,number;
    cout << "Enter length of the array : ";
    cin >> length;
    srand(time(NULL));
    int* array = initArray(length);
    printArray(array, length);
    cout << "Enter number : ";
    cin >> number;
    positionOfTheNumber(array, length, number);
    lessThanPrevious(array, length);
    theLargestSequance(array, length);
    int row,column;
    cout << "Enter rows of matrix : ";
    cin >> row;
    cout << "Enter columns of the matrix : ";
    cin >> column;
    int**matrix = initMatrix(row,column);
    cout << "Matrix : " << endl;
    printMatrix(matrix, row, column);
    int** resultMatrix = firstTranspose(matrix, row, column);
    cout << "Transposed matrix from the main diagonal: "<<endl;
    printMatrix(resultMatrix, column, row);
    int** secondResultMatrix = secondTranspose(matrix, row, column);
    cout << "Transposed matrix from the side diagonal: "<<endl;
    printMatrix(secondResultMatrix, column, row);
    int numberOfPoints;
    cout << "Enter number of point : ";
    cin >> numberOfPoints;
    int** points = initMatrix(2, numberOfPoints);
    printMatrix(points, 2, numberOfPoints);
    cout << "Maximum distance between two points is " << maxDistance(points, numberOfPoints) << endl;
    delete[]array;
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
	system("pause");
	return 0;
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

void positionOfTheNumber(int* array, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i]==number)
        {
            cout<<"Position of this number is  " <<i<<endl;
            break;
        }
    }
}
void lessThanPrevious(int*array,int length)
{
   
    bool trueElement = false;
    for (int i = 2; i < length; i++)
    {
        if (array[i] < (array[i - 2] - array[i - 1]))
        {
            cout << array[i] << " ";
            trueElement = true;
        }
    }
    cout << endl;
    if (trueElement == false) {
        cout << " There are no such numbers here" << endl;
    }

}
void theLargestSequance(int* array, int length)
{
    
    int search = 1;
    int maxSequence = 1;
    for (int i = 0; i < length; i++) {

        if (array[i] == array[i + 1]) {
            search++;
        }
        else {
            search = 1;
        }

        if (search > maxSequence) {
            maxSequence = search;
        }
    }

    cout << "Length of the largest sequance is " << maxSequence << endl;

}
int** initMatrix(int row, int column)
{
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++) {

        matrix[i] = new int[column];

        for (int j = 0; j < column; j++) {

            matrix[i][j] = rand() % 20 - 10;
           
        }

    }
    return matrix;
}
void printMatrix(int** matrix, int row, int column)
{
    for (int i = 0; i < row; i++) {

        for (int j = 0; j < column; j++) {
            cout << matrix[i][j] << " ";

        }
        cout << endl;

    }
}
int** firstTranspose(int** matrix, int row, int column)
{
    int** resultMatrix = initMatrix(column, row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            resultMatrix[j][i] = matrix[i][j];
        }
    }

    return resultMatrix;
}

int** secondTranspose(int** matrix, int row, int column)
{
    int** resultMatrix = initMatrix(column, row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            resultMatrix[column - j - 1][i] = matrix[row - i - 1][j];
        }
    }

    return resultMatrix;
}
int maxDistance(int** matrix, int numberOfPoints)
{
    int maxRange = 0, range;
    for (int i = 0; i < numberOfPoints; i++)
    {
        for (int j = 0; j < numberOfPoints; j++)
        {
            range = sqrt(abs(matrix[0][i] - matrix[0][j]) * abs(matrix[0][i] - matrix[0][j]) + abs(matrix[1][i] - matrix[1][j]) * abs(matrix[1][i] - matrix[1][j]));
            if (range > maxRange)
            {
                maxRange = range;
            }
        }
    }

    return maxRange;
}

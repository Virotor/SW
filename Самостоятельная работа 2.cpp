#include <iostream>
#include <ctime>
#include <math.h>
#include <iomanip>
using namespace std;
int* ArrayForTask12(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21 - 10;
        cout << setw(3) << arr[i] << " ";
    }
    return arr;
}
int* ArrayForTask4(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 3 + 1;
        cout << setw(3) << arr[i] << " ";
    }
    return arr;
}
int** EnterMatrix(int line, int col)
{
    int** matrix = new int* [line];
    for (int i = 0; i < line; i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 21 - 10;
        }
    }
    return matrix;
}
void PrintMatrix(int** matrix, int line, int col)
{
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << matrix[i][j] << "  ";
        }
        cout << "\n\n";
    }
}
void PositionOfElement()
{
    int size, k = 0;
    cout << "Amount of elements = ";
    cin >> size;
    cout << "Array: ";
    int* arr = ArrayForTask12(size);
    int number;
    cout << "\nEnter the number = ";
    cin >> number;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            cout << "Position of element: " << i + 1 << endl;
            k++;
        }
    }
    if(k == 0) cout << "There is no such a number in this array." << endl;
    delete[] arr;
}
void LessThanPreviousDifference()
{
    int n = 0;
    int size;
    cout << "Amount of elements = ";
    cin >> size;
    cout << "Array: ";
    int* arr = ArrayForTask12(size);
    cout << endl;
    cout << "Elements, that less then difference between previous two:\n";
    for (int i = 2; i < size; i++)
    {
        if (arr[i] < arr[i - 2] - arr[i - 1])
            cout << "Element " << i + 1 << " = " << arr[i] << "\n";
        else n++;
    }
    if (n == size - 2) cout << "There are no such elements";
    delete[] arr;
}
void LengthLongestSequence()
{
    int size;
    cout << "Amount of elements = ";
    cin >> size;
    cout << "Array: ";
    int* arr = ArrayForTask4(size);
    int MaxLength=1, CurrentLength=1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1] and arr[i] == arr[i + 1])
            CurrentLength++;
        else if (arr[i] == arr[i - 1] and arr[i] != arr[i + 1])
        {
            CurrentLength++;
            if (CurrentLength > MaxLength)
            {
                MaxLength = CurrentLength;
            }
            CurrentLength = 1;
        }
    }
    cout << "\nMax = " << MaxLength << endl;
    delete[] arr;
}
void MatrixTranspose()
{
    int col, line;
    int** matrix;
    cout << "Number of lines = ";
    cin >> line;
    cout << "Number of columns = ";
    cin >> col;
    matrix = EnterMatrix(line, col);
    cout << "Matrix: \n";
    PrintMatrix(matrix, line, col);
    cout << "t-main Matrix\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < line; j++)
        {
            cout << setw(3) << matrix[j][i] << "  ";
        }
        cout << "\n\n";
    }
    cout << "t-side Matrix\n";
    for (int i = col - 1; i > -1; i--)
    {
        for (int j = line - 1; j > -1; j--)
        {
            cout << setw(3) << matrix[j][i] << "  ";
        }
        cout << "\n\n";
    }
    for (int i = 0; i < line;i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
void SetOfPoints()
{
    int col = 2, line;
    int** matrix;
    cout << "Amount of points = ";
    cin >> line;
    matrix = EnterMatrix(line, col);
    for (int z = 1; z <= line; z++)
    {
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (j == 0)
                {
                    cout << "X" << z << "="; cin >> matrix[i][j];
                }
                else
                {
                    cout << "Y" << z << "="; cin >> matrix[i][j];
                }
            }
            z++;
            cout << endl;
        }
    }
    int maxDist = 0;
    for (int i = 0; i < line; i++) {
        for (int z = i + 1; z < line; z++)
        {
             int curentdist = sqrt(pow((matrix[i][0] - matrix[z][0]), 2) + pow((matrix[i][1] - matrix[z][1]), 2));
            if (curentdist > maxDist)
            {
                maxDist = curentdist;
            }
        }
    }
    cout << "Max distance between points = " << maxDist << endl;
    for (int i = 0; i < line; i++)
    {
        delete[]matrix[i];
    }
    delete[] matrix;
}
int main()
{
    srand(time(0));
    int f;
    cout << "1) First task" << endl;
    cout << "2) Second task" << endl;
    cout << "3) Third task" << endl;
    cout << "4) Fourth task" << endl;
    cout << "5) Fifth task" << endl;
    cout << "Select task: "; cin >> f;
    switch (f)
    {
        case 1:PositionOfElement(); break;
        case 2:LessThanPreviousDifference(); break;
        case 3:LengthLongestSequence(); break;
        case 4:MatrixTranspose(); break;
        case 5:SetOfPoints(); break;
        default:cout << "There is no such task here.\n";
    }
}



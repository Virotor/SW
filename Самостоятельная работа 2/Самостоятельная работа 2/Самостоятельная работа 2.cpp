#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;
int* createArrayForTask12(int size)
{
    int*arr = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 21-10;
        cout << arr[i] << " ";
    }
    return arr;
}
int* createArrayForTask4 (int size)
{
    int* arr4 = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr4[i] = rand() %2+1;
        cout << arr4[i] << " ";
    }
    return arr4;
}
void PositionOfElement()
{
    int size;
    cout << "Amount of elements = ";
    cin >> size;
    int* arr = createArrayForTask12(size);
    int number;
    cout << "\nEnter the number = ";
    cin >> number;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number) cout << "Position of element " << i << endl;
    }
    delete[] arr;
}
void LessThanDifferencePrevious()
{
    int n=0;
    int size;
    cout << "Amount of elements = ";
    cin >> size;
    int* arr = createArrayForTask12(size);
    for (int i = 2; i < size; i++)
    {
        if (arr[i] < arr[i - 2] - arr[i - 1])
            cout << arr[i] << "\n  ";
        else n++;
    }
    if (n == size - 2) cout << "There are no such elements";
}
void LengthLongestSequence()
{
    int size;
    cout << "Amount of elements = ";
    cin >> size;
    int* arr4 = createArrayForTask4(size);
    int MaxLength=1, CurrentLength=1;
    for (int i = 1; i < size; i++)
    {
        if (arr4[i] == arr4[i - 1] and arr4[i] == arr4[i + 1])
            CurrentLength++;
        else if (arr4[i] == arr4[i - 1] and arr4[i] != arr4[i + 1])
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
    delete[] arr4;
}
void MatrixTranspose()
{
    srand(time(0));
    int col, line;
    cout << "Number of lines = ";
    cin >> line;
    cout << "Number of columns = ";
    cin >> col;
    cout << "Matrix  \n";
    int** matrix = new int* [line];
    for (int i=0;i<line;i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 21 - 10;
        }
    }
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] >= 0) cout << " ";
            cout << matrix[i][j] << "  ";
        }
        cout << endl<<endl;
    }
    cout << "t-main Matrix\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if (matrix[j][i] >= 0) cout << " ";
            cout << matrix[j][i] << "  ";
        }
        cout << endl<<endl;
    }
    cout << "t-side Matrix\n";
    for (int i = col-1; i >-1; i--)
    {
        for (int j = line - 1; j > -1; j--)
        {
            if (matrix[j][i] >= 0) cout << " ";
            cout << matrix[j][i] << "  ";
        }
        cout << endl << endl;
    }
    for (int i = 0; i < line;i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
void SetOfPoints()
{
    srand(time(0));
    int curentdist=0,col=2, line; //line- количество строк в матрице и ,соответственно, количество точек.
    cout << "Number of lines = ";
    cin >> line;
    cout << "Matrix  \n";
    int** matrix = new int* [line];
    for (int i = 0; i < line; i++) {
        matrix[i] = new int[col];
    }
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
        for (int z=i+1; z < line; z++)
        {
             int curentdist = sqrt(pow((matrix[i][0] - matrix[z][0]), 2) + pow((matrix[i][1] - matrix[z][1]), 2));
            if (curentdist > maxDist)
            {
                maxDist = curentdist;
            }
        }
    }
    cout << "Maximum distance between points  = " << maxDist << endl;
    for (int i = 0; i < line; i++)
    {
        delete[]matrix[i];
    }
    delete[] matrix;
}
int main()
{
    cout << "Select task:" << endl;
    cout << "1) First task" << endl;
    cout << "2) Second task" << endl;
    cout << "3) Third task" << endl;
    cout << "4) Fourth task" << endl;
    cout << "5) Fifth task" << endl;
     int f;
    cin>>f;
    switch (f)
    {
        case 1:PositionOfElement(); break;
        case 2:LessThanDifferencePrevious(); break;
        case 3:LengthLongestSequence(); break;
        case 4:MatrixTranspose(); break;
        case 5:SetOfPoints(); break;
        default:cout << "There is no such task here\n";
    }
}



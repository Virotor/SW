#include <iostream>
#include <time.h>
#include <iomanip>
#include <cmath>

using namespace std;

int *createArray(int);
void setArray(int, int *);
void printArray(int, int *);
void deleteArray(int *);
void findNumber(int, int, int *);
int firstElementPosition();
int lessDifferenceOfThePreviousTwo();
void findNumbDiffence(int, int *);
int theLargestSequenceOfIdenticalNumbers();
void inputArray(int, int *);
int countLength(int, int *);
int transpositionRelativeTheSideAndMainDiagonals();
int **createMatrix(int, int);
void setMatrix(int, int, int **);
void printMatrix(int, int, int **);
void deleteMatrix(int, int **);
int transpMatrixMainDiagon(int, int, int **);
int transpMatrixSaidDiagon(int, int, int **);
void maximumDistanceBetweenTwoPoints();

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "1: Функция, которая будет выводить позицию первого элемента массива, равного введённому числу." << endl;
    cout << "2: Функция, которая будет находить все числа в массиве, которые меньше разности двух предыдущих." << endl;
    cout << "3: Функция, которая находит длину наибольшей последовательности одинаковых чисел, идущих подряд" << endl;
    cout << "4: Транспонирование матрицы относительно побочной и главной диагоналей." << endl;
    cout << "5: Максимальное расстояние между двумя точками среди набора точек." << endl;
    cout << endl;
    cout << "Введите номер задания: ";
    int userSelection;
    cin >> userSelection;
    switch (userSelection)
    {
    case 1:
        firstElementPosition();
        break;
    case 2:
        lessDifferenceOfThePreviousTwo();
        break;
    case 3:
        theLargestSequenceOfIdenticalNumbers();
        break;
    case 4:
        transpositionRelativeTheSideAndMainDiagonals();
        break;
    case 5:
        maximumDistanceBetweenTwoPoints();
        break;
    default:
        cout << "Такого задания нет!";
    }
    return 0;
}

int *createArray(int n)
{
    int *a = new int[n];
    return a;
}

void setArray(int n, int *a)
{
    srand(time(0));
    int min, max;
    min = -10;
    max = 10;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (max - min + 1) + min;
    }
}

void printArray(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void deleteArray(int *a)
{
    delete[] a;
}

void findNumber(int n, int N, int *a)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == N)
        {
            cout << "Номер элемента: " << i << endl;
        }
        if (a[i] == N)
        {
            break;
        }
    }
}

int firstElementPosition()
{
    int size, element;
    cout << "Введите размер массива: ";
    cin >> size;
    int *save = createArray(size);
    setArray(size, save);
    printArray(size, save);
    cout << endl;
    cout << "Введите элемент, номер позиции которого хотите вывести: ";
    cin >> element;
    findNumber(size, element, save);
    deleteArray(save);
    system("pause");
    return size, element;
}

int lessDifferenceOfThePreviousTwo()
{
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int *save = createArray(size);
    setArray(size, save);
    printArray(size, save);
    cout << endl << endl;
    findNumbDiffence(size, save);
    deleteArray(save);
    system("pause");
    return size;
}

void findNumbDiffence(int n, int *a)
{
    for (int i = 2; i < n; i++)
    {
        if (a[i - 2] - a[i - 1] > a[i])
        {
            cout << a[i]<<" ";
        }
    }
    cout << endl;
}

int theLargestSequenceOfIdenticalNumbers()
{
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int *save = createArray(size);
    inputArray(size, save);
    cout << endl;
    countLength(size, save);
    deleteArray(save);
    system("pause");
    return size;
}

void inputArray(int n, int *a)
{
    cout << "Введите массив вручную: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int countLength(int n, int *a)
{
    int measurer = 1, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            measurer++;
        }
        else
        {
            if (max < measurer)
            {
                max = measurer;
            }
            measurer = 1;
        }
    }
    cout << "Самая длиная последовательность равна: " << max << endl;
    return measurer, max;
}

int transpositionRelativeTheSideAndMainDiagonals()
{
    int line, column;
    cout << "Введите размер квадратной матрицы: "<<endl;
    cin >> line;
    cin >> column;
    cout<< endl;
    int **save = createMatrix(line, column);
    setMatrix(line, column, save);
    printMatrix(line, column, save);
    int userSelection;
    cout << "Чтобы вывести транспонированную матрицу по главной диагонали нажмите 1" << endl;
    cout << "Чтобы вывести транспонированную матрицу по побочной диагонали нажмите 2" << endl;
    cin >> userSelection;
    switch (userSelection)
    {
    case 1:
        cout << endl << "Транспонированная матрица относительно главной диагонали" << endl;
        transpMatrixMainDiagon(line, column, save);
        break;
    case 2:
        cout << endl << "Транспонированная матрица относительно побочной диагонали" << endl;
        transpMatrixSaidDiagon(line, column, save);
        break;
    default:
        cout << "Либо 1, либо 2! Матрица осталась прежней.."<<endl;
        cout << endl;
        break;
    }

    printMatrix(line, column, save);
    deleteMatrix(line, save);
    system("pause");
    return line, column;
}

int **createMatrix(int n, int k)
{
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[k];
    }
    return a;
}

void setMatrix(int n, int k, int **a)
{
    srand(time(0));
    int min, max;
    min = -10;
    max = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            a[i][j] = rand() % (max - min + 1) + min;
        }
    }
}

void printMatrix(int n, int k, int **a)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl << endl;
    }
}

void deleteMatrix(int n, int **a)
{
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}

int transpMatrixMainDiagon(int n, int k, int **a)
{
    int swapMain;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            swapMain = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = swapMain;
        }
    }
    return swapMain;
}

int transpMatrixSaidDiagon(int n, int k, int **a)
{
    int swapSaid;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
        {
            swapSaid = a[i][j];
            a[i][j] = a[n - j - 1][n - i - 1];
            a[n - j - 1][n - i - 1] = swapSaid;
        }

    return swapSaid;
}

void maximumDistanceBetweenTwoPoints()
{
    srand(time(NULL));
    int interval = 0;
    int maxInterval = 0;
    int min, max, numberOfPoints; 
    min = -10;
    max = 10;
    cout << "Введите количество точек: ";
    cin >> numberOfPoints;
    if (numberOfPoints <= 2)
    {
        cout << "Должно быть минимум три точки!"<<endl;
    }
    else
    {
        int *arrayX = new int[numberOfPoints];
        int *arrayY = new int[numberOfPoints];
        for (int i = 0; i < numberOfPoints; i++)
        {
            arrayX[i] = rand() % (max - min + 1) + min;
            arrayY[i] = rand() % (max - min + 1) + min;
        }
        for (int i = 0; i < numberOfPoints; i++)
        {
            cout << "(" << arrayX[i] << ", " << arrayY[i] << ")" << endl;
        }
        for (int i = 0; i < numberOfPoints; i++)
        {
            for (int j = 1; j < numberOfPoints; j++)
            {
                interval = sqrt(pow((arrayX[j] - arrayX[i]), 2)  + pow((arrayY[j] - arrayY[i]), 2));
            }
            if (interval > maxInterval)
            {
                maxInterval = interval;
            }
        }
        cout << "Максимальное расстоянние между точками: " << interval << endl;
        delete[] arrayX;
        delete[] arrayY;
    }
}
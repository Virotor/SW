#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int* createArr(int);

void fillArray(int*, int);

void showArray(int*, int);

void positionOfElement(int*, int);

void subsrtringInString();

void elementsLessThanDifferenceOfTwoPrevious(int*, int);

void maxLengthOfEqual(int*, int);

void deleteMatrix(int**, int);

int** showMatrix(int, int);

void transportMatrixMainDiag(int**, int, int);

void transportMatrixSideDiag(int**, int, int);

int main() {
    int task;
    cout << "Номер задания: ";
    cin >> task;
    switch(task)
    {
        case 1:
        {
            int size;
            cout << "Размер массива: ";
            cin >> size;
            int *array = createArr(size);
            fillArray(array, size);
            showArray(array, size);
            positionOfElement(array, size);
            delete[] array;
            cin.ignore();
            subsrtringInString();
            break;
        }
        case 2:
        {
            int size;
            cout << "Размер массива: ";
            cin >> size;
            int *array = createArr(size);
            fillArray(array, size);
            showArray(array, size);
            elementsLessThanDifferenceOfTwoPrevious(array, size);
            delete[] array;
            break;
        }
        case 3:
        {
            int size;
            cout << "Размер массива: ";
            cin >> size;
            int *array = createArr(size);
            fillArray(array, size);
            showArray(array, size);
            maxLengthOfEqual(array, size);
            delete[] array;
            break;
        }
        case 4:
        {
            cout << "Введите размер матрицы: ";
            int row, col;
            cin >> row >> col;
            transportMatrixMainDiag(showMatrix(row, col), row, col);
            transportMatrixSideDiag(showMatrix(row, col), row, col);
            break;
        }
    }
    return 0;
}

int* createArr(int size)
{
    return new int[size];
}

void fillArray(int *array, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = -10 + rand() % 21;
    }
}

void showArray(int *array, int size)
{
for (int i = 0; i < size; i++)
{
    cout << array[i] << " ";
}
cout << endl;
}

void positionOfElement(int *array, int size)
{
    int element, position = -1;
    cout << "Элемент, позицию которого надо узнать: ";
    cin >> element;
    for (int i = 0; i <= size; i++)
    {
        if(array[i] == element)
        {
            position = i;
            cout << "Позиция числа " << element << " - " << i << endl;
            break;
        }
    }
    if (position == -1)
    {
        cout << "Такого числа нет в масииве" << endl;
    }
}

void subsrtringInString()
{
    cout << "Введите символы:" << endl;
    string mainstring;
    getline(cin, mainstring);
    int lengthOfMainstring;
    lengthOfMainstring = mainstring.length();
    string substring;
    cout << "Введите символы, которые надо найти:" << endl;
    getline(cin, substring);
    int lengthOfSubstring;
    lengthOfSubstring = substring.length();
    int i1, j1, j2;
    bool flag1 = false;
    for (i1 = 0; i1 < lengthOfMainstring; i1++)
    {
        if (mainstring[i1] == substring[0])
        {
            for (j1 = i1, j2 = 0; j2 < lengthOfSubstring; j1++, j2++)
            {
                if (mainstring[j1] != substring[j2])
                {
                    break;
                }
                if (j2 == lengthOfSubstring - 1)
                {
                    cout << "Номер = " << i1 << endl;
                    flag1 = true;

                }

            }
        }
        if (flag1 == true)
            break;
    }
    if (flag1 == false)
        cout << "Такой подстроки нет" << endl;
}

void elementsLessThanDifferenceOfTwoPrevious(int *array,int size)
{
    int i = 0, j = 1, k = 2;
    cout << "Элементы, которые меньше разности двух предыдущих: ";
    while (k < size)
    {
        if(array[k] < array[j] - array[i])
        {
            cout << array[k] << " ";
        }
        i++;
        j++;
        k++;
    }
    cout << endl;
}

void maxLengthOfEqual(int *array, int size)
{
    int count1 = 1, count2 = 1;
    for (int i = 0; i < size-1; i++)
        {
            if (array[i] == array[i + 1])
            {
                count2++;
            }
            else if (count1 < count2)
            {
                count1 = count2;
                count2 = 1;
            }
            else
            {
                count2 = 1;
            }
        }
        cout << "Максимальная длина последовательности одинаковых чисел: " << count1 << endl;
}

void deleteMatrix(int** matrix,int row)
{
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int **showMatrix(int row, int col)
{
    int** array = new int* [row];
    for (int i = 0; i < row; i++)
    {
        array[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = -10 + rand() % 21;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return array;
}

void transportMatrixMainDiag(int** matrix, int row, int col)
{
    int t;
    for(int i = 0; i < row; i++)
    {
        for(int j = i; j < col; j++)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    deleteMatrix(matrix, row);
}

void transportMatrixSideDiag(int** matrix, int row, int col)
{
    int t;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - 1; j++)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[row - j - 1][row - i - 1];
            matrix[row - j - 1][row - i - 1] = t;
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    deleteMatrix(matrix, row);
}

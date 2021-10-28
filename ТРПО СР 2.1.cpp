#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using namespace std;
int* AC (int);//Array Create(создание массива) = AC//
void FA (int*, int);//Fill Array(заполнение массива) = FA//
void AO (int*, int);//Array Output(вывод массива) = AO//
void POE(int*, int);//Position Of Element(позиция элемента) = POE//
void ETDFE(int*, int); //Elements That Differ From Each Other(элементы,отличные друг от друга) = ETDFE//
void MLOASOIN(int*, int);//Maximum length of a sequence of identical numbers(Максимальная длина последовательности одинаковых чисел) = MLOASOIN//
void DM(int**, int);//Delete Matrix(удаление матрицы) = DM//
int** MO(int, int);//Matrix Output(вывод матрицы) = MO//
void TTMATMD(int**, int, int);//Transposing The Matrix Along The Main Diagonal(транспонирование по главной диагонали) = TTMATMD//
void TTMATSD(int**, int, int);//Transposing The Matrix Along The Side Diagonal(диагональное транспонирование матрицы) = TTMATSD//

int main()
 {
    setlocale(LC_ALL, "rus");
    int task;
    cout << "Task number(Номер задания): ";
    cin >> task;
    switch (task)
    {
     case 1:
    {
        int size;
        cout << " Size array(Размер массива): ";
        cin >> size;
        int* array = AC(size);
        FA(array, size);
        AO(array, size);
        POE(array, size);
        delete[] array;
        cin.ignore();
        break;
    }
     case 2:
    {
        int size;
        cout << "Size array(Размер массива): ";
        cin >> size;
        int* array = AC(size);
        FA (array, size);
        AO (array, size);
        ETDFE(array, size);
        delete[] array;
        break;
    }
     case 3:
    {
        int size;
        cout << "Size array(Размер массива): ";
        cin >> size;
        int* array = AC(size);
        FA(array, size);
        AO (array, size);
        MLOASOIN(array, size);
        delete[] array;
        break;
    }
     case 4:
     {
         cout << "Sze Matrix(Введите размер матрицы): ";
         int row, col;
         cin >> row >> col;
         TTMATMD(MO(row, col), row, col);
         TTMATSD(MO(row, col), row, col);
         break;
     }
    }
    return 0;
}
int* AC (int size)
{
    return new int[size];
}
void FA(int* array, int size)
{
    srand(time(NULL));
    cout << "Your array(Ваш массив):";
    for (int i = 0; i < size; i++)
    {
        array[i] = -10 + rand() % 21-10;
    }
}
void AO(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void POE (int* array, int size)
{
    int element, position = -1;
    cout << "The desired element(Искомый элемент): ";
    cin >> element;
    for (int i = 0; i <= size; i++)
    {
        if (array[i] == element)
        {
            position = i;
            cout << "Number position(Позиция числа): " << element << " - " << i << endl;
            break;
        }
    }
    if (position == -1)
    {
        cout << " Here is no such number in the arra (Нет такого числа):" << endl;
    }
}


void ETDFE (int* array, int size)
{
    int x = 0, y = 1, z = 2;
    cout << " Elements smaller than the differences of the previous two(Элементы, которые меньше разности двух предыдущих): ";
    while (z < size)
    {
        if (array[z] < array[y] - array[x])
        {
            cout << array[z] << " ";
        }
        x++;
        y++;
        z++;
    }
    cout << endl;
}
void MLOASOIN(int* array, int size)
{
    int count1 = 1, count2 = 1;
    for (int i = 0; i < size - 1; i++)
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
    cout << " Maximum length of a sequence of identical numbers(Максимальная длина последовательности одинаковых чисел): " << count1 << endl;
}
void DM(int** matrix, int row)
{
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int** MO(int row, int col)
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

void TTMATMD(int** matrix, int row, int col)
{
    int t;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    DM(matrix, row);
}

void TTMATSD(int** matrix, int row, int col)
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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    DM(matrix, row);
}




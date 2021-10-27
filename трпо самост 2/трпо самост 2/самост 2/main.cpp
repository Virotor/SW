#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int* createArr(int);

void fillArray(int*, int);

void showArray(int*, int);

void positionOfElement(int*, int);

void subsrtringInString();

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

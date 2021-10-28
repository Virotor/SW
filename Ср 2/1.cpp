#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;

void random(int* arr, int size) {
    for (int i = 0; i < size; i++)
        arr[i] =10-rand()%20;

}

int main(int argc, char* argv[])
{
    int SIZE = 0;
    int* arr;
    cout << "Enter array size: ";
    cin >> SIZE;
    arr = new int[SIZE];
    int value = 0;
    int pos = -1;
    int i = 0;
    random(arr, SIZE);
    cout << "Array: ";
    for (int i = 0; i < SIZE; i++)
    cout <<to_string(arr[i]) + " ";
    cout << endl;
    cout << "Enter search valut:";
    cin >> value;
    i = 0;
    do {
        if (arr[i] == value)
            pos = i;
        i++;
    } while (i < SIZE && pos < 0);
    if (pos > 0)
        cout << pos;
    else
        cout << "Nothing was found";
    _getch();
    return 0;

}
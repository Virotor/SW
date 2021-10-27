#include <iostream>
#include <string>

using namespace std;

int main()
{
    int length;
    cout << "Enter length of array";
    cin >> length;
    int* array = initArray(length);
}

int* initArray(length)
{
    int* array = new int* [row];
    for (int i = 0; i < column; i++)
    {
        matrix[i][i] = rand() % 20 - 10;
    }

    return array;
}


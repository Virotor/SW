#include <iostream>

using namespace std;

int* initArray(int length);
void printArray(int* array, int length);
int foundNumberIndex(int* array, int length, int number);
void printLessThenPreviousTwo(int* array, int length);
int largestSequence(int* array, int length);

int main()
{
    int length, number;
    cout << "Enter length of array\n";
    cin >> length;
    srand(time(nullptr));

    int* array = initArray(length);

    cout << "\t --Array--\n";
    printArray(array, length);

    cout << "\t --Task 1--\n";
    cout << "Enter number\n";
    cin >> number;
    cout << "Position of the first element of the array equal to the entered number is " << foundNumberIndex(array, length, number) << endl;

    cout << "\t --Task 2--\n";
    cout << "Result array is ";
    printLessThenPreviousTwo(array, length);
    cout << endl;

    cout << "\t --Task 3--\n";
    cout << "Length of largest sequence " << largestSequence(array, length) << endl;
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

int foundNumberIndex(int* array, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (number == array[i] && i != length)
        {
            return i;
        }
    }
    return -1;
}

void printLessThenPreviousTwo(int* array, int length)
{
    int resoult_length = 0;
    int* resoult_array = new int[length];
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

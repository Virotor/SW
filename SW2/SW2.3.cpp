#include <iostream>
#include <string>

using namespace std;

int* initArray(int length);
void printArray(int* array, int length);
int largestSequence(int* array, int length);

int main()
{
    int length;
    cout << "Enter length of array\n";
    cin >> length;
    srand(time(nullptr));

    int* array = initArray(length);

    printArray(array, length);

    cout << largestSequence(array, length);
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

int largestSequence(int* array, int length)
{
    int count = 1, max_count = 1;
    for (int i = 0; i < length-1; i++)
    {
        if (array[i] == array[i+1])
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
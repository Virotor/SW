#include<iostream>
using namespace std;
int* initArray(int length);
void printArray(int* array, int length);
int positionOfTheNumber(int* array, int length, int number);


int main()
{
    int length,number;
    cout << "Enter length of the array : ";
    cin >> length;
    srand(time(NULL));
    int* array = initArray(length);
    printArray(array, length);
    cout << "Enter number : ";
    cin >> number;
    cout <<"Position of this number is "<< positionOfTheNumber(array, length, number) << endl;
	system("pause");
	return 0;
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

int positionOfTheNumber(int* array, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i]==number)
        {
            return i;
        }
    }
}
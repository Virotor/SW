#include<iostream>
using namespace std;
int* initArray(int length);
void printArray(int* array, int length);
int positionOfTheNumber(int* array, int length, int number);
void lessThanPrevious(int*array,int length);



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
    lessThanPrevious(array, length);
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
    delete[]array;
}
void lessThanPrevious(int*array,int length)
{
   
    int countOfNums = 0;
    for (int i = 2; i < length; i++)
    {
        if (array[i] < (array[i - 2] - array[i - 1]))
        {
            cout << array[i] << " ";
            countOfNums++;
        }
    }
    cout << endl;
    if (countOfNums == 0)
    {
        cout << "There are no such numbers here " << endl;
    }
    delete[]array;
}
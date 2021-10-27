#include<iostream>
using namespace std;
int* initArray(int length);
void printArray(int* array, int length);
void positionOfTheNumber(int* array, int length, int number);
void lessThanPrevious(int*array,int length);
void theLargestSequance(int* array, int length);


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
    positionOfTheNumber(array, length, number);
    lessThanPrevious(array, length);
    theLargestSequance(array, length);
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

void positionOfTheNumber(int* array, int length, int number)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i]==number)
        {
            cout<<"Position of this number is  " <<i<<endl;
            break;
        }
    }
}
void lessThanPrevious(int*array,int length)
{
   
    bool trueElement = false;
    for (int i = 2; i < length; i++)
    {
        if (array[i] < (array[i - 2] - array[i - 1]))
        {
            cout << array[i] << " ";
            trueElement = true;
        }
    }
    cout << endl;
    if (trueElement == false) {
        cout << " There are no such numbers here" << endl;
    }

}
void theLargestSequance(int* array, int length)
{
    
    int search = 1;
    int maxSequence = 1;
    for (int i = 0; i < length; i++) {

        if (array[i] == array[i + 1]) {
            search++;
        }
        else {
            search = 1;
        }

        if (search > maxSequence) {
            maxSequence = search;
        }
    }

    cout << "Length of the largest sequance is " << maxSequence << endl;

}
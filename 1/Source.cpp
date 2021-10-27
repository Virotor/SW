#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int* arr;
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 201 - 10;
        cout << setw(6) << arr[i];
    }
    cout << endl << "Enter the number by which the search will be carried out: " << endl;
    int number, position = 0, counter = 0;
    cin >> number;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            position = i;
            counter = counter++;
            break;
        }

    }
    if (counter != 0)
        cout << "Element " << number << " on a " << position << "-th position" << endl;
    else cout << "This element doesn't exist" << endl;
    delete[] arr;
    system("pause");
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

void findMaximumSequenceLength(int arr[], int n)
{
    int maxLength = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int length = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i]) length++;
            else break;
        }
        if (length > maxLength) maxLength = length;
    }
    cout << "\n Maximum length sequence " << maxLength;
}

int two ()
{
    srand(time(0));
    cout << " Enter the size of the array: ";
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = rand() % 20 - 10;
    cout << "The resulting array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    findMaximumSequenceLength(arr, n);
    delete[]arr;
    return 0;
}
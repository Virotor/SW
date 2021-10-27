#include <iostream>
#include <ctime>
using namespace std;

void findMaxSequenceLength(int arr[], int n) {
    int maxLength = 1;
    for (int i = 0; i < n - 1; i++) {
        int length = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) length++;
            else break;
        }
        if (length > maxLength) maxLength = length;
    }
    cout << "\nМаксимальная последовательность длиной " << maxLength;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    cout << "Введите размер массива: ";
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = 50 - rand() % 101;
    cout << "Итоговый массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    findMaxSequenceLength(arr, n);
    delete[]arr;
    return 0;
}
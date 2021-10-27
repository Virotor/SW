#include <iostream>
#include <ctime>
using namespace std;

void lessThanPrevDif(int arr[], int n) {
    cout << "\nОтвет : ";
    bool isDigitHere = false;
    for (int i = 2; i < n; i++) {
        if (arr[i] < arr[i - 2] - arr[i - 1]) {
            isDigitHere = true;
            cout << arr[i] << " ";
        }
    }
    if (!isDigitHere) cout << "таких чисел нет!!!";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    cout << "Введите размер массива : ";
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = rand() % 100 - 20;
    cout << "Итоговый массив : ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    lessThanPrevDif(arr,n);
    return 0;
}
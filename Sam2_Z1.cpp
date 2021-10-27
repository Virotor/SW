#include <iostream>
#include <ctime>
using namespace std;

void findArrDigit(int arr[], int digit,int n) {
    bool isDigitHere = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == digit) {
            isDigitHere = true;
            cout << "Индекс искомого элемента равен " << i;
            break;
        }
    }
    if (!isDigitHere) cout << "Такого числа в массиве нет!!!" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    cout << "Введите размер массива : ";
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = rand() % 100 - 100;
    cout << "Итоговый массив : ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    int digit;
    cout << "\nВведите число для поиска в массиве : ";
    cin >> digit;
    findArrDigit(arr,digit,n);
    return 0;
}

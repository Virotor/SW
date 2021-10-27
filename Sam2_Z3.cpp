#include <iostream>
#include <ctime>
using namespace std;

void findMaxPosled(int arr[], int n) {
    int maxPosled = 1;
    for (int i = 0; i < n - 1; i++) {
        int counter = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) counter++;
            else break;
        }
        if (counter > maxPosled) maxPosled = counter;
    }
    cout << "\nМаксимальная последовательность длиной : " << maxPosled;
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
    findMaxPosled(arr,n);
    return 0;
}

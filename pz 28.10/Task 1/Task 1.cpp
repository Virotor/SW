#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    setlocale(LC_ALL,"rus");
    int* Arr;
    int size,number;
    cout << "Введите размер масива\n";
    cin >> size;
    Arr = new int[size]; // динамический массив
    srand(time(NULL));
    int num;
    for (int i = 0; i < size; i++)
    {
        num = rand() % 20 + 1; // случайные числа от 0 до 20
        Arr[i] = num;
    }
    for (int i = 0; i < size; i++) { cout << Arr[i] << " "; }
    cout << endl;
    cout << "Поиск номера\n";
    cin >> number;
    for (int i = 0; i < size; i++) {
        if (Arr[i] == number) {
            cout << "pos = " << i<< "\n";
            i = size;
        }
        
    }
    delete[]Arr;

    system("pause");
}
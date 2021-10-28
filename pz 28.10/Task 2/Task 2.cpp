#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    int* Arr;
    int size;
    cout << "Введите размер масива\n";
    cin >> size;
    Arr = new int[size]; 
    srand(time(NULL));
    int num;
    for (int i = 0; i < size; i++)
    {
        num = rand() % 99 + 1; 
        Arr[i] = num;
    }
    for (int i = 0; i < size; i++) { cout << Arr[i] << " "; }
    cout << endl;
    cout << "Поиск номера\n";
    for (int i = 2; i < size; i++) {
        if (Arr[i] < Arr[i - 2] - Arr[i - 1]) {
            cout << "number = " << Arr[i] << "\n";
           
        }
       
    }

    
    delete[]Arr;

    system("pause");
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int* arr;
    int size;
    cout << "¬ведите размер массива: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 2 + 3;
        cout << setw(6) << arr[i];
    }
    int counter1, counter2;
    counter1 = 1;
    counter2 = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            counter2++;
            if (counter2 > counter1)
                counter1 = counter2;
        }
        else
            counter2 = 1;
    }
    cout << endl << counter1;
    delete[] arr;
}
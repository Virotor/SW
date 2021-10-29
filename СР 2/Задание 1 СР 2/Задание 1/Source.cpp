#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int* arr;
    int size;
    cout << "¬ведите размер матрицы: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 201 - 10;
        cout << setw(6) << arr[i];
    }
    cout << endl << "¬ведите номер, по которому будет производитьс€ поиск: " << endl;
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
        cout << "Ёлемент " << number << " на " << position << " позиции" << endl;
    else cout << "Ётого элемента не существует" << endl;
    delete[] arr;
    system("pause");
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int* arr;
    int size;
    cout << "������� ������ �������: ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 201 - 10;
        cout << setw(6) << arr[i];
    }
    cout << endl << "������� �����, �� �������� ����� ������������� �����: " << endl;
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
        cout << "������� " << number << " �� " << position << " �������" << endl;
    else cout << "����� �������� �� ����������" << endl;
    delete[] arr;
    system("pause");
    return 0;
}
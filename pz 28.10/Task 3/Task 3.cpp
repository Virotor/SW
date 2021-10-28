#include <iostream>
#include <ctime>
using namespace std;

int researchSuccession(int* array, int size)
{
    int number = 1;
    int count = 1;
    for (int j = 0; j < size; j++)
    {
        if (array[j] == array[j + 1]) count += 1;
        else {
            if (count > number) {
                number = count;
                count = 1;
            }
        }
    }
    return number;
}
int main()
{
    setlocale(LC_ALL, "rus");
    int* array;
    int size,k;
    cout << "Введите размер масива\n";
    cin >> size;
    array = new int[size];
    srand(time(NULL));
    int num;
    for (int i = 0; i < size; i++)
    {
        num = rand() % 10 + 1;
        array[i] = num;
    }
    for (int i = 0; i < size; i++) { cout << array[i] << " "; }
    cout << endl;
   k= researchSuccession(array, size);
   cout << "Колличество:" << k << endl;

    delete[]array;

    system("pause");
}
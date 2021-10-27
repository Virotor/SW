#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
        setlocale(LC_ALL, "RUS");
        srand(time(0));
        int size;
        do {
            cout << "Введите размер массива" << endl;
            cin >> size;
        } while (size < 1);
        int* a = new int[size];
        srand(time(0));
        for (int i = 0; i < size; ++i)
        {
            a[i] = 1 + rand() % 2;
            cout << setw(5) << a[i];
        }
        int counter1, counter2;
        counter1 = 1;
        counter2 = 1;
        for (int i = 0; i < size - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                counter2++;
                if (counter2 > counter1) counter1 = counter2;
            }
            else
                counter2 = 1;
        }
        cout << endl << "Длина наибольшей последовательности одинаковых чисел, идущих подряд: " << counter1 << endl;
        delete[] a;
    system("pause");
}
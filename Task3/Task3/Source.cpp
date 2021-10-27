#include <iostream>
#include <time.h>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	do {
		setlocale(LC_ALL, "RUS");
		srand(time(0));
        int size;
        do {
            cout << "Введите размер массива" << endl;
            cin >> size;
        } while (size < 1);
        int* array = new int[size];
        srand(time(0));
        for (int index = 0; index < size; ++index)
        {
            array[index] = 1 + rand() % 2; 
            cout << setw(5) << array[index];
        }
        int counter1, counter2;
        counter1 = 1;
        counter2 = 1;
        for (int index = 0; index < size - 1; index++)
        {
            if (array[index] == array[index + 1])
            {
                counter2++;
                if (counter2 > counter1) counter1 = counter2;
            }
            else
                counter2 = 1;
        }
        cout << endl << "Длина наибольшей последовательности одинаковых чисел, идущих подряд: " << counter1 << endl;
        delete[] array;
		cout << "Введите '1', если хотите, чтобы программа продолжила работу. Иначе выполнение программы завершится." << endl;
	} while (_getch() == '1');
	system("pause");
}
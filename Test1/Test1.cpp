// IndependentWork1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int inputIntegerFunc (const char* invitation)
{
    int i;
    cout << invitation << '\t';
    cin >> i;
    return (i);
}


string inputStringFunc(const char* invitation)
{
    string str;
    cout << invitation << '\t';
    cin >> str;
    return (str);
}


void enterKeyPressWaiting()
{
    cout << "Чтобы продолжить, нажимте клавишу 'ENTER'";
    cin.get();
    cin.get();
}


void task1()
{
#define TASK_NUMBER 1
    //
    // Задание 1
    //    Составить программу, которая будет считывать введённое целое число. После чего, каждую цифру этого числа необходимо вывести в новой строке.
    //
    cout << "Задание №" << TASK_NUMBER << ".\n";
    //
    string number = inputStringFunc("Введите целое положительное число 'n'");
    int i, size = number.size();
    cout << "Введённое число содержит следующие цифры (слева направо):\n";
    for (i = 0; i < size; i++)
    {
        cout << "\t" << number[i] << endl;
    }
    //
    cout << "Задание №" << TASK_NUMBER << " завершило свою работу.\n";
    enterKeyPressWaiting();
    cout << endl;
#undef TASK_NUMBER
}


void task2()
{
#define TASK_NUMBER 2
    //
    // Задание 2
    //    Составить программу, которая по введенному номеру дня недели будет выводить его название. Нумерация дней недели начинается с 1 – понедельник, 2 — вторник и т. д.
    //
    cout << "Задание №" << TASK_NUMBER << ".\n";
    //
    const char *days[] = {
        "ПОНЕДЕЛЬНИКУ",
        "ВТОРНИКУ",
        "СРЕДЕ",
        "ЧЕТВЕРГУ",
        "ПЯТНИЦЕ",
        "СУББОТЕ",
        "ВОСКРЕСЕНЬЮ",
    };
    int day;
    do {
        day = inputIntegerFunc("Введите номер дня недели (от 1 до 7):");
    } while ((day < 1) || (day > 7));
    cout << "Введённый номер дня недели (" << day << ") соответствует " << days[day-1] << endl;
    //
    cout << "Задание №" << TASK_NUMBER << " завершило свою работу.\n";
    enterKeyPressWaiting();
    cout << endl;
#undef TASK_NUMBER
}


void task3()
{
#define TASK_NUMBER 3
    //
    // Задание 3
    //    Написать программу, которая будет принимать два целых числа n и k и возвращает число, содержащее k первых цифр числа n
    //
    cout << "Задание №" << TASK_NUMBER << ".\n";
    //
    //
    string n = inputStringFunc("Введите целое положительное число 'n'");
    int k = inputIntegerFunc("Введите целое положительное число 'k':");
    if (k > n.size())
    {   // корректируем число 'k' в соответствии с длиной введённого числа 'n'
        k = n.size();
    }
    cout << "Введённое число 'n' содержит следующие первые 'k' цифр (слева направо):\n";
    for (int i = 0; i < k; i++)
    {
        cout << "цифра №" << (i+1) << ":\t" << n[i] << endl;
    }
    //
    cout << "Задание №" << TASK_NUMBER << " завершило свою работу.\n";
    enterKeyPressWaiting();
    cout << endl;
#undef TASK_NUMBER
}

double diagonalCalculate(int x, int y);
void task4()
{
#define TASK_NUMBER 4
    //
    // Задание 4
    //    Написать программу, которая должна определить, пройдёт ли параллелепипед в отверстие. Размеры отверстия и габариты параллелепипеда (длина, высота, ширина) вводятся пользователем.
    //
    cout << "Задание №" << TASK_NUMBER << ".\n";
    //
    //
    int diameter = inputIntegerFunc("Введите диаметр отверстия:");
    int length = inputIntegerFunc("Введите длину параллелепипеда:");
    int width = inputIntegerFunc("Введите ширину параллелепипеда:");
    int height = inputIntegerFunc("Введите высоту параллелепипеда:");
    double diagonal1, diagonal2, diagonal3;
    diagonal1 = diagonalCalculate(length, width);
    diagonal2 = diagonalCalculate(length, height);
    diagonal3 = diagonalCalculate(height, width);
    if ((diagonal1 < diameter) || (diagonal2 < diameter) || (diagonal3 < diameter))
        cout << "Параллелепипед пройдёт в отверстие\n";
    else
        cout << "Параллелепипед НЕ пройдёт в отверстие\n";
    //
    cout << "Задание №" << TASK_NUMBER << " завершило свою работу.\n";
    enterKeyPressWaiting();
    cout << endl;
#undef TASK_NUMBER
}


double diagonalCalculate(int x, int y)
{
    double  d = sqrt((x * x) + (y * y));
    return (d);
}


void task5()
{
#define TASK_NUMBER 5
#define PASSWORD_SIZE 4
    //
    // Задание 5
    //    Написать программу, которая будет угадывать пароль. Пароль состоит из 4 цифр (не четырёхзначное число).
    //    Необходимо, чтобы программа угадала его. Символы для пароля генерируются случайно. После того как программа угадала пароль, он выводится на экран.
    //
    cout << "Задание №" << TASK_NUMBER << ".\n";
    //
    int digit[PASSWORD_SIZE], i, j;
    // генерируем 4-значный пароль
    srand((int)time(0));
    for (i = 0; i < PASSWORD_SIZE; i++)
    {
        digit[i] = rand() % 10;
    }
    // поиск пароля
    cout << "Итак, искомый пароль:\t";
    for (i = 0; i < PASSWORD_SIZE; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j == digit[i])  break;
        }
        cout << j;
    }
    cout << endl;
    //
    cout << "Задание №" << TASK_NUMBER << " завершило свою работу.\n";
    enterKeyPressWaiting();
    cout << endl;
#undef TASK_NUMBER
#undef PASSWORD_SIZE
}


int main()
{
    setlocale (LC_ALL, "Russian");
    task1();
    task2();
    task3();
    task4();
    task5();
    return (0);
}


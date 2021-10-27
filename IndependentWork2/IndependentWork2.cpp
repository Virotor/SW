// IndependentWork2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;


const int  ONE_DIM_ARRAY_SIZE_LIMIT = 20;     // максимальный количество элементов одномерного массива (one-dimensional array size)
const int  TWO_DIM_ARRAY_SIZE_LIMIT = 5;      // максимальный количество строк/столбцов двумерного массива (two-dimensional array size)


int InputIntegerFunc(const char* invitation)
{
    int i;
    cout << invitation << '\t';
    cin >> i;
    return (i);
}


// функция создаёт одномерный массив количеством size элементов с элементами в диапазоне от -limit до +limit
void OneDimArrayCreating(int* array, const int size, const int limit)
{
    srand((int)time(0));
    for (int i = 0; i < size; i++)
        array[i] = rand() % (2 * limit) - limit;
    cout << "\nСоздан  одномерный массив из " << size << " элементов в диапазоне от -" << limit << " до +" << limit << ":\n";
    for (int i = 0; i < size; i++)
        cout << "   " << array[i];
    cout << "\n";
}


// функция создаёт двумерный массив количеством rows*columns элементов с элементами в диапазоне от -limit до +limit
    void  TwoDimArrayPrinting(int* array, const int rows, const int columns);
void TwoDimArrayCreating(int* array, const int rows, const int columns, const int limit)
{
    int  i, j;
    srand((int)time(0));
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            array[i * columns + j] = rand() % (2 * limit) - limit;
    cout << "\nСоздан  двумерный массив из " << rows << " на " << columns << " элементов в диапазоне от -" << limit << " до +" << limit << ":\n";
    TwoDimArrayPrinting(array, rows, columns);
}


void  TwoDimArrayPrinting(int* array, const int rows, const int columns)
{
    int  i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
            cout << "   " << array[i * columns + j];
        cout << "\n";
    }
    cout << "\n";
}

// расчёт расстояния между двумя точками
double  DistanceCalculating(int x1, int y1, int x2, int y2)
{
    int delta_x = x1 - x2;
    int delta_y = y1 - y2;
    double  distance = sqrt(delta_x * delta_x + delta_y * delta_y);
    return distance;
}



void task1()
{
    cout << "\n\nЗадание №1:    Написать функцию, которая будет выводить позицию первого элемента массива, равного введённому числу.\n";
    //
    int  *array, quantity, value_limit, value, i;
    do {
        quantity = InputIntegerFunc("\nВведите количество элементов одномерного массива (от 1 до 20)");
    } while ((quantity < 1) && (quantity > ONE_DIM_ARRAY_SIZE_LIMIT));
    do {
        value_limit = InputIntegerFunc("\nВведите диапазон значений элементов одномерного массива (диапазон будет соответствовать +/- тому значению, которое введёте)");
    } while (value_limit < 1);
    // динамическое выделение памяти под массив элементов типа int (количество элемнтов - quantity)
    array = static_cast<int*>(malloc(quantity * sizeof(int)));
    //
    OneDimArrayCreating (array, quantity, value_limit);
    value = InputIntegerFunc("\nВведите целое число, чтобы узнать № его позиции в массиве");
    //
    for (i = 0; i < quantity; i++)
    {
        if (array[i] == value)     break;   // элемент найден
    }
    //
    if (i < quantity)
        cout << "\nЗначение " << value <<" располагается в массиве под номером " << i << ".";
    else
        cout << "\nЗначение " << value << " в массиве отсутствует!";
    cout << "\n";
    //
    system("pause");
    // освобождаем ранее выделенную память
    free(array);
}


void task2()
{
    cout << "\n\nЗадание №2:    Написать функцию, которая будет находить все числа в массиве, которые меньше разности двух предыдущих.\n";
    //
    int  *array, quantity, value_limit, i, success = 0;
    do {
        quantity = InputIntegerFunc("\nВведите количество элементов одномерного массива (от 1 до 20)");
    } while ((quantity < 1) && (quantity > ONE_DIM_ARRAY_SIZE_LIMIT));
    do {
        value_limit = InputIntegerFunc("\nВведите диапазон значений элементов одномерного массива (диапазон будет соответствовать +/- тому значению, которое введёте)");
    } while (value_limit < 1);
    // динамическое выделение памяти под массив элементов типа int (количество элемнтов - quantity)
    array = static_cast<int*>(malloc(quantity * sizeof(int)));
    //
    OneDimArrayCreating(array, quantity, value_limit);
    //
    for (i = 2; i < quantity; i++)
    {
        if (array[i] < (array[i - 2] - array[i - 1]))
        {
            cout << "\nТребуемому условию соотвествует элемент " << array[i] << ".";
            success++;  // признак того, что был достигнут хотя бы один успешный случай
        }
    }
    //
    if (!success)
        cout << "\nВ массиве нет ни одного элемента, который соответствовал бы требуемому условию!";
    cout << "\n";
    //
    system("pause");
    // освобождаем ранее выделенную память
    free(array);
}


void task3()
{
    cout << "\n\nЗадание №3:    Написать функцию, которая находит длину наибольшей последовательности одинаковых чисел, идущих подряд.\n";
    //
    //
    int  *array, quantity, value_limit, value, i, current_chain_length, max_chain_length = 0;
    do {
        quantity = InputIntegerFunc("\nВведите количество элементов одномерного массива (от 1 до 20)");
    } while ((quantity < 1) && (quantity > ONE_DIM_ARRAY_SIZE_LIMIT));
    do {
        value_limit = InputIntegerFunc("\nВведите диапазон значений элементов одномерного массива (диапазон будет соответствовать +/- тому значению, которое введёте)");
    } while (value_limit < 1);
    // динамическое выделение памяти под массив элементов типа int (количество элемнтов - quantity)
    array = static_cast<int*>(malloc(quantity * sizeof(int)));
    //
    OneDimArrayCreating(array, quantity, value_limit);
    //
    for (i = 1, value = array[0], current_chain_length = 1; i < quantity; i++)
    {
        if (array[i] == value)
        {
            // встретился ещё один элемент в последовательной цепочке одинаковых элементов
            current_chain_length++;
        }
        else
        {
            // данный элемент не является продолжением в последовательной цепочке предыдущих одинаковых элементов
            if (current_chain_length > max_chain_length)
                max_chain_length = current_chain_length;    // обновляем максимум длины наибольшей последовательности одинаковых чисел
            // переиницируем анализируемое значение и длину текущей последовательной цепочки
            value = array[i];
            current_chain_length = 1;
        }
    }
    if (current_chain_length > max_chain_length)
        max_chain_length = current_chain_length;    // обновляем максимум длины наибольшей последовательности одинаковых чисел
    //
    cout << "\nИтак, в массиве длина наибольшей последовательности одинаковых чисел, идущих подряд, составляет " << max_chain_length << " элемента(ов).\n";
    //
    system("pause");
    // освобождаем ранее выделенную память
    free(array);
}


void task4()
{
    cout << "\n\nЗадание №4:    Написать функцию, которая транспонирует матрицу относительно главной диагонали.\n";
    //
    //
    int  *array, *array_tr, row_quantity, column_quantity, value_limit, value, i, j;
    do {
        row_quantity = InputIntegerFunc("\nВведите количество строк двумерного массива (от 1 до 5)");
    } while ((row_quantity < 1) && (row_quantity > TWO_DIM_ARRAY_SIZE_LIMIT));
    do {
        column_quantity = InputIntegerFunc("\nВведите количество столбцов двумерного массива (от 1 до 5)");
    } while ((column_quantity < 1) && (column_quantity > TWO_DIM_ARRAY_SIZE_LIMIT));
    do {
        value_limit = InputIntegerFunc("\nВведите диапазон значений элементов двумерного массива (диапазон будет соответствовать +/- тому значению, которое введёте)");
    } while (value_limit < 1);
    // динамическое выделение памяти под массив элементов типа int (количество элемнтов - quantity)
    array = static_cast<int*>(malloc(row_quantity * column_quantity * sizeof(int)));
    //
    TwoDimArrayCreating(array, row_quantity, column_quantity, value_limit);
    //
    // динамическое выделение памяти под массив элементов типа int (количество элемнтов - quantity)
    array_tr = static_cast<int*>(malloc(row_quantity * column_quantity * sizeof(int)));
    // транспонирование относительно главной диагонали a_tr[j][i] = a[i][j]
    cout << "\nТранспонирование относительно главной диагонали a_tr[j][i] = a[i][j]\n";
    for (i = 0; i < row_quantity; i++)
        for (j = 0; j < column_quantity; j++)
            array_tr[j * row_quantity + i] = array[i * column_quantity + j];
    TwoDimArrayPrinting(array_tr, column_quantity, row_quantity);
    // транспонирование относительно побочной диагонали a_tr[n-1-j][n-1-i] = a[i][j]
    cout << "\nТранспонирование относительно побочной диагонали a_tr[n-1-j][n-1-i] = a[i][j]\n";
    for (i = 0; i < row_quantity; i++)
        for (j = 0; j < column_quantity; j++)
            array_tr[(row_quantity -1 -j)*row_quantity + row_quantity-1-i] = array[i * column_quantity + j];
    TwoDimArrayPrinting(array_tr, column_quantity, row_quantity);
    //
    system("pause");
    // освобождаем ранее выделенную память
    free(array);
    free(array_tr);
}


void task5()
{
    cout << "\n\nЗадание №5:    Найти максимальное расстояние меду двумя точками среди набора точек.\n";
    //
    //
    int  *array, dot_quantity, value_limit, i, j;
    const int coord_quantity = 2;   // X & Y
    double  current_distance, max_distance = 0.;
    do {
        dot_quantity = InputIntegerFunc("\nВведите количество точек (от 2 до 10)");
    } while ((dot_quantity < 1) && (dot_quantity > 10));
    do {
        value_limit = InputIntegerFunc("\nВведите диапазон значений координат точек (диапазон будет соответствовать +/- тому значению, которое введёте)");
    } while (value_limit < 1);
    // динамическое выделение памяти под массив элементов типа int (количество элемнтов - quantity)
    array = static_cast<int*>(malloc(dot_quantity * coord_quantity * sizeof(int)));
    //
    TwoDimArrayCreating(array, dot_quantity, coord_quantity, value_limit);
    //
    for (i = 0; i < (dot_quantity-1); i++)
        for (j = (i + 1); j < dot_quantity; j++) {
            current_distance = DistanceCalculating(
                array[i * coord_quantity],          // x1
                array[i * coord_quantity + 1],      // y1
                array[j * coord_quantity],          // x2
                array[j * coord_quantity + 1]       // y2
            );
            //
            if (current_distance > max_distance)
                max_distance = current_distance;
        }
    //
    cout << "\nИтак, максимальное расстояние между двумя точками составляет " << max_distance << ".\n";
    //
    system("pause");
    // освобождаем ранее выделенную память
    free(array);
}



int main()
{
    setlocale(LC_ALL, "Russian");
    task1();
    task2();
    task3();
    task4();
    task5();
    return (0);
}


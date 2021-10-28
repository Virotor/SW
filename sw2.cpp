#include <iostream>
#include <math.h>
using namespace std;

int* createArray(int);

void randArray(int*, int);

void showArray(int*, int);

void deleteArray(int*, int);

void randMatrix(int**, int, int);

void showMatrix(int**, int, int);

void deleteMatrix(int**, int);

void show_element_position(int*, int);

void find_element_smaller_than_difference(int*, int);

void greatest_consistency(int*, int);

void transposing_main(int**, int, int);

void transposing_side(int**, int, int);

void distance_between_dots(int);

int main()
{
    int size_of_arr;
    int number_of_task;
    cout<<"Введите размер массива."<<endl;
    cin>>size_of_arr;
    int *array = createArray(size_of_arr);
    do
    {
    cout<<"Выберите задание 1-5 (0 - выход)"<<endl;
    cin>>number_of_task;
    switch(number_of_task)
    {
        case 0: break;
        case 1: 
        {
            cout<<"Задание 1."<<endl;
            randArray(array, size_of_arr);
            showArray(array, size_of_arr);
            show_element_position(array, size_of_arr);
            break;
        }
        case 2:
        {
            cout<<"Задание 2."<<endl;
            randArray(array, size_of_arr);
            showArray(array, size_of_arr);
            find_element_smaller_than_difference(array, size_of_arr);
            break;
        }
        case 3: 
        {
            cout<<"Задание 3."<<endl;
            randArray(array, size_of_arr);
            showArray(array, size_of_arr);
            greatest_consistency(array, size_of_arr);
            break;
        }
        case 4:
        {
            cout<<"Задание 4."<<endl;
            int rows, columns;
 		    cout<<"Введите количество строк и столбцов : "<<endl;
 		    cin>>rows>>columns;
 		    int** matrix = new int* [rows];
 		    for (int i = 0; i < rows; i++)
 		    {
 			    matrix[i] = new int[columns];
 		    }
 		    randMatrix(matrix, rows, columns);
 		    showMatrix(matrix, rows, columns);
 		    cout<<endl;
            cout<<"Транспонирование относительной главной диагонали : "<<endl;
            transposing_main(matrix, rows, columns);
            cout<<"Транспонирование относительной побочной диагонали : "<<endl;
            transposing_side(matrix, rows, columns);
 		    deleteMatrix(matrix, rows);
 		    break;
        }
        case 5:
        { 
            cout<<"Задание 5."<<endl;
            int dots;
            cout<<"Введите кол-во точек."<<endl;
            cin>>dots;
            distance_between_dots(dots);
            break;
        }
        default: cout<<"Задания с таким номером нету"<<endl;
        break;
        deleteArray(array, size_of_arr);
    }
    }
    while (number_of_task != 0);
    return 0;
}

int* createArray(int size_of_arr)
{
    return new int[size_of_arr];
}

void randArray(int* array, int size_of_arr)
{
    srand(time(0));
    for (int i = 0; i < size_of_arr; i++)
    {
        array[i] = rand() % 21 - 10;
    }
}

void showArray(int* array, int size_of_arr)
{
    for (int i = 0; i < size_of_arr; i++)
    {
        cout<<array[i]<<"\t";
    }
    cout<<endl;
}

void deleteArray(int* array, int size_of_arr)
{
    delete[] array;
}

void randMatrix(int** matrix, int rows, int columns)
{
 	for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < columns; j++)
 		{
 			matrix[i][j] = rand() % 21 - 10;
 		}
 	}
}
void showMatrix(int** matrix, int rows, int columns)
 {
 	for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < columns; j++)
 		{
 			cout << matrix[i][j] << "\t";
 		}
 		cout << endl;
 	}
 }

void deleteMatrix(int** matrix, int rows)
{
 	for (int i = 0; i < rows; i++)
 	{
 		delete[] matrix[i];
 	}
 	delete[] matrix;
}
void show_element_position(int* array, int size_of_arr)
{
    int number;
    cout<<"Введите число."<<endl;
    cin>>number;
    for (int i = 0; i <= size_of_arr - 1; i++)
    {
        if (array[i] == number)
        {
            cout<<"Позиция введенного числа : "<<i<<endl;
            break;
        }
        if (i == size_of_arr) cout<<"Введенного числа нету в массиве"<<endl;
    }
}

void find_element_smaller_than_difference(int* array, int size_of_arr)
{
    for (int i = 3; i <= size_of_arr - 1; i++)
    {
        if (array[i] < (array[i-2] - array[i-1]))
        {
            cout<<"Число, которое меньше разности двух предыдущих : "<<array[i]<<endl;
        }
    }
}

void greatest_consistency(int* array, int size_of_arr)
{
    int counter_1 = 1, counter_2 = 1;
    for (int i = 0; i < size_of_arr - 1; i++)
    {
        if (array[i] == array[i + 1])
        {
            counter_2++;
        }
        else if (counter_1 < counter_2)
        {
            counter_1 = counter_2;
            counter_2 = 1;
        }
        else
        {
            counter_2 = 1;
        }
    }
    cout << "Максимальная длина последовательности одинаковых чисел: " << counter_1 << endl;
}

void transposing_main(int** matrix, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < i; j++)
 		{
 			int tmMatrix = matrix[i][j];
 			matrix[i][j] = matrix[j][i];
 			matrix[j][i] = tmMatrix;
 		}
 	}
 	for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < columns; j++)
 		{
 			cout << matrix[i][j] << "\t";
 		}
 		cout << endl;
 	}
}

void transposing_side(int** matrix, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < rows - 1; j++)
 		{
 			int tsMartix = matrix[i][j];
 			matrix[i][j] = matrix[rows - j - 1][rows - i - 1];
 			matrix[rows - j - 1][rows - i - 1] = tsMartix;
 		}
 	}
 	for (int i = 0; i < rows; i++)
 	{
 		for (int j = 0; j < columns; j++)
 		{
 			cout << matrix[i][j] << "\t";
 		}
 		cout << endl;
 	}
}

void distance_between_dots(int dots)
{
    double distance = 0, maxdistance = 0;
    int* arrayX = new int[dots];
    int* arrayY = new int[dots];
    for (int i = 0; i < dots; i++)
    {
        arrayX[i] = rand() % 21 - 10;
        arrayY[i] = rand() % 21 - 10;
    }
    
    for (int i = 0; i < dots; i++)
    {
        cout<<"[ "<<arrayX[i]<<" , "<<arrayY[i]<<" ]"<<endl;
    }
    for (int i = 0; i < dots; i++)
    {
        for (int j = 0; j < dots - 1; j++)
        {
            distance = sqrt((arrayX[i] - arrayX[j]) * (arrayX[i] - arrayX[j]) + (arrayY[i] - arrayY[j]) * (arrayY[i] - arrayY[j]));
            if (distance > maxdistance)
            {
                maxdistance = distance;
            }
        }
    }
    cout<<"Максимальное расстояние между точками : "<<maxdistance<<endl;
    delete[] arrayX;
    delete[] arrayY;
}
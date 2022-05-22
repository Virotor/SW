#include <iostream>
#include <ctime>
#include<iomanip>
#include<conio.h>
using namespace std;

int* createArr(int size)
{
    cout << "Enter random number generation range: ";
    int max, min;
    cin >> max >> min;
    cout << endl;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
    for (int i = 0; i < size; i++)
    {
        cout << fixed << arr[i] << setw(3);
    }
    return arr;
}

int positionElementArray(int size, int* mass)
{
    int position;
    int element;
    cout << endl;
    cout << "Enter element: ";
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (element == mass[i])
        {
            position = i;
            return position;
        }
    }
    return 0;
    
}
void findNumber(int size, int* mass)
{
    for (int i = 0; i < size; i++)
    {
        if (((mass[i] - mass[i + 1]) > mass[i + 2]) && (i + 2) < size)
        {
            cout << mass[i + 2] << " ";
        }

    }
}
int findlength(int length[], int size1, int k = 1, int max = 0)
{
    for (int i = 0; i < size1 - 1; i++)
    {
        if (length[i] == length[i + 1])
        {
            k++;
        }
        else
        {
            k = 1;
        }
        if (k > max)
            max = k;
    }
    return max;
}
void print(int** array, size_t n, size_t m) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl << endl;
    }
}
int** allocMatrix(size_t n, size_t m) {
    int** array = new int* [n];
    for (size_t i = 0; i < n; ++i) {
        array[i] = new int[m];
    }
    return array;
}
void freeMatrix(int** array, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        delete[] array[i];
    }
    delete[] array;
}


int main()
{
    srand(time(0));
    cout << "Enter size of the array: ";
    int size;
    cin >> size;
    int* arr = createArr(size);
    int pos = positionElementArray(size, arr);
    cout << "PositionElementArray: " << pos << endl;
    cout << "=======Task 2=======" << endl;
    findNumber(size, arr);
    cout << endl;
    cout << "=======Task 3=======" << endl;
    srand(time(0));
    int size1, i, k = 1, max = 0;
    int A = -9;
    int B = 9;
    cout << "Enter size: ";
    cin >> size1;
    int* length = new int[size1];
    for (int i = 0; i < size1; i++)
    {
        length[i] = A + rand() % ((B + 1) - A);
        cout << setw(2) << length[i] << " ";
    }
    cout << "\nThe maximum length of repeated numbers: ";
    cout<<findlength(length, size1, k, max);
    cout << endl;
    cout << "=======Task 4=======" << endl;
    int n, m;
    cout << "Size Matrix: ";
    cin >> n >> m;
    int** source = allocMatrix(n, m);
    int** transposed = allocMatrix(m, n);
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            source[i][j] = i * n + j; //
        }
    }
    cout << "source matrix: " << endl << endl;
    print(source, n, m);
    cout << endl;
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < m; j++)
            transposed[j][i] = source[i][j];
    cout << "transposed matrix: " << endl << endl;
    print(transposed, m, n);
    cout << endl;
    freeMatrix(source, n, m);
    freeMatrix(transposed, m, n);
    delete[] length;
    delete[]arr;
    _getch();
    system("pause");
    return 0;

}
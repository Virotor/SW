#include <iostream>
#include <locale>
#include <random>
using namespace std;

class Array
{
private:
    int Size;
    int* Arr;
    void Clear()
    {
        if (Arr != nullptr)
        {
            delete[] Arr;
        }
    }
    const int R_MAX = 40;
    const int R_MIN = -20;
public:
    void Enter()
    {
        Clear();

        cout << "Enter count of elements: ";
        cin >> Size;
        cout << "Fill massive: ";
        Arr = new int[Size];
        for (int i = 0; i < Size; i++)
        {
            cin >> Arr[i];
        }
    }
    void RandEnter()
    {
        Clear();

        cout << "Enter count of elements: ";
        cin >> Size;
        Arr = new int[Size];
        for (int i = 0; i < Size; i++)
        {
            Arr[i] = R_MIN + rand() % (R_MAX);
        }

    }
    void Print()
    {
        for (int i = 0; i < Size; i++)
        {
            cout << Arr[i] << " ";
        }
    }

    void SearchFor()
    {
        int num = 0;
        cout << "Enter number to find: ";
        cin >> num;

        for (int i = 0; i < Size; i++)
        {
            if (Arr[i] == num)
            {
                cout << "Position of first " << num << " is " << i;
                return;
            }
        }
        cout << "There is no " << num << " in array";
    }
    void SearchForDiff()
    {
        cout << "Number, that less than sum of two previos: ";
        int k = 0;
        for (int i = 2; i < Size; i++)
        {
            if (Arr[i] < Arr[i - 1] + Arr[i - 2])
            {
                k++;
                cout << Arr[i] << " ";
            }
        }
        if (k == 0)
        {
            cout << "There are no such elements.";
        }
    }

    Array()
    {
        this->Size = 0;
        Arr = new int[Size];
    }
    Array(int size)
    {
        this->Size = size;
        Arr = new int[Size];
    }
    ~Array()
    {
        Clear();
    }
};

void CheckTask1()
{
    Array arr1(0);
    arr1.RandEnter();
    arr1.Print();
    cout << "\n";
    arr1.SearchFor();
}
void CheckTask2()
{
    Array arr1(0);
    arr1.RandEnter();
    arr1.Print();
    cout << "\n";
    arr1.SearchForDiff();
}

int main()
{
    setlocale(LC_ALL, "rus");

    CheckTask2();
}

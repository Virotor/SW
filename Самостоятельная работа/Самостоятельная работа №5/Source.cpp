#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int SIZE = 4;
    int arr[4];
    int a=0;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 9;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {

        for (int a = 0; a <= 9; a++)
        {
            if (arr[i] == a)
            {
                cout << a;
            }
       }
       

    }

}
    
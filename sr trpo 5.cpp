#include <iostream>
#include<ctime>
using namespace std;
int main()
{
    int const size = 4;
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int password[size];


    for (int i = 0; i < size; i++)
    {
        password[i] = rand() % 10;
    }
    cout << "Сгенерированный пароль:\n";
    for (int i = 0; i < size; i++)
    {
        cout << password[i];
    }
    cout << "\nВзломанный пароль:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == password[i])
            {
                cout << j;
            }
        }
    }


    return 0;
}
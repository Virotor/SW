// SW_PROJECT4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    int length, width, hight;
    int hole_length, hole_hight;
    
    cout << "Enter the brick length: ";
    cin >> length;
    cout << "Enter the brick width: ";
    cin >> width;
    cout << "Enter the brick hight: ";
    cin >> hight;
    cout << "\nEnter the hole length: ";
    cin >> hole_length;
    cout << "Enter the brick hight: ";
    cin >> hole_hight;

    if ((length <= hole_length || width <= hole_length) & hight <= hole_hight)
    {
        cout << "Brick went into the hole!" << endl;
    }
    else
    {
        cout << "Brick couldn't went into the hole!" << endl;
    }

    return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

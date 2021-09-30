// задание теста 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int Parallelogram_length, Parallelogram_Height, Parallelogram_Width, Hole_lenght, Hole_Height, Hole_Wight;
    cout << "ввести длинну паралеллепипеда :";
    cin >> Parallelogram_length;
    cout << "ввести высоту паралеллепипеда:";
    cin >> Parallelogram_Height;
    cout << "ввести ширину паралеллепипеда:";
    cin >> Parallelogram_Width;
    cout << "ввести длинну отверстия :";
    cin >> Hole_lenght;
    cout << "ввести высоту отверстия:";
    cin >> y;
    cout << "ввести ширину отверстия:";
    cin >> z;
    

    if (Parallelogram_length <= Hole_lenght && Parallelogram_Height <= Hole_Height && Parallelogram_Width <= Hole_Wight || Parallelogram_length <= Hole_Height && Parallelogram_Height <= Hole_lenght && Parallelogram_Width <= Hole_Wight) 
    {
        cout << "параллелепипед входит " << endl;

    }
    else {
        cout << "не входит" << endl;
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

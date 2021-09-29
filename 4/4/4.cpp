#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double Bricklong, BrickWidth, BrickHeigt;   
    double Width, Height;          

    cout << "Пройдёт кирпич или нет???" << endl;

    cout << "Введите длинну параллелепипеда: ";
    cin >> Bricklong;
    cout << "Введите ширину параллелепипеда: ";
    cin >> BrickWidth;
    cout << "Введите высоту параллелепипеда: ";
    cin >> BrickHeigt;

    cout << "Введите ширина отверстия: ";
    cin >> Width;
    cout << "Введите высоту отверстия: ";
    cin >> Height;

    if (BrickWidth <= Width && BrickHeigt <= Height)
    {
        cout << "Параллелепипед пройдет в отверстие 1-й стороной" << endl;
    }
    else if (Bricklong <= Width && BrickHeigt <= Height)
    {
        cout << "Параллелепипед пройдет в отверстие 2-й стороной" << endl;
    }
    else if (Bricklong <= Width && BrickWidth <= Height)
    {
        cout << "Параллелепипед пройдет в отверстие 3-й стороной" << endl;
    }
    else
    {
        cout << "Параллелепипед не пройдет" << endl;
    }

    return 0;

}
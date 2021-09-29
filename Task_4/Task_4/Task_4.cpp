#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    
    double height, length, width, holeLength, holeHeight, holeWidth;

    cout << "Введите длинну, ширину и высоту параллелепипеда" << endl;
    cin >> length >> width >> height;
    cout << "Введите длинну, ширину и высоту отверстия" << endl;
    cin >> holeLength >> holeWidth >> holeHeight;
    
    double paral[3] = { length, width, height };
    double hole[3] = { holeHeight, holeLength, holeWidth };

    sort(paral, paral + 3);
    sort(hole, hole + 3);

    if (paral[0] <= hole[0] && paral[1] <= hole[1] && paral[2] <= hole[2])
    {
        cout << "Влезет";
    }
    else
    {
        cout << "Не влезет";
    }
    return 0;
}


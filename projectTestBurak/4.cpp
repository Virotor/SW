#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS" );
    int brickLength, brickWidth, brickHight, holeLength, holeWidth;
    cout << "Введите длину параллелепипеда: ";
    cin >> brickLength;
    cout << "Введите ширину параллелепипеда: ";
    cin >> brickWidth;
    cout << "Введите высоту параллелепипеда: ";
    cin >> brickHight;
    cout << "Введите длину отверстия: ";
    cin >> holeLength;
    cout << "Введите ширину отверстия: ";
    cin >> holeWidth;
    cout << endl;
    if (brickLength <= 0 || brickWidth <= 0 || brickHight <= 0 || holeLength <= 0 || holeWidth <= 0)
    {
        cout << "Не тупи.." << endl;
    }
    else
    {
        if (((brickWidth <= holeWidth || brickWidth <= holeLength) && (brickLength <= holeLength || brickLength <= holeWidth)) ||
            ((brickHight <= holeWidth || brickHight <= holeLength) && (brickLength <= holeWidth || brickLength <= holeLength)) ||
            ((brickWidth <= holeWidth || brickWidth <= holeLength) && (brickHight <= holeWidth || brickHight <= holeLength)))
        {
            cout << "Параллелепипед проходит в отверстие!" << endl;
        }
        else
        {
            cout << "Параллелепипед не проходит в отверстие!" << endl;
        }
    }
    system ("pause");
    return 0;
}
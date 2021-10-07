#include <iostream>
using namespace std;

int main()
{
    int width, length, height, diametr;
    double FirstDiagonal, SecondDiagonal, ThirdDiagonal, SmalerDiadonal;
    do {
        cout << "Enter width:";
        cin >> width;
    } while (width < 0);
    do {
        cout << "Enter length:";
        cin >> length;
    } while (length < 0);
    do {
        cout << "Enter Height:";
        cin >> height;
    } while (height < 0);
    do {
        cout << "Enter Diametr of a circle:";
        cin >> diametr;
    } while (diametr < 0);

    FirstDiagonal = pow((width * width) + (length * length), 1. / 2.);
    SecondDiagonal = pow((width * width) + (height * height), 1. / 2.);
    ThirdDiagonal = pow((length * length) + (height * height), 1. / 2.);

    if (FirstDiagonal <= SecondDiagonal && FirstDiagonal <= ThirdDiagonal)
        SmalerDiadonal = FirstDiagonal;
    else if (SecondDiagonal <= ThirdDiagonal && SecondDiagonal <= FirstDiagonal)
        SmalerDiadonal = SecondDiagonal;
    else if (ThirdDiagonal <= FirstDiagonal && ThirdDiagonal <= SecondDiagonal)
        SmalerDiadonal = ThirdDiagonal;


    if (SmalerDiadonal <= diametr)
        cout << "OK";
    else
        cout << "NO";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    double dLB, dWB, dHB;
    double dW, dH;
    setlocale(LC_ALL, "RUS");


    cout << "¬ведите длинну параллелепипед ";
    cin >> dLB;
    cout << "¬ведите ширину параллелепипед ";
    cin >> dWB;
    cout << "¬ведите высоту параллелепипед ";
    cin >> dHB;

    cout << "¬ведите ширина отверсти€: ";
    cin >> dW;
    cout << "¬ведите высоту отверсти€: ";
    cin >> dH;

    if (dWB <= dW && dHB <= dH)
    {
        cout << "параллелепипед войдЄт в отверстие 1-й стороной" << endl;
    }
    else if (dLB <= dW && dHB <= dH)
    {
        cout << "параллелепипед войдЄт в отверстие 2-й стороной" << endl;
    }
    else if (dLB <= dW && dWB <= dH)
    {
        cout << "параллелепипед войдЄт в отверстие 3-й стороной" << endl;
    }
    else
    {
        cout << "параллелепипед не пройдЄт" << endl;
    }

    return 0;

}
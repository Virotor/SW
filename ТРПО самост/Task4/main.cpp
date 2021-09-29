#include <iostream>
using namespace std;
int main() {
    int lengthPar, heightPar, widthPar, lengthHole, heightHole, widthHole;
    cout << "Введите длину, высоту, ширину параллелепипеда" << endl;
    cin >> lengthPar >> heightPar >> widthPar;
    cout << "Введите длину, высоту, ширину отверстия" << endl;
    cin >> lengthHole >> heightHole >> widthHole;
    if ((lengthPar < lengthHole and widthPar < widthHole and heightPar < heightHole) or (lengthPar < lengthHole and widthPar < heightHole and heightPar < widthHole) or (lengthPar < heightHole and heightPar < lengthHole and widthPar < widthHole) or (lengthPar < heightHole and heightPar < lengthHole and widthPar < lengthHole) or (lengthPar < widthHole and heightPar < heightHole and widthPar < lengthHole) or (lengthPar < widthHole and heightPar < heightHole and widthPar < lengthHole))
    {
        cout << "Параллелепипед пройдет в отвестие" << endl;
    }
    else
    {
        cout << "Параллелепипед не пройдет в отвестие" << endl;
    }
    return 0;
}

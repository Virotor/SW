#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, h, b1, h1;
    cout << "������� a:"; cin >> a;
    cout << "������� b:"; cin >> b;
    cout << "������� h:"; cin >> h;
    cout << "������� b1:"; cin >> b1;
    cout << "������� h1:"; cin >> h1;

    if (b < b1 && h < h1)
        cout << "������.";
    else
        cout << "�� ������.";
}
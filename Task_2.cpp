#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int day;

    cout << "������� ����� ��� ������: ";
    cin >> day;
    cout << "\n";

    switch (day)
    {
    case 1:
        cout << "�����������\n";
        break;
    case 2:
        cout << "�������\n";
        break;
    case 3:
        cout << "�����\n";
        break;
    case 4:
        cout << "�������\n";
        break;
    case 5:
        cout << "�������\n";
        break;
    case 6:
        cout << "�������\n";
        break;
    case 7:
        cout << "�����������\n";
        break;
    default:
        cout << "������!\n";
        break;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "������� ����� ��� ������: ";
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        cout << "�����������." << endl;
        break;
    }
    case 2: {
        cout << "�������." << endl;
        break;
    }
    case 3: {
        cout << "�����." << endl;
        break;
    }
    case 4: {
        cout << "�������." << endl;
        break;
    }
    case 5: {
        cout << "�������." << endl;
        break;
    }
    case 6: {
        cout << "�������." << endl;
        break;
    }
    case 7: {
        cout << "�����������." << endl;
        break;
    }

    default: cout << "������� ���������� ����� ��� ������!" << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "������� �����: ";
    cin >> n;
    while (n)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
    return 0;

}
#include <string>
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    std::string n;
    int k;

    std::cout << "������� n: ";
    std::cin >> n;
    std::cout << "������� k: ";
    std::cin >> k;
    std::cout << " " << n.substr(0, k);
} 
#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, z, x1, y1, z1;
    cout << "������� ������ ��������� : ";
    cin >> x;
    cout << "������� ����� ��������� : ";
    cin >> y;
    cout << "������� ������ ��������� : ";
    cin >> z;
    cout << "������� ������ ��������������� : ";
    cin >> x1;
    cout << "������� ����� ��������������� : ";
    cin >> y1;
    cout << "������� ������ ��������������� : ";
    cin >> z1;
    {
        if (x == x1)
            cout << "������ �������\n";
        if (y == y1)
            cout << "����� �������\n";
        if (z == z1)
            cout << "������ �������\n";
        if (x > x1)
            cout << "�� ������ �������\n";
        if (y > y1)
            cout << "�� ����� �������\n";
        if (z > z1)
            cout << "�� ������ �������\n";
        if (x < x1)
            cout << "�� ������ �� ��������\n";
        if (y < y1)
            cout << "�� ����� �� ��������\n";
        if (z < z1)
            cout << "�� ������ �� ��������\n";
    }
}
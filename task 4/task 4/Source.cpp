#include <iostream>
using namespace std;

int main()
{
    double dLB, dWB, dHB;
    double dW, dH;
    setlocale(LC_ALL, "RUS");


    cout << "������� ������ �������������� ";
    cin >> dLB;
    cout << "������� ������ �������������� ";
    cin >> dWB;
    cout << "������� ������ �������������� ";
    cin >> dHB;

    cout << "������� ������ ���������: ";
    cin >> dW;
    cout << "������� ������ ���������: ";
    cin >> dH;

    if (dWB <= dW && dHB <= dH)
    {
        cout << "�������������� ����� � ��������� 1-� ��������" << endl;
    }
    else if (dLB <= dW && dHB <= dH)
    {
        cout << "�������������� ����� � ��������� 2-� ��������" << endl;
    }
    else if (dLB <= dW && dWB <= dH)
    {
        cout << "�������������� ����� � ��������� 3-� ��������" << endl;
    }
    else
    {
        cout << "�������������� �� ������" << endl;
    }

    return 0;

}
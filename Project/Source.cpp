#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите номер дня недели: ";
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        cout << "Понедельник." << endl;
        break;
    }
    case 2: {
        cout << "Вторник." << endl;
        break;
    }
    case 3: {
        cout << "Среда." << endl;
        break;
    }
    case 4: {
        cout << "Четверг." << endl;
        break;
    }
    case 5: {
        cout << "Пятница." << endl;
        break;
    }
    case 6: {
        cout << "Суббота." << endl;
        break;
    }
    case 7: {
        cout << "Воскресенье." << endl;
        break;
    }

    default: cout << "Введите правильный номер дня недели!" << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите число: ";
    cin >> n;
    while (n)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
    return 0;
}
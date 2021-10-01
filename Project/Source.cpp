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
#include <string>
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    std::string n;
    int k;

    std::cout << "Введите n: ";
    std::cin >> n;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << " " << n.substr(0, k);
} 
#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, z, x1, y1, z1;
    cout << "Введите высоту отверстия : ";
    cin >> x;
    cout << "Введите длину отверстия : ";
    cin >> y;
    cout << "Введите ширину отверстия : ";
    cin >> z;
    cout << "Введите высоту параллелепипеда : ";
    cin >> x1;
    cout << "Введите длину параллелепипеда : ";
    cin >> y1;
    cout << "Введите ширину параллелепипеда : ";
    cin >> z1;
    {
        if (x == x1)
            cout << "Высоты совпали\n";
        if (y == y1)
            cout << "Длина совпала\n";
        if (z == z1)
            cout << "Ширина совпала\n";
        if (x > x1)
            cout << "По высоте пройдет\n";
        if (y > y1)
            cout << "По длине пройдет\n";
        if (z > z1)
            cout << "По ширине пройдет\n";
        if (x < x1)
            cout << "По высоте не проходит\n";
        if (y < y1)
            cout << "По длине не проходит\n";
        if (z < z1)
            cout << "По ширине не проходит\n";
    }
}
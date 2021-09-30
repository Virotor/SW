#include "clocale"
#include "conio.h"
#include "iostream"

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    cout << "\t\t\t\t Прожмите q чтобы завершить программу\n";

    while (true) {
        switch (_getch())
        {
        case '1':cout << "Понедельник\n"; break;
        case '2':cout << "Вторник\n"; break;
        case '3':cout << "Среда\n"; break;
        case '4':cout << "Четверг\n"; break;
        case '5':cout << "Пятнциа\n"; break;
        case '6':cout << "Суббота\n"; break;
        case '7':cout << "Воскресенье\n"; break;

        case 'q':return 0; break;

        default:cout << "Неверный номер месяца!!!\n";
            break;
        }
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

void number(int& number) {
    cout << "Enter number: ";
    cin >> number;
    while (number) {
        cout << number % 10 << endl;
        number /= 10;
    }
}
//next
void week(int& day) {
    cout << "day number: ";
    cin >> day;
    switch (day) {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wensday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    }
}
int main() {
    int x;
    number(x);
    week(x);
    system("pause");
    return 0;
}

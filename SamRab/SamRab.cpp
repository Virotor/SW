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
//next
void NfromK(int& x) {
    int n, k;
    cout << "enter number n: "; cin >> n;
    cout << "enter amount of number n: "; cin >> k;
    if (n < k) {
        cout << "Error\n";
    }
    else {
        int i = 0, kk = n;
        while (kk) {
            kk /= 10;
            i++;
        }
        cout << n / int(pow(10, (i - k))) << endl;
    }
}
//next
void rectangle(int& x) {
    int l, w, h, r; // l - Lenght, w - Width, h - Height, r - Radius
    cout << "Enter  lenght: ";  cin >> l;
    cout << "Enter  width: ";  cin >> w;
    cout << "Enter  height: ";  cin >> h;
    cout << "Enter  radius: ";  cin >> r;
    if (l <= 0)
        cout << "Error\n";
    else if (w <= 0)
        cout << "Error\n";
    else if (l <= 0)
        cout << "Error\n";
    else if (h <= 0)
        cout << "Error\n";
    else if (r <= 0)
        cout << "Error\n";
    else if (sqrt(l * l + w * w) <= 2 * r)
        cout << "Fits\n";
    else if (sqrt(l * l + h * h) <= 2 * r)
        cout << "Fits\n";
    else if (sqrt(w * w + h * h) <= 2 * r)
        cout << "Fits\n";
    else
        cout << "doesn't fit\n";
}
//next
void pass(int& x) {
    srand(time(NULL));
    string real_pass = "";
    for (int i = 0; i < 4; i++) {
        real_pass += rand() % 10 + '0';
    }
    string my_pass = "0000";
    cout << "Password prepared\n";
    while (my_pass[0] < '9' + 1) {
        if (my_pass == real_pass) {
            cout << "Password : " << my_pass << '\n';
            cout << "Pass is completed\n";
            return;
        }
        int j = 3;
        my_pass[j]++;
        while (my_pass[j] > '9' && j > 0) {
            my_pass[j - 1]++;
            my_pass[j] = '0';
            j--;
        }
        if (j == 0 && my_pass[0] == '9') {
            my_pass[0]++;
        }
    }
    cout << "Password not founded\n";
    cout << "Pass is completed with some error\n\n";
}
int main() {
    int x;
    number(x);
    week(x);
    NfromK(x);
    rectangle(x);
    pass(x);
    system("pause");
    return 0;
}

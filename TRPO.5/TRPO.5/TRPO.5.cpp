#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL));
    int password, num1, num2, num3, num4, PsevdoPassword;
    cout << "\nEnter a password: ";
    cin >> password;
    do {
        num1 = rand() % 10;
        num2 = rand() % 10;
        num3 = rand() % 10;
        num4 = rand() % 10;
        num1 *= 1000;
        num2 *= 100;
        num3 *= 10;
        PsevdoPassword = num1 + num2 + num3 + num4;
    } while (PsevdoPassword != password);
    if (PsevdoPassword < 9)
        cout << "Success! Your password is " << "000" << PsevdoPassword;
    else if (PsevdoPassword < 99)
        cout << "Success! Your password is " << "00" << PsevdoPassword;
    else if (PsevdoPassword < 999)
        cout << "Success! Your password is " << "0" << PsevdoPassword;
    else
        cout << "Success! Your password is " << PsevdoPassword;
}
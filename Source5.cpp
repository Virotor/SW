#include <string>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
    string numbers = "123456789";


    string altogether = numbers;
    string password = "";

    srand(time(NULL));
    password += numbers[rand() % numbers.length()];
    for (int i = 0; i < 3; ++i)
    {
        password += altogether[rand() % altogether.length()];
    }
    std::cout << "Password: " << password << '\n';

    return 0;
}
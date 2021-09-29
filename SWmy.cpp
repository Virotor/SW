#include <string>
#include <iostream>

int main()
{

    std::string number;

    std::cout << "Enter the number:" << '\n';
    std::cin >> number;
    
    for (int i = 0; i < size(number); i++) {
        std::cout << number[i] << '\n';
    }

    system("pause");
}

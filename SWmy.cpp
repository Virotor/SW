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


    // task 2

int number;

std::cout << "Enter the number of day in week:" << '\n';
std::cin >> number;

switch (number) {

    case 1:
      std::cout << "Понедельник." << '\n';
      break;

    case 2:
      std::cout << "Вторник." << '\n';
      break;

    case 3:
      std::cout << "Среда." << '\n';
      break;

    case 4:
      std::cout << "Четверг." << '\n';
      break;

    case 5:
      std::cout << "Пятница." << '\n';
      break;

    case 6:
      std::cout << "Суббота." << '\n';
      break;

    case 7:
      std::cout << "Воскресенье." << '\n';
      break;

    default:
      std::cout << "ERROR" << '\n';

}

system("pause");

}

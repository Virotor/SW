#include <iostream>
using namespace std;

int main()
{
 int pass, num1, num2, num3, num4, wrongpass;
 cout << "Enter a password: ";
 cin >> pass;
 do {
     num1 = rand() %10;
     num2 = rand() %10;
     num3 = rand() %10;
     num4 = rand() %10;
     num1 *= 1000;
     num2 *= 100;
     num3 *= 10;
  wrongpass = num1 + num2 + num3 + num4;
 } while (wrongpass != pass);
 if (wrongpass < 9)
  cout << "Password: " << "000" << wrongpass << "\n";
 else if (wrongpass < 99)
  cout << "Password: " << "00" << wrongpass << "\n";
 else if (wrongpass < 999)
  cout << "Password: " << "0" << wrongpass << "\n";
 else
  cout << "Password: " << wrongpass << "\n";
 return 0;
}

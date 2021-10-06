#include <string>
#include <iostream>

using namespace std;    
int main() 
{
    setlocale(LC_ALL, "RUS");
    string n;
    int k;

    cout << "Введите n: "; 
    cin >> n;
    cout << "Введите k: "; 
    cin >> k;

    cout << "Полученное число " << n.substr(0, k);
}
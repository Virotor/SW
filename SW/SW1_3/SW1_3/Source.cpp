#include <string>
#include <iostream>

using namespace std;    
int main() 
{
    setlocale(LC_ALL, "RUS");
    string n;
    int k;

    cout << "������� n: "; 
    cin >> n;
    cout << "������� k: "; 
    cin >> k;

    cout << "���������� ����� " << n.substr(0, k);
}
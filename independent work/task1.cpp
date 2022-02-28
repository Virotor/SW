#include <iostream>
#include <string>

using namespace std;


int main(){
    int num;
    string str;

    cout << "Enter number: "; cin >> num;

    str = to_string(num);
    for (int i=0; i < str.length(); i++){
        cout << str[i] << endl;
    }
    return 0;
}
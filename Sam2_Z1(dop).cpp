#include <iostream>
#include <string>
using namespace std;

void findStrInStr(string s,string sToFind) {
    if (sToFind.length() > s.length()) {
        cout << "Искомая строка больше исходней!";
        exit(0);
    }
    bool isStrHere = false;
    for (int i = 0; i <= s.length() - sToFind.length(); i++) {
        bool ok = true;
        for (int j = 0; j < sToFind.length(); j++) {
            if (s[i + j] != sToFind[j]) {
                ok = false;
                break;
            }
        }
        if (ok) isStrHere = true, cout << "Индекс начала подстроки " << i << endl;
    }
    if (!isStrHere)cout << "Такой подстроки нет!";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string s,sToFind;
    cout << "Введите строку : ";
    getline(cin, s);
    cout << "Введите строку которую нужно найти : ";
    getline(cin, sToFind);
    findStrInStr(s, sToFind);
    return 0;
}
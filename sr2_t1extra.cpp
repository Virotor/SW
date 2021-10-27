#include <iostream>
#include <string>
using namespace std;

void findStrInStr(string mainString, string stringToSearch) {
    if (stringToSearch.length() > mainString.length()) {
        cout << "Искомая строка больше главной!";
        exit(0);
    }
    bool isStringHere = false;
    for (int i = 0; i <= mainString.length() - stringToSearch.length(); i++) {
        bool ok = true;
        for (int j = 0; j < stringToSearch.length(); j++) {
            if (mainString[i + j] != stringToSearch[j]) {
                ok = false;
                break;
            }
        }
        if (ok) isStringHere = true, cout << "Индекс начала подстроки " << i << endl;
    }
    if (!isStringHere)cout << "Такой подстроки нет!";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string mainString, stringToSearch;
    cout << "Введите строку: ";
    getline(cin, mainString);
    cout << "Введите строку, которую нужно найти: ";
    getline(cin, stringToSearch);
    findStrInStr(mainString, stringToSearch);
    return 0;
}
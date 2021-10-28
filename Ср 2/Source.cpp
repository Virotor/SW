/*
Задание 1-a. Поиск  вхождения подстроки в другой строке
*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <math.h>
using namespace std;

// возвращаем длину строки совпадений, пока `X` и `Y` совпадают, иначе 0 если нет
int compare(const char* X, const char* Y)
{
    int cnt = 0; // подсчитываем количество совпадений подстроки
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
        X++;
        Y++;
        cnt++;
    }
    return (cnt);
}

// Функция поиска подстроки
int pos_substr(const char* source, const char* sub)
{
    int pos = 0;
    while (*source != '\0')
    {

        if ((*source == *sub) && compare(source, sub)) {
            return pos;
        }
        source++; pos++;
    }
    return NULL;
}

// Implement `strstr()` function in C
int main()
{
    string source = "";
    string substr = "";

    cout << ("Enter source : ");
    std::getline(std::cin, source);

    cout << ("Enter substring : ");
    std::getline(std::cin, substr);


    cout << pos_substr(source.c_str(), substr.c_str());
    _getch();
    return 0;
}
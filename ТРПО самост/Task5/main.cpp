#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    string password = "";
    for (int i = 0; i < 4; i++)
        password += (char)(rand() % 10 + 48);
    cout << "Сгенерирован пароль: " << password << endl;

    string guessedPass = "";
    for (int i = 0; i < 10000; i++)
    {
        int currGuess = i;
        for (int i = 0; i < 4; i++)
        {
            guessedPass += (char)(currGuess % 10 + 48);
            currGuess /= 10;
        }
        reverse(guessedPass.begin(), guessedPass.end());
        if (guessedPass == password)
            break;
        guessedPass = "";
    }
    cout << "Угадан пароль: " << guessedPass << endl;
    return 0;
}

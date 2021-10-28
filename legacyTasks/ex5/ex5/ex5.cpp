#include <iostream>
#include <random>
#include <string>

using namespace std;


int main() {
    int firstDigit = rand() % 10, secondDigit = rand() % 10, thirdDigit = rand() % 10, fourthDigit= rand() % 10, num;
    string randomPass, possiblePass= "0000";

    randomPass = to_string(firstDigit) + to_string(secondDigit) + to_string(thirdDigit) + to_string(fourthDigit);

    for (int i = 0; i <= 9; i++) {
        possiblePass.replace(3, 1, to_string(i));
        if (possiblePass == randomPass) {
            cout << "Yep! I know the password: " << possiblePass << endl;
        }
        for (int j = 0; j <= 9; j++) {
            possiblePass.replace(2, 1, to_string(j));
            if (possiblePass == randomPass) {
                cout << "Yep! I know the password: " << possiblePass << endl;
            }
            for (int l = 0; l <= 9; l++) {
                possiblePass.replace(1, 1, to_string(l));
                if (possiblePass == randomPass) {
                    cout << "Yep! I know the password: " << possiblePass << endl;
                }
                for (int f = 0; f <= 9; f++) {
                    possiblePass.replace(0, 1, to_string(f));
                    if (possiblePass == randomPass) {
                        cout << "Yep! I know the password: " << possiblePass << endl;
                    }
                }
            }
        }
    }

    return 0;
}
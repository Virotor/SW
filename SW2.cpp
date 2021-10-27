#include <iostream>

int checkPosition() {

    arrayCreate(-100, 100);

    std::cout << "\n";

    // define element

    std::cout << "Enter the element to find it's position:" << "\n";
    int element;
    std::cin >> element;

    // result

    bool is = false;

    int answer;

    for (int i = 0; i < arrsize; i++) {

        if (arr[i] == element) {
            std::cout << "Your element first mentioned in" << i << "position" << "\n";
            answer = i;
            is = true;
            break;
        }

    }

    if (!is) {
        std::cout << "Your element is not in the array." << "\n";
        answer = -1;
    }

    // if return negative number element is not in the array
    return answer;
}


int findLittleString()
{

    setlocale(LC_ALL, "Russian");

    // define helpful vars
    int help = 0;
    int answer;

    // define strings
    std::string longString = "люблю ТРПО";
    std::string shortString = "люб";

    // define lengths
    int longStringLenght = longString.size();
    int shortStringLenght = shortString.size();

    for (int i = 0; i < longStringLenght; i++) {

        if (longString[i] == shortString[0]) {

            help++;
            answer = i;

            for (int a = 1; a < shortStringLenght; a++) {

                if (longString[i + a] == shortString[a]) { // ///
                    help++;
                }

            }

        }

        if (help == shortStringLenght) {
            break;
        }

        else {
            help = 0;
            answer = -1;
        }

    }

    std::cout << "Posotion of the 1 element of short string in long string is " << answer;

    return answer;

}

int allNumbersWhichLower() {


    arrayCreate(-10, 10);

    for (int a = 0; a < arrsize; a++) {

        arr[a] = rand() % (max_value - min_value + 1) + min_value;
        std::cout << arr[a] << " ";

    }

    int flag = 0;

    for (int i = 2; i < arrsize; i++)
    {
        if (arr[i] < arr[i - 2] - arr[i - 1])
        {
            cout << arr[i] << ' ';
            flag = 1;
        }
    }


}

int arrayCreate(int min_value, int max_value) {

    // enter size of array

    std::cout << "Enter size of array:" << "\n";
    int arrsize;
    std::cin >> arrsize;

    int* arr = NULL;
    arr = (int*)malloc(sizeof(int) * arrsize);

    // define elements of array

    for (int a = 0; a < arrsize; a++) {

        arr[a] = rand() % (max_value - min_value + 1) + min_value;
        std::cout << arr[a] << " ";

    }

    return arr;

}

int lenghtOfSeq() {

    arr = arrayCreate(-10, 10);

    int size;
    size = sizeof(arr) / sizeof(arr[o]);

    int hm = 1;
    int max = 1;

    for (int i = 1; i < size; i++) {

        if (arr[i] == arr[i - 1])
        {
            hm++;
        }
        else
        {
            if (hm > max)
                max = hm;
            hm = 1;
        }

    }

}
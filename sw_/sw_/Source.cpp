#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int ex1()
{
    int number;
    cout << "Enter a number | ";
    cin >> number;
    string nums = "";

    while (true)
    {
        if (number == 0) break;
        nums = to_string(number % 10) + "\n" + nums;
        number /= 10;
    }

    cout << nums << endl;
    return 0;
}


int ex2()
{
    int weekday;
    cout << "Enter a day of week (1 - 7) | ";
    cin >> weekday;
    bool check = true;

    while (check) {
        switch (weekday)
        {
        case 1: cout << "Monday" << endl;
            check = false;
            break;
        case 2: cout << "Tuesday" << endl;
            check = false;
            break;
        case 3: cout << "Wednesday" << endl;
            check = false;
            break;
        case 4: cout << "Thursday" << endl;
            check = false;
            break;
        case 5: cout << "Friday" << endl;
            check = false;
            break;
        case 6: cout << "Saturday" << endl;
            check = false;
            break;
        case 7: cout << "Sunday" << endl;
            check = false;
            break;

        }
    }
    return 0;
}


int ex3()
{
    int n, k;
    bool check = true;

    while (check) {
        cout << "\nEnter n | ";
        cin >> n;
        cout << "\nEnter k | ";
        cin >> k;

        int count_n = 0;
        int copy_n = n;

        while (true)
        {
            if (copy_n == 0) break;
            copy_n /= 10;
            count_n++;
        }


        if (count_n < k) {
            cout << "Enter that count of number n >= k" << endl;
            continue;
        }

        cout << "Firstly k number of numbers n |" << endl;

        for (int i = 0; i < k; i++)
        {
            cout << to_string(n)[i] << endl;
        }
        check = false;

    }
    n = (int)n;
    return 0;
}


int ex4()
{
    int width, height, length;
    int radius;
    cout << "Width | ";
    cin >> width;
    cout << "\nHeight | ";
    cin >> height;
    cout << "\nLenght | ";
    cin >> length;
    cout << "\nRadius | ";
    cin >> radius;

    int diameter = 2 * radius;

    int diagonalP1, diagonalP2, diagonalP3;

    diagonalP1 = sqrt(width * width + height * height);
    diagonalP2 = sqrt(length * length + height * height);
    diagonalP3 = sqrt(width * width + length * length);

    int diagonalList[3] = { diagonalP1, diagonalP2, diagonalP3 };
    int n_result = 0;

    for (int i = 0; i < 2; i++)
    {
        int diagonal = diagonalList[i];
        int diagonal2 = diagonalList[i + 1];
        if (diagonal > diagonal2) n_result = diagonal;
        else n_result = diagonal2;
    }

    cout << n_result << endl;
    if (n_result < diameter) cout << "Pass" << endl;
    else cout << "Not work" << endl;
    return 0;
}


int ex5()
{
    char n1, n2, n3, n4;
    n1 = (int)rand() % 10;
    n2 = (int)rand() % 10;
    n3 = (int)rand() % 10;
    n4 = (int)rand() % 10;

    int numList[4] = { n1, n2, n3, n4 }; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numList[i] == j)
            {
                cout << j << endl;
            }
        }
    }

    n1 = (char)n1;
    n2 = (char)n1;
    n3 = (char)n1;
    n4 = (char)n1;

    return 0;
}

int main()
{
    int ex; bool check = true;

    while (check) {
        cout << "\nEnter the exercise 1 - 5 (0 - exit) | ";
        cin >> ex;

        switch (ex)
        {
        case 1:
            cout << "\nEx 1\n" << endl;
            ex1();
            break;
        case 2:
            cout << "\nEx 2\n" << endl;
            ex2();
            break;
        case 3:
            cout << "\nEx 3\n" << endl;
            ex3();
            break;
        case 4:
            cout << "\nEx 4\n" << endl;
            ex4();
            break;
        case 5:
            cout << "\nEx 5\n" << endl;
            ex5();
            break;
        case 0:
            check = false;
            break;
        }
    }

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int min ,max, firstNum, secNum, thirdNum, forthNum;
    min = 0;
    max = 9;
    int i = 0;
    srand(time(0));
    firstNum = rand()%(max-min+1)+min;
    secNum = rand()%(max-min+1)+min;
    thirdNum = rand()%(max-min+1)+min;
    forthNum = rand()%(max-min+1)+min;
    cout<<firstNum<<" "<<secNum<<" "<<thirdNum<<" "<<forthNum<<endl;
    cout << "Hacked password: " << endl;
    while (i != firstNum)
    {
        i++;
    }
    cout << i<<" ";
    while (i != secNum)
    {
        i++;
    }
    cout << i<<" ";
    while (i != thirdNum)
    {
        i++;
    }
    cout << i<<" ";
    while (i != forthNum)
    {
        i++;
    }
    cout << i << " " << endl;
    return 0;
}
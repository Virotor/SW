#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    srand(time(NULL));
    int y=0, n = 1;
    int y1= (rand() % 10);
    int y2 = (rand() % 10);
    int y3 = (rand() % 10);
    int y4 = (rand() % 10);
    cout << y1 <<y2 <<y3<<y4 <<endl;
    
    for (int i=0; i <= y1; i++)
    {  y++;}
    cout << y-1;
    y = 0;
    for (int i = 0; i <= y2; i++)
    {
        y++;
    }
    cout << y - 1;
    y = 0;
    for (int i = 0; i <= y3; i++)
    {
        y++;
    }
    cout << y - 1;
    y = 0;
    for (int i = 0; i <= y4; i++)
    {
        y++;
    }
    cout << y - 1;


    

}
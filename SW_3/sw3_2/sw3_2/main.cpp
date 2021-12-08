//
//  main.cpp
//  sw3_2
//
//  Created by Arina Melkumova on 8.12.21.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int result{};
    ifstream in("input.txt");
    char a;
    while (in >> a)
    {
        result++;
    }
    cout << result << " byte.\n";
    return 0;
}

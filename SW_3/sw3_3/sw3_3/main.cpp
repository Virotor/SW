//
//  main.cpp
//  sw3_3
//
//  Created by Arina Melkumova on 8.12.21.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    string a;
    int result{};
    while(getline(in, a))
    {
        ++result;
    }
    out << result << endl;
    return 0;
}

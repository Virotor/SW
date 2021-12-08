//
//  main.cpp
//  sw3_1
//
//  Created by Arina Melkumova on 8.12.21.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct smth{
    int a;
    double b;
    string c;
    int d;
};

int main()
{
    ifstream in("input.txt");
    vector<smth> result;
    string s;
    while (getline(in, s))
    {
        string tmp{};
        int t = 0;
        smth ans;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] != ' '){
                tmp += s[i];
        }
            else
            {
                if(t == 0)
                {
                    ans.a = stoi(tmp);
                }
                else if (t == 1)
                {
                    ans.b = stod(tmp);
                }
                else if(t == 2)
                {
                    ans.c = tmp;
                }
                tmp = "";
                ++t;
            }
        }
        ans.d = stoi(tmp);
        result.push_back(ans);
    }

    ofstream out;
    out.open("input.txt", std::ios::app);
    for(int i = result.size() - 1; i >= 0; --i){
        out << result[i].a << ' ' << result[i].b << ' ' << result[i].c << ' ' << result[i].d << endl;
    }

    return 0;
}


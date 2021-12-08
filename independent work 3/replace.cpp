#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Line{
    int first_int;
    int second_int;
    double dbl;
    string first_stirng;
    string second_stirng;
};

int main(){
    ifstream file("data"); 
    Line first_line;
    Line second_line;

    file >> first_line.first_int >> first_line.dbl >> first_line.second_int >> first_line.first_stirng >> first_line.second_stirng
    >> second_line.first_int >> second_line.dbl >> second_line.second_int >> second_line.first_stirng >> second_line.second_stirng;

    ofstream file2("data");
    file2 << second_line.first_int << ' ' << second_line.dbl << " " << second_line.second_int << " " << second_line.first_stirng << " " << second_line.second_stirng << endl
    << first_line.first_int << " " << first_line.dbl << " " << first_line.second_int << " " << first_line.first_stirng << " " << first_line.second_stirng;
    file2.close();

}
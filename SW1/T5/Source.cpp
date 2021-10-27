#include <iostream>
#include <string> 
#include <ctime>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
	string password;
	stringstream ss;
	int ques = 0, intPassword = 0;
	srand(time(NULL));
	for (int a = 0; a !=4; a++) ss << (rand() % 10);
	ss >> password;
	intPassword = stoi(password);
	cout << "Randomized password is: " << password << endl;
	while (ques != intPassword) ques++;
	cout << "Horray! Programm found password: ";
	if (ques < 1000) cout << "0";
	if (ques < 100) cout << "0";
	if (ques < 10) cout << "0";
	cout << ques;
	return 0;
}
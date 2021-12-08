#include "pch.h"
#include <iostream>
#include "math.h"
#include <cstdlib>
#include "time.h"
#include <string>
using namespace std;

int main()
{ 
	int random1, random2, random3, random4, i, n, j, h, g;
	string pwrd, quess ="0000";
	unsigned int count = 0;
	srand(time(NULL));
	random1 = rand() % 10;
	random2 = rand() % 10;
	random3 = rand() % 10;
	random4 = rand() % 10;
	pwrd = to_string(random1) + to_string(random2) + to_string(random3) + to_string(random4);
	cout << "test " << pwrd;
	for (i = 0; i <= 9; i++)
	{
		quess.replace(3, 1, to_string(i));
		if (quess == pwrd) {
			cout << "ok im in tenno" <<quess << endl;
		}
	
		for (j = 0; j <= 9; j++) {
			quess.replace(2, 1, to_string(j));
			if (quess == pwrd) {
				cout << "ok im in tenno" << quess << endl;
			}

			for (g = 0; g <= 9; g++) {
				quess.replace(1, 1, to_string(g));
				if (quess == pwrd) {
					cout << "ok im in tenno" << quess << endl;
				}
				for (h = 0; h <= 9; h++) {
					quess.replace(2, 1, to_string(h));
					if (quess == pwrd) {
						cout << "ok im in tenno" << quess << endl;
					}
				}
			}
		}
	}
	return 0;
}
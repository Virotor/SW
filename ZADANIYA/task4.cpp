
#include <iostream>
using namespace std;


int main()
{
	int A, B, H, hole_length, hole_width;
	cout << "Enter length\n"; cin >> A; cout << "Enter width\n"; cin >> B; cout << "Enter height\n"; cin >> H;
	cout << "Enter hole length\n"; cin >> hole_length; cout << "Enter hole width\n"; cin >> hole_width;
	if (H < hole_length && B <= hole_width) //время 23:16 
		cout << "fits\n";
	else
		if (H <= hole_width && B <= hole_length)
			cout << "fits\n";
		else
			if (A <= hole_length && B <= hole_width)
				cout << "fits\n";
			else
				if (A <= hole_length && H <= hole_width)
					cout << "fits\n";
				else
					if (H <= hole_length && A <= hole_width)
						cout << "fits\n";
					else
						if (B <= hole_length && A <= hole_width)
							cout << "fits\n";
						else
							cout << "dont fit\n"; //мильпопс жужужу жужужу 23:25
}


#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int number;

	cout << "Number = ";
	cin >> number;

	string str = to_string(number);

	for (int i = 0; i <= str.length(); i++)
	{
		cout << str[i] << endl;
	}

	int numberOfDay;

	cout << "Number of day = ";
	cin >> numberOfDay;

	switch (numberOfDay)
	{
	case 1: cout << "Monday" << endl;
		break;

	case 2: cout << "Thuestay" << endl;
		break;

	case 3: cout << "Wednesday" << endl;
		break;

	case 4: cout << "Thursday" << endl;
		break;

	case 5: cout << "Friday" << endl;
		break;

	case 6: cout << "Saturday" << endl;
		break;

	case 7: cout << "Sunday" << endl;
		break;

	default: cout << "Wrong number of day" << endl;
	}

	int k, n;

	cout << "n = ";
	cin >> n;

	cout << "k = ";
	cin >> k;

	int digitsOfN, temp;

	digitsOfN = 0;
	temp = n;

	while (temp != 0)
	{
		temp = temp / 10;
		digitsOfN++;
	}

		if (k <= digitsOfN)
		{
			string s = to_string(n);

			for (int i = 0; i < k; i++)
			{
				cout << s[i] << endl;
			}
		}
		else
		{
			cout << "Wrong k" << endl;
		}

		int length, width, height, radius;

		float diagonal;

		cout << "length = ";
		cin >> length;

		cout << "width = ";
		cin >> width;

		cout << "height = ";
		cin >> height;

		cout << "radius = ";
		cin >> radius;

		diagonal = sqrt(length * length + height * height);

		if (diagonal == 2 * radius)
		{
			cout << "The parallelepiped will pass";
		}
		else
		{
			cout << "The parallelepiped will not pass";
		}
}
#include <iostream>
#include<ctime>

using namespace std;

int main()
{
	string inputedString;
	cout << "Enter the first string:\n > "; cin >> inputedString;
	string toFind;
	cout << "Enter string, which position programm will search for:\n > "; cin >> toFind;
	int lengthOfInputedString = inputedString.length();
	int lengthOfToFind = toFind.length();
	int i = 0, ii = 0;
	int position = -1;
	while (i < lengthOfInputedString)
	{
		if (inputedString[i] == toFind[ii])
		{
			while (inputedString[i + ii] == toFind[ii])
			{
				ii++;
			};
			if (ii == lengthOfToFind)
			{
				position = i;
				i = lengthOfInputedString;
			}
			else
			{
				ii = 0;
			};
		};
		i++;
	};
	if (position != -1)
	{
		cout << "Position is: " << position;
	}
	else
	{
		cout << "There is no coincidence.";
	};
	return 0;
}
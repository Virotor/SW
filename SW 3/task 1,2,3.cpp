#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct task
{
	string word;
	int firstNumber;
	double secondNumber;
	int thirdNumber;
};

int fileSize(const char* fileName)
{
	struct stat file_stat;
	stat(fileName, &file_stat);
	return file_stat.st_size;
}

int main()
{
	task line1, line2;
	line1 = {"string",1,1.1,1};
	line2 = {"string",2,2.2,2};

	ofstream firstFile("text.txt");
	if (!firstFile.is_open())
	{
		return 0;
	}
	firstFile << line1.firstNumber << " " << line1.secondNumber << " " << line1.thirdNumber << " " << line1.word << endl;
	firstFile << line2.firstNumber << " " << line2.secondNumber << " " << line2.thirdNumber << " " << line2.word << endl;
	firstFile.close();

	ifstream fileInf("text.txt");
	string str;
	int numOfLines = 0;
	if (!fileInf.is_open())
	{
		return 0;
	}
	else
	{
		while (fileInf)
		{
			getline(fileInf, str);
			if (!fileInf.eof())
			{
				numOfLines++;
			}

		}
		cout << "Number of lines: " << numOfLines << endl;
	}

	ofstream secondFile("text_2.txt");
	cout << "Size of first file is " << fileSize("text.txt") << " bytes" << endl;
	if (!secondFile.is_open())
	{
		return 0;
	}
	else
	{
		secondFile << line2.firstNumber << " " << line2.secondNumber << " " << line2.thirdNumber << " " << line2.word << endl;
		secondFile << line1.firstNumber << " " << line1.secondNumber << " " << line1.thirdNumber << " " << line1.word << endl;
	}
	secondFile.close();
	cout << "Size of second file is " << fileSize("text_2.txt") << " bytes" << endl;

	ofstream lines("lines.txt");
	if (!lines.is_open())
	{
		return 0;
	}
	else {
		lines << numOfLines;
		cout << endl;
	}
}
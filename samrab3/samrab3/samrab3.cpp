#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct task
{
	string word;
	int num1;
	double num2;
	int num3;
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
	line1 = { "string",1,1.1,1 };
	line2 = { "string",2,2.2,2 };

	ofstream file("text.txt");

	if (!file)
	{
		cout << "ERROR" << endl;
		return 0;
	}
	file << line1.num1 << " " << line1.num2 << " " << line1.num3 << " " << line1.word << endl;
	file << line2.num1 << " " << line2.num2 << " " << line2.num3 << " " << line2.word << endl;
	file.close();
	ifstream infFromFile("text.txt");
	string strlnput;
	int numberOfLines = 0;
	if (!infFromFile)
	{
		cout << "ERROR" << endl;
		return 0;
	}
	else
	{
		while (infFromFile)
		{
			getline(infFromFile, strlnput);
			if (!infFromFile.eof())
			{
				numberOfLines++;
			}

		}
		cout << "Number of lines: " << numberOfLines << endl;
	}
	ofstream file2("text2.txt");

	cout << "Size of text.txt = " << fileSize("text.txt") << " bytes" << "\n";


	if (!file2)
	{
		cout << "ERROR" << endl;
		return 0;
	}
	else
	{
		file2 << line2.num1 << " " << line2.num2 << " " << line2.num3 << " " << line2.word << endl;
		file2 << line1.num1 << " " << line1.num2 << " " << line1.num3 << " " << line1.word << endl;
	}
	file2.close();

	cout << "Size of text2.txt = " << fileSize("text2.txt") << " bytes" << "\n";

	ofstream lines("lines.txt");
	if (!lines)
	{
		cout << "ERROR" << endl;
		return 0;
	}
	else {
		lines << numberOfLines;
		cout << endl;
	}
}

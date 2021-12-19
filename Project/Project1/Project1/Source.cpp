#include <iostream>
#include <string>
#include <fstream>


struct File {
	int mark;
	int digitOfGroup;
	std::string surname;
	std::string nameOfSubject;
};


void readFile(File* student, int countLine);
void reverseToNewFile(File* student, int countLine);
void sortFileByLine(File* student, int countLine);
void rewriteToNewFile(File* student, int countLine);
std::streampos sizeOfFile();
int calculateLineInFile();


int main()
{


	std::ifstream fin;
	fin.open("file.txt");
	if (fin.is_open()) {

		int countLine = calculateLineInFile();

		File* student = new File[countLine];
		readFile(student, countLine);
		reverseToNewFile(student, countLine);
		sortFileByLine(student, countLine);
		rewriteToNewFile(student, countLine);
		std::cout << "Size of file is -> " << sizeOfFile() << std::endl;

	}
	else std::cout << "File is absent!" << std::endl;
	fin.close();

	return 0;

}


int calculateLineInFile()
{
	std::ifstream fin;
	fin.open("file.txt");

	int countLine = 0;
	if (fin.is_open())
	{
		std::string str;
		while (getline(fin, str)) countLine++;
	}
	else std::cout << "File is absent!" << std::endl;

	fin.close();
	return countLine;
}


void reverseToNewFile(File* student, int countLine)
{
	std::ofstream fout;
	fout.open("newFile.txt");

	if (fout.is_open())
	{
		int index = countLine - 1;
		for (index; index > -1; index--)
		{
			fout << student[index].mark << " ";
			fout << student[index].digitOfGroup << " ";
			fout << student[index].surname << " ";
			fout << student[index].nameOfSubject << std::endl;
		}
	}
	else std::cout << "File is absent!" << std::endl;

	fout.close();
}


void rewriteToNewFile(File* student, int countLine)
{
	std::ofstream fout;
	fout.open("newFile.txt");

	if (fout.is_open())
	{
		for (int index = 0; index < countLine; index++)
		{
			fout << student[index].mark << " ";
			fout << student[index].digitOfGroup << " ";
			fout << student[index].surname << " ";
			fout << student[index].nameOfSubject << std::endl;
		}
	}
	else std::cout << "File is absent!" << std::endl;

	fout.close();
}


void readFile(File* student, int countLine)
{

	std::string str;
	std::string result;

	std::ifstream fin;
	fin.open("file.txt");

	if (fin.is_open())
	{

		int index = 0;
		while (index < countLine)
		{
			fin >> student[index].mark;
			fin >> student[index].digitOfGroup;
			fin >> student[index].nameOfSubject;
			fin >> student[index].surname;
			index++;
		}

	}
	fin.close();
}


void sortFileByLine(File* student, int countLine)
{

	std::string resultStr;
	for (int i = 0; i < countLine - 1; i++) {
		for (int j = i + 1; j < countLine; j++)
		{
			if (student[j].mark < student[i].mark)
			{
				student[i].mark -= student[j].mark;
				student[j].mark += student[i].mark;
				student[i].mark = student[j].mark - student[i].mark;

				student[i].digitOfGroup -= student[j].digitOfGroup;
				student[j].digitOfGroup += student[i].digitOfGroup;
				student[i].digitOfGroup = student[j].digitOfGroup - student[i].digitOfGroup;

				resultStr = student[j].surname;
				student[j].surname = student[i].surname;
				student[i].surname = resultStr;

				resultStr = student[j].nameOfSubject;
				student[j].nameOfSubject = student[i].nameOfSubject;
				student[i].nameOfSubject = resultStr;
			}
		}
	}
}


std::streampos sizeOfFile()
{
	std::ifstream fin("newFile.txt", std::ios::binary | std::ios::ate);
	return fin.tellg();
}
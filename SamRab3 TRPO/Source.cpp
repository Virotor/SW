#include "Class.h"

#include <iostream>


int main()
{
	int size = 1;
	exam* exams = readExamFromFile("file.txt", size);
	writeExamInFile("file1.txt", exams, size, std::ios_base::out, "forr");
	std::cout << sizeOfFile("file1.txt") << " bites";
	numberOfLines("file1.txt");

	return 0;
}
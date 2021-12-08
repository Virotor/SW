#include <iostream>
#include "Functions.h"



int main()
{
	int size = 1;
	exam* exams = readExamFromFile("file.txt", size);
	writeExamInFile("file1.txt", exams, size, ios_base::out);
	cout << "Size: " << sizeOfFile("file1.txt") << " bites";
	numberOfLines("file1.txt");
	return 0;
}
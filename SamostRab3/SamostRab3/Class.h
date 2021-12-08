#pragma once

#include <string>
#include <fstream>

using namespace std;

struct exam
{
	int mark;
	int id;
	string nameOfExam;
	string averageMarkLabs;
};

exam* readExamFromFile(string path, int& size);
exam* resizeArray(int& oldSize, int newSize, exam* exams);
void writeExamInFile(std::string path, exam* exams, int size, int openMode);
void writeExamInFile(std::string path, exam* exams, int size, int openMode, std::string writeMode);
int sizeOfFile(std::string path);
void numberOfLines(string path);
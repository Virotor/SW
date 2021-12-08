#pragma once 

#include <string>
#include <fstream>
using namespace std;

struct exam
{
	int mark;
	int studentId;
	string averageMark;
	string nameOfExam;
};

exam* readExamFromFile(string fileName, int& size);
exam* resizeArray(int& oldSize, int newSize, exam* exams);
void writeExamInFile(string fileName, exam* exams, int size, int openMode);
int sizeOfFile(string fileName);
void numberOfLines(string fileName);

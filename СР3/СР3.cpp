#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct exam {
	string nameOfExam;
	int mark;
	double average;
	int studentId;
};

int getFileSize(const char* fileName)
{
	struct stat file_stat;
	stat(fileName, &file_stat);
	return file_stat.st_size;
}


int main()
{
	exam stud1, stud2, stud3;
	stud1 = { "TRPO",10,10.1,1 };
	stud2 = { "TRPO",9,9.2,2 };
	stud3 = { "TRPO",8,8.3,3 };

	ofstream file("Exam.txt");
		
	if (!file)
	{
		cout << "ERROR, Exam.txt could not be opened for writing!" << endl;
		return 0;
	}
	file << stud1.nameOfExam << " " << stud1.mark << " " << stud1.average << " " << stud1.studentId << endl;
	file << stud2.nameOfExam << " " << stud2.mark << " " << stud2.average << " " << stud2.studentId << endl;
	file << stud3.nameOfExam << " " << stud3.mark << " " << stud3.average << " " << stud3.studentId << endl;
	file.close();
	ifstream infFromExam("Exam.txt");
	string strlnput;
	int numberOfRows = 0;
	if (!infFromExam) {
		cout << "ERROR, Exam.txt could not be opened for reading!" << endl;
		return 0;
	}
	else {
		while (infFromExam) {
			getline(infFromExam, strlnput);
			if (!infFromExam.eof()) {
				numberOfRows++;
			}
			
		}
		cout << "Number of rows: " << numberOfRows << endl;
	}
	ofstream file2("Exam2.txt");

	cout << "Size of Exam.txt = " << getFileSize("Exam.txt") << " bytes" <<"\n";
	

	if (!file2)
	{
		cout << "ERROR, Exam2.txt could not be opened for writing!" << endl;
		return 0;
	}
	else {
		file2 << stud1.nameOfExam << " " << stud1.mark << " " << stud1.average << " " << stud1.studentId << endl;
		file2 << stud2.nameOfExam << " " << stud2.mark << " " << stud2.average << " " << stud2.studentId << endl;
		file2 << stud3.nameOfExam << " " << stud3.mark << " " << stud3.average << " " << stud3.studentId << endl;
		file2 << stud1.nameOfExam << " " << stud1.mark << " " << stud1.average << " " << stud1.studentId << endl;
		file2 << stud2.nameOfExam << " " << stud2.mark << " " << stud2.average << " " << stud2.studentId << endl;
		file2 << stud3.nameOfExam << " " << stud3.mark << " " << stud3.average << " " << stud3.studentId << endl;
	}
	file2.close();

	cout << "Size of Exam2.txt = " << getFileSize("Exam2.txt") << " bytes" <<"\n";

	ofstream Rows("Rows.txt");
	if (!Rows)
	{
		cout << "ERROR, Rows.txt could not be opened for writing!" << endl;
		return 0;
	}
	else {
		Rows << numberOfRows;
		cout << endl;
	}
}


	

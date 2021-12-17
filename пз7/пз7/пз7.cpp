#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct age {
	int day;
	int month;
	int year;
	int age;
};
struct student
{
	string name;
	string surname;
	age age;
	int height;
	int weight;
};
student* studentInformation(student*, int);
student* ageOfStudent(student*, int);
void printStudentsInformation(student*, int);
string TheMostCommonName(student*, int);
int averageAge(student*, int);
bool compForSortSurname(student, student);
student* SortByTheSurname(student*, int);
int main()
{
	int numberOfStudents;
	cout << "Enter number of students : ";
	cin >> numberOfStudents;
	student* arrayOfStudents = new student[numberOfStudents];
	studentInformation(arrayOfStudents, numberOfStudents);
	arrayOfStudents = ageOfStudent(arrayOfStudents, numberOfStudents);
	printStudentsInformation(arrayOfStudents, numberOfStudents);
	cout << TheMostCommonName(arrayOfStudents, numberOfStudents);
	cout << "The average age is " << averageAge(arrayOfStudents, numberOfStudents) << endl;
	cout << "Sorted array by Surname : " << endl;
	printStudentsInformation(SortByTheSurname(arrayOfStudents, numberOfStudents), numberOfStudents);
	return 0;
}
student* studentInformation(student* arrayOfStudents, int amountOfStudents)
{

	for (int i = 0; i < amountOfStudents; i++) {
		cout << "Enter surname of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].surname;
		cout << "Enter name of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].name;
		cout << "Enter weight of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].weight;
		cout << "Enter height of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].height;
		cout << "Enter day of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].age.day;
		cout << "Enter month of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].age.month;
		cout << "Enter year of " << i + 1 << " student : ";
		cin >> arrayOfStudents[i].age.year;
	}
	return 0;
}
student* ageOfStudent(student* arrayOfStudents, int numberOfStudents)
{
	int age = 0;
	for (int i = 0; i < numberOfStudents; i++)
	{
		time_t t = time(0);
		struct tm* T = new tm;
		localtime_s(T, &t);
		age = (T->tm_year + 1900) - arrayOfStudents[i].age.year;
		if (arrayOfStudents[i].age.month > (T->tm_mon + 1))
		{
			age--;
		}
		else if (arrayOfStudents[i].age.month == (T->tm_mon + 1) && (arrayOfStudents[i].age.day > T->tm_mday))
		{
			age--;
		}
		arrayOfStudents[i].age.age = age;
	}
	return arrayOfStudents;
}
void printStudentsInformation(student* arrayOfStudents, int numberOfStudents)
{
	cout << " Surname\t\tname\t\tweight\t\tDate Of Birth\t\tHeight\t\tAge " << endl;
	for (int i = 0; i < numberOfStudents; i++) {
		cout << arrayOfStudents[i].surname << setw(20)
			<< arrayOfStudents[i].name << setw(14)
			<< arrayOfStudents[i].weight << setw(16)
			<< arrayOfStudents[i].age.day << "."
			<< arrayOfStudents[i].age.month << "."
			<< arrayOfStudents[i].age.year << setw(18)
			<< arrayOfStudents[i].height << setw(16)
			<< arrayOfStudents[i].age.age << endl;
	}
}
string TheMostCommonName(student* arrayOfStudents, int numberOfStudents)
{
	int max = 0;
	int positionOfName;

	for (int i = 0; i < numberOfStudents; i++)
	{
		int count = 0;
		for (int j = 0; j < numberOfStudents; j++)
		{
			if (arrayOfStudents[i].name == arrayOfStudents[j].name)
			{
				count++;
			}
		}
		if (count > max)
		{
			max = count;
			positionOfName = i;
		}
	}
	if (numberOfStudents == 1)
		return "There is only 1 student\n";
	else if (max == 1)
	{
		return "We have different students \n";
	}
	else
	{
		cout << "The most common name is ";
		return arrayOfStudents[positionOfName].name;
	}

}
int averageAge(student* arrayOfStudents, int numberOfStudents)
{
	int average = 0;
	for (int i = 0; i < numberOfStudents; i++)
	{
		average += arrayOfStudents[i].age.age;
	}
	average /= numberOfStudents;      
	return average;
}
bool compForSortSurname(student a, student b)
{
	return a.surname < b.surname;

}
student* SortByTheSurname(student* arrayOfStudents, int numberOfStudents)
{
	sort(arrayOfStudents, arrayOfStudents + numberOfStudents, compForSortSurname);
	return arrayOfStudents;
}
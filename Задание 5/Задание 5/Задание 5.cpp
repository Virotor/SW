#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;


int GetRandomNumber(int min, int max)
{	
	srand(time(NULL));
		int num = min + rand() % (max - min + 1);
		int num2 = min + rand() % (max - min + 1);
		int num3 = min + rand() % (max - min + 1);
		int num4 = min + rand() % (max - min + 1);

		return num; return num2; return num3; return num4;
	}


void main()
{
	
	int number;
	number = GetRandomNumber(0, 6); 
	cout << " " << number;;

	
	int number2;
	number2 = GetRandomNumber(0, 3); 
	cout << " " << number2;;

	
	int number3;
	number3 = GetRandomNumber(0, 9); 
	cout << " " << number3;;


	int number4;
	number4 = GetRandomNumber(0, 5); 
	cout << " " << number4;;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std; //ПРОВЕРКА НА ОТРИЦАТЕЛЬНОЕ ЧИСЛО

void task1()
{
	int num;
	cout << "Enter the number\n"; cin >> num;
	int count = 1;
	for (int i = 0; i < count; i++)
	{
		cout << num % 10 << endl; num /= 10;
		if (num != 0)
		{
			count++;
		}

	}
	cout << "\nTask 1 completed\n" << endl;
}

void task2()
{
	int day;
	cout << "Enter the number of the day\n"; cin >> day;
	switch (day)
	{
	case 1:
	{
		cout << "Monday\n"; break;
	}
	case 2:
	{
		cout << "Tuesday\n"; break;
	}
	case 3:
	{
		cout << "Wednesday\n"; break;
	}
	case 4:
	{
		cout << "Thursday\n"; break;
	}
	case 5:
	{
		cout << "Friday\n"; break;
	}
	case 6:
	{
		cout << "Saturday\n"; break;
	}
	case 7:
	{
		cout << "Sunday\n"; break;
	}
	default:
	{
		cout << "Wrong day number\n";
		break;
	}
	}
	cout << "\nTask 2 completed\n" << endl;
}
void task3()
{
	int n, k;
	cout << "n = "; cin >> n; cout << "k = "; cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;

	cout << "\nTask 3 completed\n" << endl;
}

void task4()
{
	int A, B, H, hole_length, hole_width;
	cout << "Enter length\n"; cin >> A; cout << "Enter width\n"; cin >> B; cout << "Enter height\n"; cin >> H;
	cout << "Enter hole length\n"; cin >> hole_length; cout << "Enter hole width\n"; cin >> hole_width;
	if (H < hole_length && B <= hole_width) //время 23:16 
		cout << "fits\n";
	else
		if (H <= hole_width && B <= hole_length)
			cout << "fits\n";
		else
			if (A <= hole_length && B <= hole_width)
				cout << "fits\n";
			else
				if (A <= hole_length && H <= hole_width)
					cout << "fits\n";
				else
					if (H <= hole_length && A <= hole_width)
						cout << "fits\n";
					else
						if (B <= hole_length && A <= hole_width)
							cout << "fits\n";
						else
							cout << "dont fit\n"; //мильпопс жужужу жужужу 23:25
}

void task5()
{
	srand(time(NULL));
	vector<int>password(4,0);
	for (int i = 0; i < 4; i++)
	{
		password[i] = rand() % 10; //почему 
		if (password[i] == 10)
			password[i] = 0;
	}

	vector<int>guess(4, 0); //а пон 
	for (int i = 0; i < 4; i++)
	{
		while (password[i] != guess[i])
		{
			guess[i]++;
		}
	}
	for (int number : guess)
		cout << number;
	
} 

int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
	system("pause");
}


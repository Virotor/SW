#include<iostream>
#include<math.h>

using namespace std;

int main()
{	
	cout << "\n-----------PROGRAM#1-----------------------------------------------------------------\n";
	long double number, factor = 1 ;
	do //proverka
	{
		cout << "\n\tEnter positive, preferably int number: ";
		cin >> number;
		
	} while ( number<= 0  or trunc(number) < number);

	while (factor < number/10) factor *= 10;
	cout << endl;
	while (factor >= 1)
	{
		cout<< "\t" << (int)(number / factor) << endl;
		number -= (int)(number / factor)*factor;
		factor /= 10;
	}

	cout << "\n-----------PROGRAM#2-----------------------------------------------------------------\n";

	int day;
	cout << "\n\tEnter the number of weekday: ";
	cin >> day;
	switch (day)
	{
	case 1:cout << "\tMonday" << endl; break;
	case 2:cout << "\tTuesday" << endl; break;
	case 3:cout << "\tWednesday" << endl; break;
	case 4:cout << "\tThursday" << endl; break;
	case 5:cout << "\tFriday" << endl; break;
	case 6:cout << "\tSaturday" << endl; break;
	case 7:cout << "\tSunday" << endl; break;
	default: cout << "\tIncorrect number..."<<endl;
	}

	cout << "\n-----------PROGRAM#3-----------------------------------------------------------------\n";

	double n, k, count=1, quotient;
	do //proverka
	{
		cout << "\n\tEnter positive, preferably int numbers!\n\tn = ";
		cin >> n;
		cout << "\tk = ";
		cin >> k;
	} while (n <= 0 or trunc(n) < n or k <= 0 or trunc(k) < k);
	
	quotient = n;
	count -= k;
	while (quotient > 10)
	{
		count++;
		quotient /= 10;
	}	
	if (count <= 0)
		cout << "\n\tIt's simple: " << n << endl;
	else
		cout << "\n\tFirst " << k << " digits of " << n << " : " << (int)(n / pow(10, count)) << endl;
	

	cout << "\n-----------PROGRAM#4-----------------------------------------------------------------\n";

	double size[6], length, height, width, hlength, hheight, hwidth;

	do
	{
		cout << "\n\tEnter positive length, height and width of hole and parallelepiped.\n\n\tParallelepiped:" << endl;
		cout << "\tlength = ";
		cin >> length;
		cout << "\theight = ";
		cin >> height;
		cout << "\twidth = ";
		cin >> width;
		cout << "\n\tHole:\n\tlength = ";
		cin >> hlength;
		cout << "\tdepth = ";
		cin >> hheight;
		cout << "\twidth = ";
		cin >> hwidth;
	} while (length <= 0 or height <= 0 or width <= 0 or hlength <= 0 or hheight <= 0 or hwidth <= 0);

	if (length > height)
	{
		size[2] = length;
		if (width > length)
		{
			size[2] = width;
			size[1] = length;
			size[0] = height;
		}
		else
			if (width > height)
			{
				size[1] = width;
				size[0] = height;
			}
			else
			{
				size[1] = height;
				size[0] = width;
			}
	}
	else
	{
		size[2] = height;
		if (width > height)
		{
			size[2] = width;
			size[1] = height;
			size[0] = length;
		}
		else
			if (width > length)
			{
				size[1] = width;
				size[0] = length;
			}
			else
			{
				size[1] = length;
				size[0] = width;
			}
	}
	
	if (hlength > hheight)
	{
		size[5] = hlength;
		if (hwidth > hlength)
		{
			size[5] = hwidth;
			size[4] = hlength;
			size[3] = hheight;
		}
		else
			if (hwidth > hheight)
			{
				size[4] = hwidth;
				size[3] = hheight;
			}
			else
			{
				size[4] = hheight;
				size[3] = hwidth;
			}
	}
	else
	{
		size[5] = hheight;
		if (hwidth > hheight)
		{
			size[5] = hwidth;
			size[4] = hheight;
			size[3] = hlength;
		}
		else
			if (hwidth > hlength)
			{
				size[4] = hwidth;
				size[3] = hlength;
			}
			else
			{
				size[4] = hlength;
				size[3] = hwidth;
			}
	}
	//for (int i = 0; i <= 5; i++)cout << size[i];
	for (int i = 0; i <= 2; i++)
	{
		if (size[i] <= size[i + 3])
			if (i <= 1)
				continue;
			else
			{
				cout << "\n\tToo little parallelepiped!\n\tOn vlazit!!!" << endl;
				break;
			}
		else
		{
			cout << "\n\tToo little hole!\n\tOn ne vlazit!!!"<<endl;
			break;
		}
	}
	
	cout << "\n-----------PROGRAM#5-----------------------------------------------------------------\n";
//	long double randsq, cofficient;

	int password[4], hack[10];
	int h;

//	cout << "\n\tEnter the cofficient: ";
//	cin >> cofficient;

	for (int i = 0; i <= 9; i++)
		hack[i] = i;
	for (int p = 0; p <= 3; p++)
		password[p] = (rand() % 10);

/*	randsq = (cofficient + sqrt(3)) / pow(2, sqrt(7));
	randsq = abs(randsq);
	for (int i = 0; i <= 4; i++)
	{  

		while (randsq>1000)
		{
			randsq /= 8.6;
		}

		if (randsq < 1)
			randsq *= pow(10, sqrt(i + 10));
		else
			if (randsq < 42)
				randsq *= (int)pow(sqrt(i + 3), 30) / pow(sqrt(i + 3), 30);
			else
				randsq /= pow(sqrt(i + 2), sqrt(i - 4));

		password[i] = (int)trunc(randsq);              //   Nothing ne vyslo(((((
	}*/
	cout << "\n\tPassword: ";
	for (int i = 0; i <= 3; i++)
	{
		for (h = 0; h <= 10; h++)		
			if (hack[h] == password[i])
			{
				cout << hack[h];
			}		
		h = 0;
	}
	//Zhal' this priznavat', but I've gived up(, because i want to eat, sleap, and I have to do other homework
	//Fuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	return 0;
}
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int a[100][100];
int line, column,kol;
long long l[10];
int substring_search()
{
	cout << "input string\n";
	string s;
	getline(cin, s);
	cout << "input substring\n";
	string p;
	getline(cin, p);
	for (int i = 0; i < s.size(); i++)
	{
		int n, num = 0;
		if (s[i] == p[0]) {
			n = i; num++;
			for(int j=1;j<p.size();j++)
			{   
				i++;
				if (s[i] != p[j]) { break; }
				else { num++; }
			}
		}
		if (num == p.size()) { cout << n; }
	}
	return 0;
}
int mas_input(int &elem )
{
	cout << "input numbers  of elements\n";
	cin >> kol;
	
	srand(time(NULL));
	for (int i = 0; i <kol; i++) {
		
		
		l[i]=rand()%10;
	}
	return 0;
}

int mas_output()
{
	for (int i = 0; i < kol; i++) {
		
		if (i == kol - 1) { cout << l[i] << ";";
		}
		else { cout << l[i] << ","; }
	}
	cout << endl;
	return 0;
}

int positions_element()
{
	int elem;
	while (1)
	{
		cout << "input elements\n";
		cin >> elem;
		for (int i = 0; i < kol; i++)
		{
			if (l[i] == elem) { cout << i << "\n"; break; }
		}
	}
	return 0;
}
 
int difference_numbers()
{
	for (int i = 2; i < kol; i++)
	{
		if (l[i] < (l[i - 2] - l[i - 1])) { cout << l[i] << " "; }
	}
	return 0;
}

int long_sequence()
{
	int b = 1, max = 0;
	for (int i = 1; i<kol; i++)
	{
		
		if (l[i] == l[i - 1]) { b++; }
		else if (b > max) { max = b; b = 1; }
		else { b = 1; }
	}
	cout << max;
	return 0;
}

int matrix_input(int &line, int &column)
{
	cout << "input numbers matrix of line\n";
	cin >> line;
	cout << "input numbers matrix of column\n";
	cin >> column;

	srand(time(NULL));
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{

			int numb = rand() % 20;
			int sign = rand() % 2;
			if (sign > 0)
				numb *= -1;
			a[i][j] = numb;

		}
	}
	
	return 0;
}

int matrix_output() {
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(4) << a[i][j];
		} cout << endl;
	}
	return 0;
}

int trancp()
{
	cout <<"po glavnoi\n";
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < line; j++) {
			cout << setw(4) << a[j][i] << " ";
		} cout << endl;
	}

	cout << "po pobocnoi\n";

	for (int i = column-1; i!=-1; i--) {
		for (int j = line - 1; j != -1; j--) {
			cout << setw(4) << a[j][i] << " ";
		} cout << endl;
	}
	return 0;
}

int max_length()
{
	double R = 0, max = 0;
	for (int i = 0; i < line-1; i++)
	{
		
		int x0 = a[i][0], y0 = a[i][1];
		for (int j = i + 1; j < line; j++)
		{
		 int x1 = a[j][0], y1 = a[j][1];
		 R = sqrt((x1 - x0)* (x1 - x0) + (y1 - y0)* (y1 - y0));
		 if (R > max) 
		 {
			 max = R;
		 }
		}
		

	}
	cout << "max length: " << max;
	return 0;
}


int main()
{
	
	/*
	   //  tack 1.1
		mas_input(kol);
		mas_output();
		positions_element();
		
		// tack 1.2
		  substring_search();
		// tack 2
		 mas_input(kol);
		mas_output();
		difference_numbers();

		// tack 3
		mas_input(kol);
		mas_output();
		long_sequence();

		// tack 4
		 matrix_input(line, column);
		matrix_output();
		trancp();

		//tack 5  line- количество точек, сolumn = 2 (так как две кординаты x,y)
		 matrix_input(line, column);
		matrix_output();
		max_length();
	*/
}
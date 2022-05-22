#include <iostream>
#include <string>
#include <windows.h>

using namespace std;



string GetMyStr(int& count_word)
{

	string S, temp;                   
	cout << "Stop Enter - CTRL+Z or enter void (push Enter)\n";
	while ((getline(cin, S)) && (S.length()) > 2)
	{   
		temp = temp + S + '\n';						 
		count_word++;								 
	}
	return temp;	
}


string GetStrFromMyStr(string S, int N) 
{
	int i = 0;										
	string buf;										
	const char* temp = (S.c_str());					

	while (i != N) {								
		while (*temp != '\n') {						
			if (i == N - 1) buf = buf + *temp;		
			*temp++;								
		}
		*temp++;									
		i++;										
	}
	return buf;									
}

void sort(string* S, int N)
{
	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++) {
			if (strcmp(S[i].c_str(), S[j].c_str()) > 0) swap(S[i], S[j]);
		}
}

int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int count_word = 0;

	string MyStr = GetMyStr(count_word);
	cout << "***********END ENTER DATA***********\n\n";
	string* S = new string[count_word]; 
	for (int i = 0; i < count_word; i++)
	{
		S[i] = GetStrFromMyStr(MyStr, i + 1);
	}
	sort(S, count_word);
	for (int i = 0; i < count_word; i++)
	{
		cout << S[i] << "\n";
	}
	cin.ignore();
	delete[]S;
}
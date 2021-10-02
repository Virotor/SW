#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


int main()
{
	srand(time(nullptr));
	vector<int> arr(4, 0);
	for (int i=0; i<4; i++)
		arr[i] = rand() % 10 +48;
	vector<int> guess(4, 0);
	for (int i = 0; i < 4; i++)
		while ((char)guess[i] != (char)arr[i])
			guess[i]++;
	cout << "Password = ";
	for (int number : arr)
		cout << (char)number;
	cout << "\nAssumed password = ";
	for (int number : guess)
		cout << (char)number;
	cout << endl;
	system("pause");
	return 0;
}

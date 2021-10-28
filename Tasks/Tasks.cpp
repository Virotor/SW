#include<iostream>
#include <ctime>
using namespace std;

void findIndex();

void elementBiggest();

void largestSubsequence();

int main()
{
	srand(time(0));
	findIndex();
	elementBiggest();
	largestSubsequence();
	return 0;

}

void findIndex() {
	int n;
	cout << "Enter n ";
	cin >> n;
	int right, left;
	cout << "Enter left border ";
	cin >> left;
	cout << "Enter right border ";
	cin >> right;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (right - left + 1) + left;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	int number;
	cout << "Enter number ";
	cin >> number;



	int index = -1;
	for (int i = n; i >= 0; i--)
	{
		if (arr[i] == number)
			index = i;
	}
	if (index == -1)
	{
		cout << "number is not founded";
	}
	else 	cout << "index of your number " << index;
	delete[] arr;
}

void elementBiggest() {
	int n;
	cout << "Enter n ";
	cin >> n;
	int right, left;
	cout << "Enter left border ";
	cin >> left;
	cout << "Enter right border ";
	cin >> right;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (right - left + 1) + left;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	cout << "Numbers ";
	for (int i = 0; i < n - 2; i++)
	{
		if ((arr[i] - arr[i + 1]) > arr[i + 2])
			cout << arr[i + 2] << " ";
	}
	delete[] arr;
}

void largestSubsequence() {
	int n;
	cout << "Enter n ";
	cin >> n;
	int right, left;
	cout << "Enter left border ";
	cin >> left;
	cout << "Enter right border ";
	cin >> right;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (right - left + 1) + left;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	int k = 1;
	int max = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			k++;

		}
		else {
			k = 1;
		}
		if (k > max)
			max = k;
	}
	cout << max << endl;
	delete[] arr;
}
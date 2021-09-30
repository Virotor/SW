#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
int n, k, X, z= 0, chislo;
cout << "Введите число n:"; 
cin >> n;
cout << "Введите число k:"; 
cin >> k;
X = n;
for (z; X > 0; z++) 
{
	        X /= 10;
}
            if (k > z)
            cout << n;
else
{
	       chislo= n / pow(10, z - k);
	       cout << chislo;
}
           return 0;
}
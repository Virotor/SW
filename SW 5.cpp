#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	int random,i;
	srand(time(NULL));
	random = rand();
	while(i!=random)
	{
		i++;
	}
	cout << "pasword - " << i;
	return 0;
}
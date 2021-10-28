#include <stdio.h>
#include <iostream>


int main()
{
	srand(time(NULL));
		char cifraParolya1 = rand() % 10 + '0';//
		printf("%c", cifraParolya1);
		char cifraParolya2 = rand() % 10 + '0';
		printf("%c", cifraParolya2);
		char cifraParolya3 = rand() % 10 + '0';
		printf("%c", cifraParolya3);
		char cifraParolya4 = rand() % 10 + '0';
		printf("%c\n",cifraParolya4);
		printf("Eto bilo legko ,vash parol:");
		int vspomogatelnoeChislo1;
		vspomogatelnoeChislo1 = (int)(cifraParolya1);
	
		switch (vspomogatelnoeChislo1)
		{
		case 48:printf("0"); break;
		case 49:printf("1"); break;
		case 50:printf("2"); break;
		case 51:printf("3"); break;
		case 52:printf("4"); break;
		case 53:printf("5"); break;
		case 54:printf("6"); break;
		case 55:printf("7"); break;
		case 56:printf("8"); break;
		case 57:printf("9"); break;
		}
		int vspomogatelnoeChislo2;
		vspomogatelnoeChislo2 = (int)(cifraParolya2);

		switch (vspomogatelnoeChislo2)
		{
		case 48:printf("0"); break;
		case 49:printf("1"); break;
		case 50:printf("2"); break;
		case 51:printf("3"); break;
		case 52:printf("4"); break;
		case 53:printf("5"); break;
		case 54:printf("6"); break;
		case 55:printf("7"); break;
		case 56:printf("8"); break;
		case 57:printf("9"); break;
		}
		int vspomogatelnoeChislo3;
		vspomogatelnoeChislo3 = (int)(cifraParolya3);

		switch (vspomogatelnoeChislo3)
		{
		case 48:printf("0"); break;
		case 49:printf("1"); break;
		case 50:printf("2"); break;
		case 51:printf("3"); break;
		case 52:printf("4"); break;
		case 53:printf("5"); break;
		case 54:printf("6"); break;
		case 55:printf("7"); break;
		case 56:printf("8"); break;
		case 57:printf("9"); break;
		}
		int vspomogatelnoeChislo4;
		vspomogatelnoeChislo4 = (int)(cifraParolya4);

		switch (vspomogatelnoeChislo4)
		{
		case 48:printf("0"); break;
		case 49:printf("1"); break;
		case 50:printf("2"); break;
		case 51:printf("3"); break;
		case 52:printf("4"); break;
		case 53:printf("5"); break;
		case 54:printf("6"); break;
		case 55:printf("7"); break;
		case 56:printf("8"); break;
		case 57:printf("9"); break;
		}

	
		
	
	return 0;
}
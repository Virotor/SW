

#include<stdio.h>
#include <iostream>
int main ()
{
printf("Input your number\n");
int vasheChislo;
scanf_s("%d", &vasheChislo);
switch (vasheChislo)
{
case 1:
	printf("Monday");
	break;
case 2:
	printf("Thuesday");
	break;
case 3:
	printf("Wednesday");
	break;
case 4:
	printf("Thursday");
	break;
case 5:
	printf("Friday");
	break;
case 6:
	printf("Saturday");
	break;
case 7:
	printf("Sunday");//
	break;

default:
	printf("invalid selection");//Русский язык не работает в гитхабе
}



return 0;
}



#include<stdio.h>
#include <iostream>
int main ()
{
setlocale(LC_ALL, "Russian");
printf("Введите ваше число(от 1 до 7) и я скажу вам день недели:\n");
int vasheChislo;
scanf_s("%d", &vasheChislo);
switch (vasheChislo)
{
case 1:
	printf("ЕЕЕ это понедельник");
	break;
case 2:
	printf("Ничего не скажу про вторник");
	break;
case 3:
	printf("Еще только середина недели,то есть среда");
	break;
case 4:
	printf("Сегодня четверг");
	break;
case 5:
	printf("Люблю пятницу");
	break;
case 6:
	printf("Субботочка");
	break;
case 7:
	printf("В воскресенье идём в церковь");
	break;

default:
	printf("Вводи норм число");
}



return 0;
}
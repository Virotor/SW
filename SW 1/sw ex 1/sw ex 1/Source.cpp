#include <stdio.h>
#include <math.h>
int main()
{
	printf("Vvedite chislo:\n");//
	int vvedenoeChislo;
	scanf_s("%d", &vvedenoeChislo);
	int ostatokOtDeleniya;
	ostatokOtDeleniya = 0;
	for (int i = 0; i <=vvedenoeChislo; i++)
	{
		ostatokOtDeleniya = vvedenoeChislo % 10;
		vvedenoeChislo = vvedenoeChislo / 10;

		printf("%d\n", ostatokOtDeleniya);//Так сойдёт ? Или нужно по порядку?
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Input n and k:\n");
	int n, k;
	scanf_s("%d%d", &n, &k);
	int kolichestvoCifr;
	int byfer;
	byfer = n;
	kolichestvoCifr = 0;
	for (int i = 0;n > 0; i++) 
	{
		n = n / 10;
		kolichestvoCifr += 1;
	}
	int novoeChislo, vspomogatelnoeChislo;
	vspomogatelnoeChislo = pow(10, kolichestvoCifr - k);//
	novoeChislo = byfer/vspomogatelnoeChislo;

	printf("Rezult:%d",novoeChislo);
	return 0;
}
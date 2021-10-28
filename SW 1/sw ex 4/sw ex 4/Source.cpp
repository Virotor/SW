#include <stdio.h>
#include <iostream>
int main()
{
	printf("Input dlinu i shirunu otverstiya\n");
	int dlinaOtverst, shirinaOtverst;
	scanf_s("%d%d", &dlinaOtverst, &shirinaOtverst);
	printf("Vvedite dlinu ,shirinu i visotu parallelipipeda\n");
	int lengthParallelepip, widthParallelipip, heightparalelepip;
	scanf_s("%d%d%d", &lengthParallelepip, &widthParallelipip, &heightparalelepip);
		if (lengthParallelepip < dlinaOtverst && widthParallelipip < shirinaOtverst || lengthParallelepip < shirinaOtverst & widthParallelipip < dlinaOtverst)
		{
			printf("Vleset\n");//
			system("pause");
			return 0;
		}
		if (lengthParallelepip < dlinaOtverst && heightparalelepip < shirinaOtverst || lengthParallelepip < shirinaOtverst & heightparalelepip < dlinaOtverst)
		{

			printf("Vleset\n");
			system("pause");
			return 0;
		}
		if (widthParallelipip < dlinaOtverst && heightparalelepip < shirinaOtverst || widthParallelipip < shirinaOtverst & heightparalelepip < dlinaOtverst)
		{
			printf("Vleset\n");//
			system("pause");
			return 0;
		}
	printf("Ne vleset\n");
	system("pause");
	return 0;
}
#include <stdio.h>

int NineNinedan(void)
{
	int dan = 0, num = 1;
	printf("���?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%dx%d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
#include <stdio.h>

int Q_01(void)
{
	int num;
	int i = 0;

	printf("양의 정수 입력: ");
	scanf_s("%d", &num);

	while (i < num)
	{
		printf("Hello world! %d \n", i);
		i++;
	}
	return 0;
}
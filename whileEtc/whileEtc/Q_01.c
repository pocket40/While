#include <stdio.h>

int Q_01(void)
{
	int num;
	int i = 0;

	printf("���� ���� �Է�: ");
	scanf_s("%d", &num);

	while (i < num)
	{
		printf("Hello world! %d \n", i);
		i++;
	}
	return 0;
}
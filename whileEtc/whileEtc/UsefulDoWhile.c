#include <stdio.h>

int UsefulDoWhile(void)
{
	int total = 0, num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num != 0);

	printf("�հ�: %d \n", total);
	return 0;
}
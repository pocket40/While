#include <stdio.h>

int Q_09(void)
{
	int cur = 2;
	int is = 0;

	do // 2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1;
		do
		{
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
		printf("\n");
	} while (cur < 10);

	return 0;
}
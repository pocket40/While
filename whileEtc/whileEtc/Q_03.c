#include <stdio.h>

int Q_03(void)
{
	int num = 0, plusnum = 1;

	while (plusnum != 0)
	{
		printf("���� ���ڸ� �Է�: ");
		scanf_s("%d", &plusnum);

		num += plusnum;
		printf("���� ���� : %d \n", num);
	}
	return 0;

}
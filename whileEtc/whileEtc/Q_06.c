#include <stdio.h>

int Q_06(void)
{
	int sum= 0, num =0  , i=0;

	while (i < 5)
	{
		
		while (num <= 0)
		 {
			printf("0���� ū���� �Է�(%d ��°)", i+1);
			printf("�ٽ� �Է�:");
			scanf_s("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("�� ��: %d \n", sum);
	return 0;
}
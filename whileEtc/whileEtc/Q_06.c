#include <stdio.h>

int Q_06(void)
{
	int sum= 0, num =0  , i=0;

	while (i < 5)
	{
		
		while (num <= 0)
		 {
			printf("0보다 큰수를 입력(%d 번째)", i+1);
			printf("다시 입력:");
			scanf_s("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총 합: %d \n", sum);
	return 0;
}
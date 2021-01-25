#include <stdio.h>

int Q_05(void)
{
	int total = 0, i = 0;
	int num, input;

	printf("입력할 정수의 수는?:");
	scanf_s("%d", &num);

	while (i++ < num)
	{
		printf("정수입력 : ");
		scanf_s("%d", &input);
		total += input;
	}
	printf("입력의 평균 : %f \n", (double)total / num);
	return 0;
}
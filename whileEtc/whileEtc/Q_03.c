#include <stdio.h>

int Q_03(void)
{
	int num = 0, plusnum = 1;

	while (plusnum != 0)
	{
		printf("더할 숫자를 입력: ");
		scanf_s("%d", &plusnum);

		num += plusnum;
		printf("더한 숫자 : %d \n", num);
	}
	return 0;

}
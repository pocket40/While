#include <stdio.h>

int Q_02(void)
{
	int num = 0, cnt = 0;
	printf("����� ����: ");
	scanf_s("%d", &num);

	while (cnt++ < num)
	{
		printf("%d, ", cnt * 3);
	}
	return 0;

}
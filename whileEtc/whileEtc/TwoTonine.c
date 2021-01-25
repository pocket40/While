#include <stdio.h>

int TwoTo(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10) // 2단부터 9단까지 반복
	{
		is = 1;
		while (is < 10) // 각 단의 1부터 9의 곱을 표현
		{
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		}
		printf("\n");
		cur++; // 다은 단으로 넘어가기 위한 증가
	}
	return 0;
}
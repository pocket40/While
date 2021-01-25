#include <stdio.h>

int main(void)
{
	int num, i;
	int result= 1;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		result = result * i;
	}

	printf("%d! = %d", num, result);
}
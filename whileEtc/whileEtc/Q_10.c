#include <stdio.h>

int Q_10(void)
{
	int start, end;
	int result; // start~end�� ��

	printf("���۰� �� �Է�");
	scanf_s("%d %d", &start, &end);

	for (result = 0; start <= end; start++)
		result += start;

	printf("�հ�: %d \n", result);
	return 0;
}
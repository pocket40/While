#include <stdio.h>

int TwoTo(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10) // 2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1;
		while (is < 10) // �� ���� 1���� 9�� ���� ǥ��
		{
			printf("%dx%d=%d \n", cur, is, cur * is);
			is++;
		}
		printf("\n");
		cur++; // ���� ������ �Ѿ�� ���� ����
	}
	return 0;
}
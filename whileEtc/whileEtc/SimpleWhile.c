#include <stdio.h>

int simpleWhile(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d \n", num);
		num++;
	}
	return 0;
}
#include <stdio.h>

int main(void)
{
	int a = 0;
	scanf_s("%d", &a);
	int i = 0;
	int tem = 1;
	int c = 1;
	int sum = 0;

	for (c = 1; c <= a; c++)
	{
		for (i = 1; i <= c; i++)
		{
			tem = i * tem;
		}
		sum = sum + tem;
		tem = 1;


	}
	printf("%d", sum);

	return 0;
}
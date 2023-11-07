#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d ", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//¼ÆËãnµÄ½×³Ë
int jiecheng(int x)
{
	if (x == 0)
	{
		return 1;
	}
	return x * jiecheng(x - 1);
}
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	double sum = 0;
	int k = 1;
	for (i = 0; (2 * i + 1) <= n; i++)
	{
		sum += 1.0/jiecheng(2*i+1)*k;
		k *= -1;
	}
	printf("%.10lf", sum);
	return 0;
}